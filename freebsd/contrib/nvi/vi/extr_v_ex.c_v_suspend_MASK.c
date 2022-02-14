
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VICMD ;
typedef int SCR ;
typedef int EXCMD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int *) ;

int
FUNC_5(SCR *VAR_2, VICMD *VAR_3)
{
 EXCMD VAR_4;

 FUNC_3(VAR_2, &VAR_4, VAR_0, 0, VAR_1, VAR_1, 0);
 FUNC_2(VAR_2, &VAR_4, FUNC_0("suspend"), FUNC_1(FUNC_0("suspend")));
 return (FUNC_4(VAR_2, VAR_3, &VAR_4));
}
