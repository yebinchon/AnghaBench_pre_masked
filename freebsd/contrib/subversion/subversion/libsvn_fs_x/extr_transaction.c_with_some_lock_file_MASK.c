
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ is_outer_most_lock; int baton; int * (* body ) (int ,int *) ;scalar_t__ is_inner_most_lock; scalar_t__ is_global_lock; TYPE_3__* fs; int lock_path; int * lock_pool; } ;
typedef TYPE_1__ with_lock_baton_t ;
struct TYPE_9__ {int youngest_rev_cache; int has_write_lock; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_10__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int ) ;
 int * FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_3__*,int *) ;
 int * FUNC_6 (int *,TYPE_3__*,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(with_lock_baton_t *VAR_3)
{
  apr_pool_t *VAR_4 = VAR_3->lock_pool;
  svn_error_t *VAR_5 = FUNC_1(VAR_3->lock_path, VAR_4);

  if (!VAR_5)
    {
      svn_fs_t *VAR_6 = VAR_3->fs;
      svn_fs_x__data_t *VAR_7 = VAR_6->fsap_data;

      if (VAR_3->is_global_lock)
        {

          FUNC_0(VAR_4,
                                    VAR_7,
                                    VAR_2,
                                    VAR_1);
          VAR_7->has_write_lock = VAR_0;
        }

      if (VAR_3->is_inner_most_lock)
        {



          apr_pool_t *VAR_8 = FUNC_8(VAR_4);



          VAR_5 = FUNC_5(VAR_6, VAR_8);
          if (!VAR_5)
            VAR_5 = FUNC_6(&VAR_7->youngest_rev_cache, VAR_6,
                                         VAR_8);


          FUNC_7(VAR_8);

          if (!VAR_5)
            VAR_5 = VAR_3->body(VAR_3->baton, VAR_8);

          FUNC_9(VAR_8);
        }
      else
        {

          VAR_5 = VAR_3->body(VAR_3->baton, VAR_4);
        }
    }

  if (VAR_3->is_outer_most_lock)
    FUNC_9(VAR_4);

  return FUNC_4(VAR_5);
}
