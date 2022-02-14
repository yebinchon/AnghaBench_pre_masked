
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quota_info {int dqio_mutex; TYPE_1__** ops; } ;
struct TYPE_2__ {int (* write_file_info ) (struct super_block*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct quota_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int) ;

int FUNC_4(struct super_block *VAR_0, int VAR_1)
{
 int VAR_2;
 struct quota_info *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(&VAR_3->dqio_mutex);
 VAR_2 = VAR_3->ops[VAR_1]->write_file_info(VAR_0, VAR_1);
 FUNC_1(&VAR_3->dqio_mutex);
 return VAR_2;
}
