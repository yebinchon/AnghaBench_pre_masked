
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_type_list {int mtl_error; int mtl_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct memory_type_list* FUNC_1 (int) ;

struct memory_type_list *
FUNC_2(void)
{
 struct memory_type_list *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0(&VAR_1->mtl_list);
 VAR_1->mtl_error = VAR_0;
 return (VAR_1);
}
