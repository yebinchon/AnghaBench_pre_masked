
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_txdelta_window_t ;
struct TYPE_8__ {int chunk_index; int member_0; } ;
typedef TYPE_1__ svn_fs_x__window_cache_key_t ;
struct TYPE_9__ {int end_offset; int * window; } ;
typedef TYPE_2__ svn_fs_x__txdelta_cached_window_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_10__ {int chunk_index; int current; int window_cache; } ;
typedef TYPE_3__ rep_state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (void**,scalar_t__*,int ,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_txdelta_window_t **VAR_1,
                  rep_state_t *VAR_2,
                  int VAR_3,
                  svn_boolean_t *VAR_4,
                  apr_pool_t *VAR_5,
                  apr_pool_t *VAR_6)
{

  svn_fs_x__txdelta_cached_window_t *VAR_7;
  svn_fs_x__window_cache_key_t VAR_8 = { 0 };
  FUNC_1(&VAR_8, VAR_2);
  VAR_8.chunk_index = VAR_3;
  FUNC_0(FUNC_2((void **) &VAR_7,
                         VAR_4,
                         VAR_2->window_cache,
                         &VAR_8,
                         VAR_5));

  if (*VAR_4)
    {

      *VAR_1 = VAR_7->window;


      VAR_2->current = VAR_7->end_offset;
      VAR_2->chunk_index = VAR_3;
    }

  return VAR_0;
}
