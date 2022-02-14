
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int event_list_lock; int event_list; int pidlist_mutex; int pidlists; int release_list; int css_sets; int children; int sibling; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cgroup *VAR_0)
{
 FUNC_0(&VAR_0->sibling);
 FUNC_0(&VAR_0->children);
 FUNC_0(&VAR_0->css_sets);
 FUNC_0(&VAR_0->release_list);
 FUNC_0(&VAR_0->pidlists);
 FUNC_1(&VAR_0->pidlist_mutex);
 FUNC_0(&VAR_0->event_list);
 FUNC_2(&VAR_0->event_list_lock);
}
