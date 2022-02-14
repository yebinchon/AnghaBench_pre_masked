
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nv_alloc_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,int ,char*,size_t) ;
 int VAR_1 ;

nv_alloc_t *
FUNC_3(char *VAR_2, size_t VAR_3)
{
 nv_alloc_t *VAR_4 = FUNC_1(sizeof (nv_alloc_t), VAR_0);

 if (VAR_3 == 0 || FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3) != 0) {
  FUNC_0(VAR_4, sizeof (nv_alloc_t));
  return (((void*)0));
 }

 return (VAR_4);
}
