
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mtype_t ;
typedef int SCR ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *,char const*,int*) ;
 int FUNC_2 (int *,int ,char const*,char const*) ;

void
FUNC_3(
 SCR *VAR_1,
 mtype_t VAR_2,
 const char *VAR_3,
 const char *VAR_4)
{
 int VAR_5, VAR_6;
 char *VAR_7;

 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_1, VAR_2, "%s", VAR_4);
  return;
 }

 VAR_6 = VAR_0;
 VAR_7 = FUNC_1(VAR_1, VAR_3, &VAR_5);
 VAR_0 = VAR_6;
 FUNC_2(VAR_1, VAR_2, VAR_4, VAR_7);
 if (VAR_5)
  FUNC_0(VAR_1, VAR_7, 0);
}
