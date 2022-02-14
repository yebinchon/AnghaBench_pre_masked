
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_11__ {int change_set; } ;
struct TYPE_10__ {TYPE_2__ predecessor_id; scalar_t__ predecessor_count; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef TYPE_2__ svn_fs_x__id_t ;
struct TYPE_12__ {int max_files_per_dir; int youngest_rev_cache; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_13__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,TYPE_4__*,TYPE_2__*,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(int *VAR_1,
               svn_fs_t *VAR_2,
               svn_fs_x__noderev_t *VAR_3,
               int VAR_4,
               apr_pool_t *VAR_5)
{
  svn_fs_x__data_t *VAR_6 = VAR_2->fsap_data;
  int VAR_7 = VAR_6->max_files_per_dir;
  apr_pool_t *VAR_8;

  int VAR_9 = VAR_4 ? 1 : 0;
  svn_revnum_t VAR_10, VAR_11 = VAR_6->youngest_rev_cache / VAR_7;
  VAR_8 = FUNC_4(VAR_5);
  while (VAR_4-- && VAR_3->predecessor_count)
    {
      svn_fs_x__id_t VAR_12 = VAR_3->predecessor_id;

      FUNC_3(VAR_8);
      FUNC_0(FUNC_1(&VAR_3, VAR_2, &VAR_12, VAR_5,
                                          VAR_8));
      VAR_10 = FUNC_2(VAR_12.change_set) / VAR_7;
      if (VAR_10 != VAR_11)
        {
          ++VAR_9;
          VAR_11 = VAR_10;
        }
    }
  FUNC_5(VAR_8);

  *VAR_1 = VAR_9;
  return VAR_0;
}
