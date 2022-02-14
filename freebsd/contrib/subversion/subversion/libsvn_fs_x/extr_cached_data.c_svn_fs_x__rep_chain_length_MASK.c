
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_11__ {int number; scalar_t__ change_set; } ;
struct TYPE_12__ {int size; TYPE_1__ id; } ;
typedef TYPE_2__ svn_fs_x__representation_t ;
struct TYPE_13__ {scalar_t__ type; int base_length; int base_item_index; int base_revision; } ;
typedef TYPE_3__ svn_fs_x__rep_header_t ;
struct TYPE_14__ {int max_files_per_dir; } ;
typedef TYPE_4__ svn_fs_x__data_t ;
struct TYPE_15__ {TYPE_4__* fsap_data; } ;
typedef TYPE_5__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int shared_file_t ;
typedef int rep_state_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int **,TYPE_3__**,int **,TYPE_2__*,TYPE_5__*,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

svn_error_t *
FUNC_7(int *VAR_3,
                           int *VAR_4,
                           svn_fs_x__representation_t *VAR_5,
                           svn_fs_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  svn_fs_x__data_t *VAR_8 = VAR_6->fsap_data;
  svn_revnum_t VAR_9 = VAR_8->max_files_per_dir;
  svn_boolean_t VAR_10 = VAR_0;
  int VAR_11 = 0;
  int VAR_12 = 1;
  svn_revnum_t VAR_13 = FUNC_3(VAR_5->id.change_set);
  svn_revnum_t VAR_14 = VAR_13 / VAR_9;





  apr_pool_t *VAR_15 = FUNC_5(VAR_7);




  svn_fs_x__representation_t VAR_16 = *VAR_5;


  shared_file_t *VAR_17 = ((void*)0);

  svn_fs_x__rep_header_t *VAR_18;



  do
    {
      rep_state_t *VAR_19;
      VAR_13 = FUNC_3(VAR_16.id.change_set);
      if (VAR_13 / VAR_9 != VAR_14)
        {
          VAR_14 = VAR_13 / VAR_9;
          ++VAR_12;
        }

      FUNC_0(FUNC_1(&VAR_19,
                                    &VAR_18,
                                    &VAR_17,
                                    &VAR_16,
                                    VAR_6,
                                    VAR_15,
                                    VAR_15));

      VAR_16.id.change_set
        = FUNC_2(VAR_18->base_revision);
      VAR_16.id.number = VAR_18->base_item_index;
      VAR_16.size = VAR_18->base_length;
      VAR_10 = VAR_18->type == VAR_2;
      ++VAR_11;
      if (VAR_11 % 16 == 0)
        {
          VAR_17 = ((void*)0);
          FUNC_4(VAR_15);
        }
    }
  while (VAR_10 && VAR_16.id.change_set);

  *VAR_3 = VAR_11;
  *VAR_4 = VAR_12;
  FUNC_6(VAR_15);

  return VAR_1;
}
