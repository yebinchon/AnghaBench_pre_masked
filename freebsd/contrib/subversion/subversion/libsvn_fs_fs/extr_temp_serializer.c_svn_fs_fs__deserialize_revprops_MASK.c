
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; void* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int * FUNC_3 (TYPE_1__*,int *) ;

svn_error_t *
FUNC_4(void **VAR_2,
                                void *VAR_3,
                                apr_size_t VAR_4,
                                apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6;
  svn_stream_t *VAR_7;

  svn_string_t VAR_8;
  VAR_8.data = VAR_3;
  VAR_8.len = VAR_4;

  VAR_7 = FUNC_3(&VAR_8, VAR_5);
  VAR_6 = FUNC_1(VAR_5);

  FUNC_0(FUNC_2(VAR_6, VAR_7, VAR_0, VAR_5));


  *VAR_2 = VAR_6;

  return VAR_1;
}
