
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_editor_t ;
typedef int svn_delta_editor_t ;
struct TYPE_3__ {int cancel_baton; int cancel_func; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct svn_delta__extra_baton {int target_revision; struct edit_baton* baton; } ;
struct edit_baton {int notify_baton; int notify_func; int force; int root_path; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int) ;
 struct svn_delta__extra_baton* FUNC_2 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int const**,void**,int *,int *,int *,int *,int *,int *,int ,struct edit_baton*,int ,struct edit_baton*,struct svn_delta__extra_baton*,int *) ;
 int FUNC_5 (int **,struct edit_baton*,int ,int ,int *,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_8(const svn_delta_editor_t **VAR_7,
               void **VAR_8,
               struct edit_baton *VAR_9,
               svn_client_ctx_t *VAR_10,
               apr_pool_t *VAR_11,
               apr_pool_t *VAR_12)
{
  svn_editor_t *VAR_13;
  struct svn_delta__extra_baton *VAR_14 = FUNC_2(VAR_11, sizeof(*VAR_14));
  svn_boolean_t *VAR_15 = FUNC_1(VAR_11,
                                              sizeof(*VAR_15));

  VAR_14->baton = VAR_9;
  VAR_14->target_revision = VAR_6;

  FUNC_0(FUNC_5(&VAR_13, VAR_9, VAR_10->cancel_func, VAR_10->cancel_baton,
                            VAR_11, VAR_12));
  FUNC_0(FUNC_6(VAR_13, VAR_2,
                                         VAR_12));
  FUNC_0(FUNC_7(VAR_13, VAR_3, VAR_12));

  *VAR_15 = VAR_1;

  FUNC_0(FUNC_4(VAR_7, VAR_8,
                                       VAR_13, ((void*)0), ((void*)0), VAR_15,
                                       ((void*)0), ((void*)0),
                                       VAR_5, VAR_9,
                                       VAR_4, VAR_9,
                                       VAR_14, VAR_11));


  FUNC_0(FUNC_3(VAR_9->root_path, VAR_9->force, VAR_9->notify_func,
                             VAR_9->notify_baton, VAR_12));

  return VAR_0;
}
