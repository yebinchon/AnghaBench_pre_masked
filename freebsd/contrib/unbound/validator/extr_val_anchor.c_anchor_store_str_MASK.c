
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int dummy; } ;
typedef int sldns_buffer ;


 int FUNC_0 (int) ;
 struct trust_anchor* FUNC_1 (struct val_anchors*,int *,size_t,size_t) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,int *,size_t*,size_t*,int ,int *,int ,int *,int ) ;

struct trust_anchor*
FUNC_7(struct val_anchors* VAR_0, sldns_buffer* VAR_1,
 const char* VAR_2)
{
 struct trust_anchor* VAR_3;
 uint8_t* VAR_4 = FUNC_3(VAR_1);
 size_t VAR_5 = FUNC_4(VAR_1), VAR_6 = 0;
 int VAR_7 = FUNC_6(VAR_2, VAR_4, &VAR_5, &VAR_6,
  0, ((void*)0), 0, ((void*)0), 0);
 if(VAR_7 != 0) {
  FUNC_2("error parsing trust anchor %s: at %d: %s",
   VAR_2, FUNC_0(VAR_7),
   FUNC_5(VAR_7));
  return ((void*)0);
 }
 if(!(VAR_3=FUNC_1(VAR_0, VAR_4, VAR_5, VAR_6))) {
  FUNC_2("out of memory");
  return ((void*)0);
 }
 return VAR_3;
}
