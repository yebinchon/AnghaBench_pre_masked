
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_sel {scalar_t__ refcnt; struct cgroup_sel* name; int fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cgroup_sel*) ;

void FUNC_2(struct cgroup_sel *VAR_0)
{
 if (!VAR_0)
  return;


 if (--VAR_0->refcnt == 0) {
  FUNC_0(VAR_0->fd);
  FUNC_1(VAR_0->name);
  FUNC_1(VAR_0);
 }
}
