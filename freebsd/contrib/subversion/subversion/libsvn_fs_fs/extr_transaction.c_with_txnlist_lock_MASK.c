
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int txn_list_lock; } ;
typedef TYPE_3__ fs_fs_shared_data_t ;
struct TYPE_9__ {TYPE_3__* shared; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int *) ;
 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_fs_t *VAR_1,
                  svn_error_t *(*VAR_2)(svn_fs_t *VAR_3,
                                       const void *VAR_4,
                                       apr_pool_t *VAR_5),
                  const void *VAR_6,
                  apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_1->fsap_data;
  fs_fs_shared_data_t *VAR_9 = VAR_8->shared;

  FUNC_0(VAR_9->txn_list_lock,
                       VAR_2(VAR_1, VAR_6, VAR_7));

  return VAR_0;
}
