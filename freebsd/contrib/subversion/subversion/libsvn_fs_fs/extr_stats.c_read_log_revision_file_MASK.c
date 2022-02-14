
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int shard_size; int progress_baton; int (* progress_func ) (int,int ,int *) ;} ;
typedef TYPE_1__ query_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int,int *,int *) ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(query_t *VAR_1,
                       svn_revnum_t VAR_2,
                       apr_pool_t *VAR_3,
                       apr_pool_t *VAR_4)
{
  FUNC_0(FUNC_1(VAR_1, VAR_2, 1,
                                   VAR_3, VAR_4));


  if (VAR_1->progress_func)
    {
      if (VAR_1->shard_size && (VAR_2 % VAR_1->shard_size == 0))
        VAR_1->progress_func(VAR_2, VAR_1->progress_baton, VAR_4);
      if (!VAR_1->shard_size && (VAR_2 % 1000 == 0))
        VAR_1->progress_func(VAR_2, VAR_1->progress_baton, VAR_4);
    }

  return VAR_0;
}
