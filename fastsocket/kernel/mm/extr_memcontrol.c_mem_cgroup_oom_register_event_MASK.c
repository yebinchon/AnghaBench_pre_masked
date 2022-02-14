
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_eventfd_list {int list; struct eventfd_ctx* eventfd; } ;
struct mem_cgroup {int under_oom; int oom_notify; } ;
struct eventfd_ctx {int dummy; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct eventfd_ctx*,int) ;
 struct mem_cgroup_eventfd_list* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 struct mem_cgroup* FUNC_6 (struct cgroup*) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct cgroup *VAR_4,
 struct cftype *VAR_5, struct eventfd_ctx *VAR_6, const char *VAR_7)
{
 struct mem_cgroup *VAR_8 = FUNC_6(VAR_4);
 struct mem_cgroup_eventfd_list *VAR_9;
 int VAR_10 = FUNC_1(VAR_5->private);

 FUNC_0(VAR_10 != VAR_2);
 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_7(&VAR_3);

 VAR_9->eventfd = VAR_6;
 FUNC_5(&VAR_9->list, &VAR_8->oom_notify);


 if (FUNC_2(&VAR_8->under_oom))
  FUNC_3(VAR_6, 1);
 FUNC_8(&VAR_3);

 return 0;
}
