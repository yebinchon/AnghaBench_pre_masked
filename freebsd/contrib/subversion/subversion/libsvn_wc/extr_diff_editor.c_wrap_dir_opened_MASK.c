
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int callback_baton; TYPE_1__* callbacks; int walk_deleted_dirs; } ;
typedef TYPE_2__ wc_diff_wrap_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_2__* baton; } ;
typedef TYPE_3__ svn_diff_tree_processor_t ;
struct TYPE_12__ {int revision; int * repos_relpath; } ;
typedef TYPE_4__ svn_diff_source_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int (* dir_added ) (int *,int *,int *,int *,char const*,int ,int *,int ,int ,int *) ;int (* dir_opened ) (int *,int *,int *,char const*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,char const*,int ,int ,int *) ;
 int FUNC_3 (int *,int *,int *,int *,char const*,int ,int *,int ,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_4(void **VAR_5,
                svn_boolean_t *VAR_6,
                svn_boolean_t *VAR_7,
                const char *VAR_8,
                const svn_diff_source_t *VAR_9,
                const svn_diff_source_t *VAR_10,
                const svn_diff_source_t *VAR_11,
                void *VAR_12,
                const svn_diff_tree_processor_t *VAR_13,
                apr_pool_t *VAR_14,
                apr_pool_t *VAR_15)
{
  wc_diff_wrap_baton_t *VAR_16 = VAR_13->baton;
  svn_boolean_t VAR_17 = VAR_0;

  FUNC_1(VAR_9 || VAR_10);
  FUNC_1(!VAR_9 || !VAR_11);


  if (VAR_9 != ((void*)0))
    {

      FUNC_0(VAR_16->callbacks->dir_opened(&VAR_17, VAR_6, VAR_7,
                                        VAR_8,
                                        VAR_10
                                            ? VAR_10->revision
                                            : (VAR_9
                                                    ? VAR_9->revision
                                                    : VAR_1),
                                        VAR_16->callback_baton,
                                        VAR_15));

      if (! VAR_10 && !VAR_16->walk_deleted_dirs)
        *VAR_7 = VAR_3;
    }
  else
    {
      svn_wc_notify_state_t VAR_18 = VAR_4;
      FUNC_0(VAR_16->callbacks->dir_added(&VAR_18, &VAR_17,
                                       VAR_6, VAR_7,
                                       VAR_8,
                                       VAR_10->revision,
                                       VAR_11
                                            ? VAR_11->repos_relpath
                                            : ((void*)0),
                                       VAR_11
                                            ? VAR_11->revision
                                            : VAR_1,
                                       VAR_16->callback_baton,
                                       VAR_15));
    }

  *VAR_5 = ((void*)0);

  return VAR_2;
}
