
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int with_lock_baton_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (TYPE_1__*,int ,int * (*) (void*,int *),void*,int *) ;
 int VAR_2 ;
 int * FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;

svn_error_t *
FUNC_4(svn_fs_t *VAR_5,
                          svn_error_t *(*VAR_6)(void *VAR_7,
                                               apr_pool_t *VAR_8),
                          void *VAR_9,
                          apr_pool_t *VAR_10)
{
  fs_fs_data_t *VAR_11 = VAR_5->fsap_data;




  with_lock_baton_t *VAR_12
    = FUNC_1(VAR_5, VAR_4, VAR_6, VAR_9, VAR_10);

  if (VAR_11->format >= VAR_0)
    VAR_12 = FUNC_0(VAR_2, VAR_12);

  if (VAR_11->format >= VAR_1)
    VAR_12 = FUNC_0(VAR_3, VAR_12);

  return FUNC_2(FUNC_3(VAR_12, VAR_10));
}
