
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int nv_alloc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_4 (int **,int ,int *) ;

nvlist_t *
FUNC_5(nv_alloc_t *VAR_3)
{
 int VAR_4 = 0;
 nvlist_t *VAR_5;
 nv_alloc_t *VAR_6;

 if (VAR_3 == ((void*)0)) {
  VAR_6 = FUNC_1(sizeof (nv_alloc_t), VAR_0);

  if (FUNC_3(VAR_6, &VAR_2, ((void*)0), 0) != 0) {
   FUNC_0(VAR_6, sizeof (nv_alloc_t));
   return (((void*)0));
  }
  VAR_4 = 1;
 } else {
  VAR_6 = VAR_3;
 }

 if (FUNC_4(&VAR_5, VAR_1, VAR_6) != 0) {
  if (VAR_4) {
   FUNC_2(VAR_6);
   FUNC_0(VAR_6, sizeof (nv_alloc_t));
  }
  return (((void*)0));
 }

 return (VAR_5);
}
