
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int dummy; } ;
struct sldns_file_parse_state {int default_ttl; int lineno; } ;
typedef int sldns_buffer ;
typedef int pst ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct trust_anchor* FUNC_1 (struct val_anchors*,int *,size_t,size_t) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*,int,...) ;
 int FUNC_6 (struct sldns_file_parse_state*,int ,int) ;
 int * FUNC_7 (int *) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,size_t*,size_t*,struct sldns_file_parse_state*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *,size_t,size_t) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static struct trust_anchor*
FUNC_13(struct val_anchors* VAR_3, sldns_buffer* VAR_4,
 const char* VAR_5, int VAR_6)
{
 struct trust_anchor* VAR_7 = ((void*)0), *VAR_8;
 struct sldns_file_parse_state VAR_9;
 int VAR_10;
 size_t VAR_11, VAR_12;
 uint8_t* VAR_13 = FUNC_7(VAR_4);
 int VAR_14 = 1;
 FILE* VAR_15 = FUNC_4(VAR_5, "r");
 if(!VAR_15) {
  FUNC_5("error opening file %s: %s", VAR_5, FUNC_12(VAR_2));
  return 0;
 }
 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.default_ttl = 3600;
 VAR_9.lineno = 1;
 while(!FUNC_3(VAR_15)) {
  VAR_11 = FUNC_8(VAR_4);
  VAR_12 = 0;
  VAR_10 = FUNC_9(VAR_15, VAR_13, &VAR_11, &VAR_12, &VAR_9);
  if(VAR_11 == 0)
   continue;
  if(VAR_10 != 0) {
   FUNC_5("parse error in %s:%d:%d : %s", VAR_5,
    VAR_9.lineno, FUNC_0(VAR_10),
    FUNC_10(VAR_10));
   VAR_14 = 0;
   break;
  }
  if(FUNC_11(VAR_13, VAR_11, VAR_12) !=
   VAR_1 && FUNC_11(VAR_13, VAR_11,
   VAR_12) != VAR_0) {
   continue;
  }
  if(!(VAR_8=FUNC_1(VAR_3, VAR_13, VAR_11, VAR_12))) {
   FUNC_5("mem error at %s line %d", VAR_5, VAR_9.lineno);
   VAR_14 = 0;
   break;
  }
  if(VAR_6 && VAR_7 && VAR_7 != VAR_8) {
   FUNC_5("error at %s line %d: no multiple anchor "
    "domains allowed (you can have multiple "
    "keys, but they must have the same name).",
    VAR_5, VAR_9.lineno);
   VAR_14 = 0;
   break;
  }
  VAR_7 = VAR_8;
 }
 FUNC_2(VAR_15);
 if(!VAR_14) return ((void*)0);

 if(!VAR_6 && !VAR_7) return (struct trust_anchor*)1;
 return VAR_7;
}
