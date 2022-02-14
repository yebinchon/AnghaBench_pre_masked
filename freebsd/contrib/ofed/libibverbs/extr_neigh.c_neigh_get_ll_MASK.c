
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_neigh_handler {int * found_ll_addr; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct get_neigh_handler *VAR_1, void *VAR_2,
   int VAR_3) {
 int VAR_4;

 if (VAR_1->found_ll_addr == ((void*)0))
  return -VAR_0;

  VAR_4 = FUNC_2(VAR_1->found_ll_addr);

 if (VAR_4 > VAR_3)
  return -VAR_0;

 FUNC_0(VAR_2, FUNC_1(VAR_1->found_ll_addr),
        VAR_4);

 return VAR_4;
}
