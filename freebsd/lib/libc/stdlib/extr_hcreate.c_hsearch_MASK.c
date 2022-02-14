
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENTRY ;
typedef int ACTION ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int **,int *) ;

ENTRY *
FUNC_2(ENTRY VAR_2, ACTION VAR_3)
{
 ENTRY *VAR_4;


 if (!VAR_1) {
  if (FUNC_0(0, &VAR_0) == 0)
   return (((void*)0));
  VAR_1 = 1;
 }
 if (FUNC_1(VAR_2, VAR_3, &VAR_4, &VAR_0) == 0)
  return (((void*)0));
 return (VAR_4);
}
