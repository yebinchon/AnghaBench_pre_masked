
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int txg_list_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;

boolean_t
FUNC_1(txg_list_t *VAR_3)
{
 for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_0(VAR_3, VAR_4)) {
   return (VAR_0);
  }
 }
 return (VAR_1);
}
