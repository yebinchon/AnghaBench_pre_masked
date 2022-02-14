
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int txn_filesize; } ;
typedef TYPE_1__ dir_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;

svn_error_t *
FUNC_0(void **VAR_2,
                             apr_size_t *VAR_3,
                             void *VAR_4,
                             apr_pool_t *VAR_5)
{
  dir_data_t *VAR_6 = (dir_data_t *)*VAR_2;
  VAR_6->txn_filesize = VAR_0;

  return VAR_1;
}
