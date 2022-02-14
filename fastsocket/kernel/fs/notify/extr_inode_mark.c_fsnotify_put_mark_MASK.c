
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark_entry {int (* free_mark ) (struct fsnotify_mark_entry*) ;int refcnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct fsnotify_mark_entry*) ;

void FUNC_2(struct fsnotify_mark_entry *VAR_0)
{
 if (FUNC_0(&VAR_0->refcnt))
  VAR_0->free_mark(VAR_0);
}
