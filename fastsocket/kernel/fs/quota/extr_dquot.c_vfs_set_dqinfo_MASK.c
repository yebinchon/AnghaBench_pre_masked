
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* dq_op; } ;
struct mem_dqinfo {int dqi_flags; int dqi_igrace; int dqi_bgrace; } ;
struct if_dqinfo {int dqi_valid; int dqi_flags; int dqi_igrace; int dqi_bgrace; } ;
struct TYPE_4__ {int dqonoff_mutex; struct mem_dqinfo* info; } ;
struct TYPE_3__ {int (* write_info ) (struct super_block*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct super_block*,int) ;

int FUNC_8(struct super_block *VAR_6, int VAR_7, struct if_dqinfo *VAR_8)
{
 struct mem_dqinfo *VAR_9;
 int VAR_10 = 0;

 FUNC_1(&FUNC_3(VAR_6)->dqonoff_mutex);
 if (!FUNC_4(VAR_6, VAR_7)) {
  VAR_10 = -VAR_1;
  goto out;
 }
 VAR_9 = FUNC_3(VAR_6)->info + VAR_7;
 FUNC_5(&VAR_5);
 if (VAR_8->dqi_valid & VAR_2)
  VAR_9->dqi_bgrace = VAR_8->dqi_bgrace;
 if (VAR_8->dqi_valid & VAR_4)
  VAR_9->dqi_igrace = VAR_8->dqi_igrace;
 if (VAR_8->dqi_valid & VAR_3)
  VAR_9->dqi_flags = (VAR_9->dqi_flags & ~VAR_0) |
    (VAR_8->dqi_flags & VAR_0);
 FUNC_6(&VAR_5);
 FUNC_0(VAR_6, VAR_7);

 VAR_6->dq_op->write_info(VAR_6, VAR_7);
out:
 FUNC_2(&FUNC_3(VAR_6)->dqonoff_mutex);
 return VAR_10;
}
