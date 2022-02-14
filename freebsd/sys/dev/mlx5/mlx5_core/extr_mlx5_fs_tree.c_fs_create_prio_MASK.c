
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_flow_namespace {int prios; int base; } ;
struct TYPE_2__ {int list; int type; } ;
struct fs_prio {int max_ft; unsigned int prio; int shared_lock; int objs; TYPE_1__ base; int flags; int max_ns; } ;


 int VAR_0 ;
 struct fs_prio* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *,char const*,int) ;
 struct fs_prio* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct fs_prio *FUNC_6(struct mlx5_flow_namespace *VAR_4,
          unsigned VAR_5, int VAR_6,
          const char *VAR_7, u8 VAR_8)
{
 struct fs_prio *VAR_9;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->base.type = VAR_1;
 FUNC_2(&VAR_9->base, &VAR_4->base, VAR_7, 1);
 VAR_9->max_ft = VAR_6;
 VAR_9->max_ns = VAR_3;
 VAR_9->prio = VAR_5;
 VAR_9->flags = VAR_8;
 FUNC_4(&VAR_9->base.list, &VAR_4->prios);
 FUNC_1(&VAR_9->objs);
 FUNC_5(&VAR_9->shared_lock);

 return VAR_9;
}
