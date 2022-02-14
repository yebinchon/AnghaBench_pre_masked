
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_diff__token_index_t ;
struct TYPE_3__ {size_t token_index; struct TYPE_3__* next; } ;
typedef TYPE_1__ svn_diff__position_t ;
typedef int apr_pool_t ;


 int* FUNC_0 (int *,int) ;

svn_diff__token_index_t*
FUNC_1(svn_diff__position_t *VAR_0,
                           svn_diff__token_index_t VAR_1,
                           apr_pool_t *VAR_2)
{
  svn_diff__token_index_t *VAR_3;
  svn_diff__token_index_t VAR_4;
  svn_diff__position_t *VAR_5;

  VAR_3 = FUNC_0(VAR_2, VAR_1 * sizeof(*VAR_3));
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    VAR_3[VAR_4] = 0;

  VAR_5 = VAR_0;
  if (VAR_5 != ((void*)0))
    {
      do
        {
          VAR_3[VAR_5->token_index]++;
          VAR_5 = VAR_5->next;
        }
      while (VAR_5 != VAR_0);
    }

  return VAR_3;
}
