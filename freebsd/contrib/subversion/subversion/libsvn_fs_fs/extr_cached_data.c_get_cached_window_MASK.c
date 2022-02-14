
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int chunk_index; int member_0; } ;
typedef TYPE_1__ window_cache_key_t ;
typedef int svn_txdelta_window_t ;
struct TYPE_12__ {int end_offset; int * window; } ;
typedef TYPE_2__ svn_fs_fs__txdelta_cached_window_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_13__ {int chunk_index; int current; int window_cache; int raw_window_cache; } ;
typedef TYPE_3__ rep_state_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_2 (void**,scalar_t__*,int ,TYPE_1__*,int *) ;
 int FUNC_3 (void**,scalar_t__*,int ,TYPE_1__*,int ,int *,int *) ;
 int FUNC_4 (int ,TYPE_1__*,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_txdelta_window_t **VAR_3,
                  rep_state_t *VAR_4,
                  int VAR_5,
                  svn_boolean_t *VAR_6,
                  apr_pool_t *VAR_7,
                  apr_pool_t *VAR_8)
{
  if (! VAR_4->window_cache)
    {

      *VAR_6 = VAR_0;
    }
  else
    {

      svn_fs_fs__txdelta_cached_window_t *VAR_9;
      window_cache_key_t VAR_10 = { 0 };
      FUNC_1(&VAR_10, VAR_4);
      VAR_10.chunk_index = VAR_5;
      FUNC_0(FUNC_2((void **) &VAR_9,
                             VAR_6,
                             VAR_4->window_cache,
                             &VAR_10,
                             VAR_7));



      if (!*VAR_6 && VAR_4->raw_window_cache)
        {
          FUNC_0(FUNC_3((void **) &VAR_9, VAR_6,
                                         VAR_4->raw_window_cache, &VAR_10,
                                         VAR_2, ((void*)0), VAR_7));
          if (*VAR_6)
            FUNC_0(FUNC_4(VAR_4->window_cache, &VAR_10, VAR_9,
                                   VAR_8));
        }


      if (*VAR_6)
        {

          *VAR_3 = VAR_9->window;


          VAR_4->current = VAR_9->end_offset;
          VAR_4->chunk_index = VAR_5;
        }
    }

  return VAR_1;
}
