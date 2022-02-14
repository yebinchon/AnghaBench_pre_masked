
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_10__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_11__ {int base_revision; scalar_t__ type; int base_length; int base_item_index; } ;
typedef TYPE_2__ svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int shared_file_t ;
struct TYPE_12__ {int revision; int txn_id; int size; int item_index; } ;
typedef TYPE_3__ representation_t ;
typedef int rep_state_t ;
struct TYPE_13__ {int max_files_per_dir; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int **,TYPE_2__**,int **,TYPE_3__*,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

svn_error_t *
FUNC_6(int *VAR_3,
                            int *VAR_4,
                            representation_t *VAR_5,
                            svn_fs_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_6->fsap_data;
  svn_revnum_t VAR_9 = VAR_8->max_files_per_dir
                          ? VAR_8->max_files_per_dir
                          : 1;
  apr_pool_t *VAR_10 = FUNC_4(VAR_7);
  apr_pool_t *VAR_11 = FUNC_4(VAR_7);
  svn_boolean_t VAR_12 = VAR_0;
  int VAR_13 = 0;
  int VAR_14 = 1;
  svn_revnum_t VAR_15 = VAR_5->revision / VAR_9;




  representation_t VAR_16 = *VAR_5;


  shared_file_t *VAR_17 = ((void*)0);

  svn_fs_fs__rep_header_t *VAR_18;



  do
    {
      rep_state_t *VAR_19;

      FUNC_3(VAR_11);

      if (VAR_16.revision / VAR_9 != VAR_15)
        {
          VAR_15 = VAR_16.revision / VAR_9;
          ++VAR_14;
        }

      FUNC_0(FUNC_1(&VAR_19,
                                    &VAR_18,
                                    &VAR_17,
                                    &VAR_16,
                                    VAR_6,
                                    VAR_10,
                                    VAR_11));

      VAR_16.revision = VAR_18->base_revision;
      VAR_16.item_index = VAR_18->base_item_index;
      VAR_16.size = VAR_18->base_length;
      FUNC_2(&VAR_16.txn_id);
      VAR_12 = VAR_18->type == VAR_2;
      ++VAR_13;
      if (VAR_13 % 16 == 0)
        {
          VAR_17 = ((void*)0);
          FUNC_3(VAR_10);
        }
    }
  while (VAR_12 && VAR_16.revision);

  *VAR_3 = VAR_13;
  *VAR_4 = VAR_14;
  FUNC_5(VAR_10);
  FUNC_5(VAR_11);

  return VAR_1;
}
