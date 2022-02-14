
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pernet_operations {int list; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct pernet_operations*) ;

int FUNC_3(struct pernet_operations *VAR_3)
{
 int VAR_4;
 FUNC_0(&VAR_1);
 VAR_4 = FUNC_2(&VAR_2, VAR_3);
 if (!VAR_4 && (VAR_0 == &VAR_2))
  VAR_0 = &VAR_3->list;
 FUNC_1(&VAR_1);
 return VAR_4;
}
