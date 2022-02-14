
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
struct delta_read_baton {TYPE_1__* rs; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {scalar_t__ current; scalar_t__ size; int chunk_index; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,TYPE_1__*,int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_txdelta_window_t **VAR_1, void *VAR_2,
                       apr_pool_t *VAR_3)
{
  struct delta_read_baton *VAR_4 = VAR_2;
  apr_pool_t *VAR_5 = FUNC_2(VAR_3);

  *VAR_1 = ((void*)0);
  if (VAR_4->rs->current < VAR_4->rs->size)
    {
      FUNC_0(FUNC_1(VAR_1, VAR_4->rs->chunk_index, VAR_4->rs, VAR_3,
                                VAR_5));
      VAR_4->rs->chunk_index++;
    }

  FUNC_3(VAR_5);

  return VAR_0;
}
