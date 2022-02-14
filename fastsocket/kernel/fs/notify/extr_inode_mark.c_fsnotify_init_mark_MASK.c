
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark_entry {void (* free_mark ) (struct fsnotify_mark_entry*) ;int * inode; scalar_t__ mask; int * group; int i_list; int refcnt; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct fsnotify_mark_entry *VAR_0,
   void (*VAR_1)(struct fsnotify_mark_entry *VAR_2))

{
 FUNC_2(&VAR_0->lock);
 FUNC_1(&VAR_0->refcnt, 1);
 FUNC_0(&VAR_0->i_list);
 VAR_0->group = ((void*)0);
 VAR_0->mask = 0;
 VAR_0->inode = ((void*)0);
 VAR_0->free_mark = VAR_1;
}
