
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int txn_filesize; } ;
typedef TYPE_1__ dir_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(void **VAR_1,
                                const void *VAR_2,
                                apr_size_t VAR_3,
                                void *VAR_4,
                                apr_pool_t *VAR_5)
{
  const dir_data_t *VAR_6 = VAR_2;

  *(svn_filesize_t *)VAR_1 = VAR_6->txn_filesize;

  return VAR_0;
}
