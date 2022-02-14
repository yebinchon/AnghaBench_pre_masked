
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(cap_channel_t *VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
 nvlist_t *VAR_6;

 VAR_6 = FUNC_4(0);
 FUNC_3(VAR_6, "cmd", "openlog");
 if (VAR_3 != ((void*)0)) {
  FUNC_3(VAR_6, "ident", VAR_3);
 }
 FUNC_2(VAR_6, "logopt", VAR_4);
 FUNC_2(VAR_6, "facility", VAR_5);
 if (VAR_4 & VAR_0) {
  FUNC_1(VAR_6, "stderr", VAR_1);
 }
 VAR_6 = FUNC_0(VAR_2, VAR_6);
 if (VAR_6 == ((void*)0)) {
  return;
 }
 FUNC_5(VAR_6);
}
