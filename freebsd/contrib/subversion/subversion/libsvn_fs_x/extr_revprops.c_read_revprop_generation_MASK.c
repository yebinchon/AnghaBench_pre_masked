
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int revprop_generation; scalar_t__ has_write_lock; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_12__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_13__ {int* generation; TYPE_2__* fs; } ;
typedef TYPE_3__ revprop_generation_upgrade_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int*,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int (*) (TYPE_3__*,int *),TYPE_3__*,int *) ;
 int FUNC_6 (scalar_t__*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_3,
                        apr_pool_t *VAR_4)
{
  apr_int64_t VAR_5 = 0;
  svn_fs_x__data_t *VAR_6 = VAR_3->fsap_data;


  FUNC_0(FUNC_2(&VAR_5, VAR_3, VAR_4));


  if (VAR_5 % 2)
    {
      svn_boolean_t VAR_7 = VAR_0;




      if (!VAR_6->has_write_lock)
        {
          apr_time_t VAR_8;
          FUNC_0(FUNC_6(&VAR_8,
                        FUNC_4(VAR_3, VAR_4),
                        VAR_4));
          VAR_7 = FUNC_1() > VAR_8 + VAR_1;
        }

      if (VAR_6->has_write_lock || VAR_7)
        {
          revprop_generation_upgrade_t VAR_9;
          VAR_9.generation = &VAR_5;
          VAR_9.fs = VAR_3;





          if (VAR_6->has_write_lock)
            FUNC_0(FUNC_3(&VAR_9, VAR_4));
          else
            FUNC_0(FUNC_5(VAR_3, FUNC_3,
                                              &VAR_9, VAR_4));
        }
    }


  VAR_6->revprop_generation = VAR_5;
  return VAR_2;
}
