
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; } ;
typedef TYPE_1__ window_cache_key_t ;
typedef int svn_txdelta_window_t ;
struct TYPE_9__ {int end_offset; int * window; } ;
typedef TYPE_2__ svn_fs_fs__txdelta_cached_window_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ window_cache; int current; } ;
typedef TYPE_3__ rep_state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int ,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_txdelta_window_t *VAR_1,
                  rep_state_t *VAR_2,
                  apr_pool_t *VAR_3)
{
  if (VAR_2->window_cache)
    {

      svn_fs_fs__txdelta_cached_window_t VAR_4;
      window_cache_key_t VAR_5 = {0};

      VAR_4.window = VAR_1;
      VAR_4.end_offset = VAR_2->current;



      FUNC_0(FUNC_2(VAR_2->window_cache,
                             FUNC_1(&VAR_5, VAR_2),
                             &VAR_4,
                             VAR_3));
    }

  return VAR_0;
}
