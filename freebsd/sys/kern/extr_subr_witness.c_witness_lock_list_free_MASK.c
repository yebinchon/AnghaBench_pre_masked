
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_list_entry {struct lock_list_entry* ll_next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct lock_list_entry* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct lock_list_entry *VAR_2)
{

 FUNC_0(&VAR_1);
 VAR_2->ll_next = VAR_0;
 VAR_0 = VAR_2;
 FUNC_1(&VAR_1);
}
