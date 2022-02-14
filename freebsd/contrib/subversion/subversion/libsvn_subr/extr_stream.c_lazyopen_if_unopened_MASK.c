
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int * real_stream; int pool; int open_baton; int (* open_func ) (int **,int ,int ,int *) ;} ;
typedef TYPE_1__ lazyopen_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int ,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(lazyopen_baton_t *VAR_1)
{
  if (VAR_1->real_stream == ((void*)0))
    {
      svn_stream_t *VAR_2;
      apr_pool_t *VAR_3 = FUNC_2(VAR_1->pool);

      FUNC_0(VAR_1->open_func(&VAR_2, VAR_1->open_baton,
                           VAR_1->pool, VAR_3));

      FUNC_3(VAR_3);

      VAR_1->real_stream = VAR_2;
    }

  return VAR_0;
}
