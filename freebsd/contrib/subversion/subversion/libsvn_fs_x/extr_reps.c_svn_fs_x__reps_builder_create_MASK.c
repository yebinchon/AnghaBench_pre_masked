
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* instructions; void* reps; void* bases; int hash; int text; int * fs; } ;
typedef TYPE_1__ svn_fs_x__reps_builder_t ;
typedef int svn_fs_t ;
typedef int rep_t ;
typedef int instruction_t ;
typedef int base_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *) ;

svn_fs_x__reps_builder_t *
FUNC_4(svn_fs_t *VAR_0,
                              apr_pool_t *VAR_1)
{
  svn_fs_x__reps_builder_t *VAR_2 = FUNC_1(VAR_1,
                                                 sizeof(*VAR_2));

  VAR_2->fs = VAR_0;
  VAR_2->text = FUNC_3(VAR_1);
  FUNC_2(&VAR_2->hash, 4, VAR_1);

  VAR_2->bases = FUNC_0(VAR_1, 0, sizeof(base_t));
  VAR_2->reps = FUNC_0(VAR_1, 0, sizeof(rep_t));
  VAR_2->instructions = FUNC_0(VAR_1, 0,
                                        sizeof(instruction_t));

  return VAR_2;
}
