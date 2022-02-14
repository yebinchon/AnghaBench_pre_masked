
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int name ;


 int FUNC_0 (int *,size_t) ;
 int * FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char const*,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0)
{
 u_char *VAR_1, *VAR_2;
 char VAR_3[64];
 size_t VAR_4;
 int VAR_5;

 for (VAR_5 = 0; ; VAR_5++) {
  FUNC_4(VAR_3, sizeof(VAR_3), "%s:geli_keyfile%d", VAR_0, VAR_5);
  VAR_1 = FUNC_3(VAR_3);
  if (VAR_1 == ((void*)0))
   return;
  VAR_2 = FUNC_1(VAR_1);
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_2 != ((void*)0) && VAR_4 != 0)
   FUNC_0(VAR_2, VAR_4);
 }
}
