
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sldns_file_parse_state {int lineno; } ;
struct config_file {char* chrootdir; } ;
struct auth_zone {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct auth_zone*,int *,size_t,size_t,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int *,size_t*,size_t*,struct sldns_file_parse_state*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int *,size_t,size_t) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_16(struct auth_zone* VAR_4, FILE* VAR_5, uint8_t* VAR_6, size_t VAR_7,
 struct sldns_file_parse_state* VAR_8, char* VAR_9, int VAR_10,
 struct config_file* VAR_11)
{
 size_t VAR_12, VAR_13;
 int VAR_14;
 VAR_8->lineno = 1;

 while(!FUNC_3(VAR_5)) {
  VAR_12 = VAR_7;
  VAR_13 = 0;
  VAR_14 = FUNC_7(VAR_5, VAR_6, &VAR_12, &VAR_13,
   VAR_8);
  if(VAR_14 == VAR_0 && VAR_12 == 0) {

   if(FUNC_14((char*)VAR_6, "$INCLUDE ", 9) == 0 ||
      FUNC_14((char*)VAR_6, "$INCLUDE\t", 9) == 0) {
    FILE* VAR_15;
    int VAR_16 = VAR_8->lineno;
    char* VAR_17 = (char*)VAR_6 + 8;
    if(VAR_10 > VAR_1) {
     FUNC_6("%s:%d max include depth"
       "exceeded", VAR_9, VAR_8->lineno);
     return 0;
    }

    while(*VAR_17 == ' ' || *VAR_17 == '\t')
     VAR_17++;

    if(VAR_11->chrootdir && VAR_11->chrootdir[0] &&
     FUNC_14(VAR_17, VAR_11->chrootdir,
      FUNC_13(VAR_11->chrootdir)) == 0)
     VAR_17 += FUNC_13(VAR_11->chrootdir);
    VAR_17 = FUNC_11(VAR_17);
    if(!VAR_17) {
     FUNC_6("malloc failure");
     return 0;
    }
    FUNC_15(VAR_2, "opening $INCLUDE %s",
     VAR_17);
    VAR_15 = FUNC_4(VAR_17, "r");
    if(!VAR_15) {
     FUNC_6("%s:%d cannot open include "
      "file %s: %s", VAR_9,
      VAR_16, VAR_17,
      FUNC_12(VAR_3));
     FUNC_5(VAR_17);
     return 0;
    }

    if(!FUNC_16(VAR_4, VAR_15, VAR_6, VAR_7,
     VAR_8, VAR_17, VAR_10+1, VAR_11)) {
     FUNC_6("%s:%d cannot parse include "
      "file %s", VAR_9,
      VAR_16, VAR_17);
     FUNC_2(VAR_15);
     FUNC_5(VAR_17);
     return 0;
    }
    FUNC_2(VAR_15);
    FUNC_15(VAR_2, "done with $INCLUDE %s",
     VAR_17);
    FUNC_5(VAR_17);
    VAR_8->lineno = VAR_16;
   }
   continue;
  }
  if(VAR_14 != 0) {
   FUNC_6("parse error %s %d:%d: %s", VAR_9,
    VAR_8->lineno, FUNC_0(VAR_14),
    FUNC_8(VAR_14));
   return 0;
  }
  if(VAR_12 == 0) {

   continue;
  }

  if(!FUNC_1(VAR_4, VAR_6, VAR_12, VAR_13, ((void*)0))) {
   char VAR_18[17];
   FUNC_9(FUNC_10(VAR_6,
    VAR_12, VAR_13), VAR_18, sizeof(VAR_18));
   FUNC_6("%s:%d cannot insert RR of type %s",
    VAR_9, VAR_8->lineno, VAR_18);
   return 0;
  }
 }
 return 1;
}
