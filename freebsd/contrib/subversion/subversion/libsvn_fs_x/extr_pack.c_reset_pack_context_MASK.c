
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int info_pool; int paths; int reps_file; int reps; int references; int path_order; int rev_offsets; int dir_props_file; int dir_props; int file_props_file; int file_props; int changes_file; int changes; } ;
typedef TYPE_1__ pack_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(pack_context_t *VAR_1,
                   apr_pool_t *VAR_2)
{
  FUNC_1(VAR_1->changes);
  FUNC_0(FUNC_2(VAR_1->changes_file, 0, VAR_2));
  FUNC_1(VAR_1->file_props);
  FUNC_0(FUNC_2(VAR_1->file_props_file, 0, VAR_2));
  FUNC_1(VAR_1->dir_props);
  FUNC_0(FUNC_2(VAR_1->dir_props_file, 0, VAR_2));

  FUNC_1(VAR_1->rev_offsets);
  FUNC_1(VAR_1->path_order);
  FUNC_1(VAR_1->references);
  FUNC_1(VAR_1->reps);
  FUNC_0(FUNC_2(VAR_1->reps_file, 0, VAR_2));

  FUNC_3(VAR_1->info_pool);
  VAR_1->paths = FUNC_4(VAR_1->info_pool);

  return VAR_0;
}
