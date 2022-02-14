
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int FILE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(FILE *VAR_1)
{
 HANDLE VAR_2;

 if (VAR_1 == ((void*)0))
  return -1;

 VAR_2 = (HANDLE) FUNC_2(FUNC_1(VAR_1));
 if (VAR_2 == VAR_0)
  return -1;

 if (!FUNC_0(VAR_2))
  return -1;

 return 0;
}
