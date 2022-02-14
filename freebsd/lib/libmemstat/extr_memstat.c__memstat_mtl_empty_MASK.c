
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_type_list {int mtl_list; } ;
struct memory_type {struct memory_type* mt_percpu_cache; struct memory_type* mt_percpu_alloc; } ;


 struct memory_type* FUNC_0 (int *) ;
 int FUNC_1 (struct memory_type*,int ) ;
 int FUNC_2 (struct memory_type*) ;
 int VAR_0 ;

void
FUNC_3(struct memory_type_list *VAR_1)
{
 struct memory_type *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->mtl_list))) {
  FUNC_2(VAR_2->mt_percpu_alloc);
  FUNC_2(VAR_2->mt_percpu_cache);
  FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
