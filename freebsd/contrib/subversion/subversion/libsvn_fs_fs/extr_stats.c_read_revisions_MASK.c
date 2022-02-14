
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ min_unpacked_rev; scalar_t__ shard_size; scalar_t__ head; int fs; } ;
typedef TYPE_1__ query_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int *,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int *,int *) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int *,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(query_t *VAR_1,
               apr_pool_t *VAR_2,
               apr_pool_t *VAR_3)
{
  apr_pool_t *VAR_4 = FUNC_7(VAR_3);
  svn_revnum_t VAR_5;


  for ( VAR_5 = 0
      ; VAR_5 < VAR_1->min_unpacked_rev
      ; VAR_5 += VAR_1->shard_size)
    {
      FUNC_6(VAR_4);

      if (FUNC_5(VAR_1->fs))
        FUNC_0(FUNC_1(VAR_1, VAR_5, VAR_2, VAR_4));
      else
        FUNC_0(FUNC_3(VAR_1, VAR_5, VAR_2, VAR_4));
    }


  for ( ; VAR_5 <= VAR_1->head; ++VAR_5)
    {
      FUNC_6(VAR_4);

      if (FUNC_5(VAR_1->fs))
        FUNC_0(FUNC_2(VAR_1, VAR_5, VAR_2,
                                       VAR_4));
      else
        FUNC_0(FUNC_4(VAR_1, VAR_5, VAR_2,
                                        VAR_4));
    }

  FUNC_8(VAR_4);

  return VAR_0;
}
