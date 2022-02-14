
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct mem_dqinfo {int dqi_flags; int dqi_igrace; int dqi_bgrace; } ;
struct if_dqinfo {int dqi_flags; int dqi_valid; int dqi_igrace; int dqi_bgrace; } ;
struct TYPE_2__ {int dqonoff_mutex; struct mem_dqinfo* info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct super_block *VAR_4, int VAR_5, struct if_dqinfo *VAR_6)
{
 struct mem_dqinfo *VAR_7;

 FUNC_0(&FUNC_2(VAR_4)->dqonoff_mutex);
 if (!FUNC_3(VAR_4, VAR_5)) {
  FUNC_1(&FUNC_2(VAR_4)->dqonoff_mutex);
  return -VAR_1;
 }
 VAR_7 = FUNC_2(VAR_4)->info + VAR_5;
 FUNC_4(&VAR_3);
 VAR_6->dqi_bgrace = VAR_7->dqi_bgrace;
 VAR_6->dqi_igrace = VAR_7->dqi_igrace;
 VAR_6->dqi_flags = VAR_7->dqi_flags & VAR_0;
 VAR_6->dqi_valid = VAR_2;
 FUNC_5(&VAR_3);
 FUNC_1(&FUNC_2(VAR_4)->dqonoff_mutex);
 return 0;
}
