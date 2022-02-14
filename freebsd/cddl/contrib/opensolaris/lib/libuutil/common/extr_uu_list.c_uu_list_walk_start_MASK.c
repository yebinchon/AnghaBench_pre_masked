
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uu_list_walk_t ;
typedef int uu_list_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;

uu_list_walk_t *
FUNC_3(uu_list_t *VAR_4, uint32_t VAR_5)
{
 uu_list_walk_t *VAR_6;

 if (VAR_5 & ~(VAR_3 | VAR_2)) {
  FUNC_1(VAR_1);
  return (((void*)0));
 }

 VAR_6 = FUNC_2(sizeof (*VAR_6));
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_0);
  return (((void*)0));
 }

 FUNC_0(VAR_6, VAR_4, VAR_5);
 return (VAR_6);
}
