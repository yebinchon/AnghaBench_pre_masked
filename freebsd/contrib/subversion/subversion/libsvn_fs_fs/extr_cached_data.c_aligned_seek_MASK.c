
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int block_size; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_t *VAR_0,
             apr_file_t *VAR_1,
             apr_off_t *VAR_2,
             apr_off_t VAR_3,
             apr_pool_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_0->fsap_data;
  return FUNC_0(FUNC_1(VAR_1, VAR_5->block_size,
                                                  VAR_2, VAR_3,
                                                  VAR_4));
}
