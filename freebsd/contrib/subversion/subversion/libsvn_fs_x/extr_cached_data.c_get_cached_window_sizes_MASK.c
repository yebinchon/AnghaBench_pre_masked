
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int window_sizes_t ;
struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ svn_fs_x__window_cache_key_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {int window_cache; } ;
typedef TYPE_2__ rep_state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (void**,int *,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(window_sizes_t **VAR_2,
                        rep_state_t *VAR_3,
                        svn_boolean_t *VAR_4,
                        apr_pool_t *VAR_5)
{
  svn_fs_x__window_cache_key_t VAR_6 = { 0 };
  FUNC_0(FUNC_2((void **)VAR_2,
                                 VAR_4,
                                 VAR_3->window_cache,
                                 FUNC_1(&VAR_6, VAR_3),
                                 VAR_1,
                                 ((void*)0),
                                 VAR_5));

  return VAR_0;
}
