
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int info_pool; int paths; int reps_file; int dir_props_file; int file_props_file; int changes_file; int reps; int references; int path_order; int rev_offsets; int dir_props; int file_props; int changes; } ;
typedef TYPE_1__ pack_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,char const*,int ,int ,int *) ;
 int FUNC_4 (char const**,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(pack_context_t *VAR_2,
                   apr_pool_t *VAR_3)
{
  const char *VAR_4;

  FUNC_1(VAR_2->changes);
  FUNC_0(FUNC_2(VAR_2->changes_file, VAR_3));
  FUNC_1(VAR_2->file_props);
  FUNC_0(FUNC_2(VAR_2->file_props_file, VAR_3));
  FUNC_1(VAR_2->dir_props);
  FUNC_0(FUNC_2(VAR_2->dir_props_file, VAR_3));

  FUNC_1(VAR_2->rev_offsets);
  FUNC_1(VAR_2->path_order);
  FUNC_1(VAR_2->references);
  FUNC_1(VAR_2->reps);
  FUNC_0(FUNC_2(VAR_2->reps_file, VAR_3));

  FUNC_5(VAR_2->info_pool);



  FUNC_0(FUNC_4(&VAR_4, VAR_3));
  FUNC_0(FUNC_3(&VAR_2->changes_file, ((void*)0), VAR_4,
                                   VAR_1,
                                   VAR_2->info_pool, VAR_3));
  FUNC_0(FUNC_3(&VAR_2->file_props_file, ((void*)0), VAR_4,
                                   VAR_1,
                                   VAR_2->info_pool, VAR_3));
  FUNC_0(FUNC_3(&VAR_2->dir_props_file, ((void*)0), VAR_4,
                                   VAR_1,
                                   VAR_2->info_pool, VAR_3));
  FUNC_0(FUNC_3(&VAR_2->reps_file, ((void*)0), VAR_4,
                                   VAR_1,
                                   VAR_2->info_pool, VAR_3));
  VAR_2->paths = FUNC_6(VAR_2->info_pool);

  return VAR_0;
}
