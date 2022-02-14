
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(HANDLE VAR_2, int VAR_3)
{
 DWORD VAR_4;

 if (FUNC_1(VAR_2, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0)))
  return 0;

 VAR_4 = FUNC_0();
 if (VAR_4 == VAR_1 || (VAR_4 == VAR_0 && VAR_3))
  return 1;
 return 0;
}
