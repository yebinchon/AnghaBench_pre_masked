
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int min_unpacked_rev; int max_files_per_dir; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_9__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int (* svn_fs_pack_notify_t ) (void*,int,int ,int *) ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_10__ {scalar_t__ max_mem; void* cancel_baton; int cancel_func; void* notify_baton; int (* notify_func ) (void*,int,int ,int *) ;TYPE_2__* fs; int member_0; } ;
typedef TYPE_3__ pack_baton_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__*,TYPE_2__*,int *) ;
 int VAR_2 ;
 int FUNC_2 (void*,int,int ,int *) ;
 int VAR_3 ;
 int * FUNC_3 (TYPE_2__*,int ,TYPE_3__*,int *) ;

svn_error_t *
FUNC_4(svn_fs_t *VAR_4,
               apr_size_t VAR_5,
               svn_fs_pack_notify_t VAR_6,
               void *VAR_7,
               svn_cancel_func_t VAR_8,
               void *VAR_9,
               apr_pool_t *VAR_10)
{
  pack_baton_t VAR_11 = { 0 };
  svn_boolean_t VAR_12;


  FUNC_0(FUNC_1(&VAR_12, VAR_4, VAR_10));
  if (VAR_12)
    {
      svn_fs_x__data_t *VAR_13 = VAR_4->fsap_data;

      if (VAR_6)
        (*VAR_6)(VAR_7,
                       VAR_13->min_unpacked_rev / VAR_13->max_files_per_dir,
                       VAR_3, VAR_10);

      return VAR_1;
    }


  VAR_11.fs = VAR_4;
  VAR_11.notify_func = VAR_6;
  VAR_11.notify_baton = VAR_7;
  VAR_11.cancel_func = VAR_8;
  VAR_11.cancel_baton = VAR_9;
  VAR_11.max_mem = VAR_5 ? VAR_5 : VAR_0;

  return FUNC_3(VAR_4, VAR_2, &VAR_11, VAR_10);
}
