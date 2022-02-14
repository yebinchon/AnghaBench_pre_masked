
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ is_outer_most_lock; int baton; int * (* body ) (int ,int *) ;scalar_t__ is_inner_most_lock; scalar_t__ is_global_lock; TYPE_2__* fs; int lock_path; int * lock_pool; } ;
typedef TYPE_1__ with_lock_baton_t ;
struct TYPE_9__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ format; int youngest_rev_cache; int has_write_lock; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*,int ,int ) ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,TYPE_2__*,int *) ;
 int VAR_3 ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(with_lock_baton_t *VAR_4)
{
  apr_pool_t *VAR_5 = VAR_4->lock_pool;
  svn_error_t *VAR_6 = FUNC_1(VAR_4->lock_path, VAR_5);

  if (!VAR_6)
    {
      svn_fs_t *VAR_7 = VAR_4->fs;
      fs_fs_data_t *VAR_8 = VAR_7->fsap_data;

      if (VAR_4->is_global_lock)
        {

          FUNC_0(VAR_5,
                                    VAR_8,
                                    VAR_3,
                                    VAR_2);
          VAR_8->has_write_lock = VAR_1;
        }



      if (VAR_4->is_inner_most_lock)
        {
          if (VAR_8->format >= VAR_0)
            VAR_6 = FUNC_5(VAR_7, VAR_5);
          if (!VAR_6)
            VAR_6 = FUNC_2(&VAR_8->youngest_rev_cache, VAR_7, VAR_5);
        }

      if (!VAR_6)
        VAR_6 = VAR_4->body(VAR_4->baton, VAR_5);
    }

  if (VAR_4->is_outer_most_lock)
    FUNC_6(VAR_5);

  return FUNC_4(VAR_6);
}
