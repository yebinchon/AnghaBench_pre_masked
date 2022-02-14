
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ocs_textbuf_t ;
typedef int label ;
typedef int fc_plogi_payload_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,void*,int) ;
 int FUNC_1 (int ,int *,char*,void*,int) ;
 int FUNC_2 (char*,int,char*,char const*,...) ;

void
FUNC_3(const char *VAR_1, const char *VAR_2, int VAR_3, void *VAR_4, void *VAR_5)
{
 char VAR_6[64];

 if (VAR_5 == ((void*)0)) {
  return;
 }

 switch(VAR_3) {
 case 0:
  if (VAR_1 != ((void*)0)) {
   FUNC_2(VAR_6, sizeof(VAR_6), "[%s] sparam: %s", VAR_1, VAR_2);
  } else {
   FUNC_2(VAR_6, sizeof(VAR_6), "sparam: %s", VAR_2);
  }

  FUNC_1(VAR_0, ((void*)0), VAR_6, VAR_5, sizeof(fc_plogi_payload_t));
  break;
 case 1:
  FUNC_0((ocs_textbuf_t*) VAR_4, VAR_2, 0, VAR_5, sizeof(fc_plogi_payload_t));
  break;
 }
}
