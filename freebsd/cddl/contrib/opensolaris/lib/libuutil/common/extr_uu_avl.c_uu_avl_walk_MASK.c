
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* uu_walk_fn_t ) (void*,void*) ;
typedef int uu_avl_walk_t ;
typedef int uu_avl_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(uu_avl_t *VAR_5, uu_walk_fn_t *VAR_6, void *VAR_7, uint32_t VAR_8)
{
 void *VAR_9;
 uu_avl_walk_t VAR_10;

 int VAR_11 = VAR_2;

 if (VAR_8 & ~(VAR_4 | VAR_3)) {
  FUNC_4(VAR_1);
  return (-1);
 }

 FUNC_2(&VAR_10, VAR_5, VAR_8);
 while (VAR_11 == VAR_2 &&
     (VAR_9 = FUNC_0(&VAR_10, VAR_5)) != ((void*)0))
  VAR_11 = (*VAR_6)(VAR_9, VAR_7);
 FUNC_1(&VAR_10);

 if (VAR_11 >= 0)
  return (0);
 FUNC_4(VAR_0);
 return (-1);
}
