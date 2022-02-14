
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcore_list {unsigned long addr; size_t size; int type; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct kcore_list *VAR_2, void *VAR_3, size_t VAR_4, int VAR_5)
{
 VAR_2->addr = (unsigned long)VAR_3;
 VAR_2->size = VAR_4;
 VAR_2->type = VAR_5;

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_2->list, &VAR_0);
 FUNC_2(&VAR_1);
}
