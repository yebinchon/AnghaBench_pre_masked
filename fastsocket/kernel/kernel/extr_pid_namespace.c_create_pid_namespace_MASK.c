
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid_namespace {int level; TYPE_1__* pidmap; int proc_work; int parent; int kref; int proc_inum; int * pid_cachep; } ;
struct TYPE_2__ {int page; int nr_free; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pid_namespace* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (unsigned int) ;
 int FUNC_4 (struct pid_namespace*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct pid_namespace*) ;
 struct pid_namespace* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static struct pid_namespace *FUNC_12(struct pid_namespace *VAR_7)
{
 struct pid_namespace *VAR_8;
 unsigned int VAR_9 = VAR_7->level + 1;
 int VAR_10, VAR_11 = -VAR_1;

 VAR_8 = FUNC_7(VAR_5, VAR_2);
 if (VAR_8 == ((void*)0))
  goto out;

 VAR_8->pidmap[0].page = FUNC_9(VAR_3, VAR_2);
 if (!VAR_8->pidmap[0].page)
  goto out_free;

 VAR_8->pid_cachep = FUNC_3(VAR_9 + 1);
 if (VAR_8->pid_cachep == ((void*)0))
  goto out_free_map;

 VAR_11 = FUNC_10(&VAR_8->proc_inum);
 if (VAR_11)
  goto out_free_map;

 FUNC_8(&VAR_8->kref);
 VAR_8->level = VAR_9;
 VAR_8->parent = FUNC_4(VAR_7);
 FUNC_1(&VAR_8->proc_work, VAR_6);

 FUNC_11(0, VAR_8->pidmap[0].page);
 FUNC_2(&VAR_8->pidmap[0].nr_free, VAR_0 - 1);

 for (VAR_10 = 1; VAR_10 < VAR_4; VAR_10++)
  FUNC_2(&VAR_8->pidmap[VAR_10].nr_free, VAR_0);

 return VAR_8;

out_free_map:
 FUNC_5(VAR_8->pidmap[0].page);
out_free:
 FUNC_6(VAR_5, VAR_8);
out:
 return FUNC_0(VAR_11);
}
