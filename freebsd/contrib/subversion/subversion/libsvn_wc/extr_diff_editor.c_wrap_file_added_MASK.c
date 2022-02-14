
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char const* empty_file; int callback_baton; TYPE_1__* callbacks; } ;
typedef TYPE_2__ wc_diff_wrap_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_2__* baton; } ;
typedef TYPE_3__ svn_diff_tree_processor_t ;
struct TYPE_12__ {int revision; int * repos_relpath; } ;
typedef TYPE_4__ svn_diff_source_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_9__ {int (* file_added ) (int *,int *,int *,char const*,char const*,char const*,int ,int ,int *,int *,int *,int ,int *,int *,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,char const*,char const*,char const*,int ,int ,int *,int *,int *,int ,int *,int *,int ,int *) ;
 int FUNC_3 (int **,int *,int *,int *) ;
 int * FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_5,
                const svn_diff_source_t *VAR_6,
                const svn_diff_source_t *VAR_7,
                const char *VAR_8,
                const char *VAR_9,
                          apr_hash_t *VAR_10,
                          apr_hash_t *VAR_11,
                void *VAR_12,
                const svn_diff_tree_processor_t *VAR_13,
                apr_pool_t *VAR_14)
{
  wc_diff_wrap_baton_t *VAR_15 = VAR_13->baton;
  svn_boolean_t VAR_16 = VAR_0;
  svn_wc_notify_state_t VAR_17 = VAR_4;
  svn_wc_notify_state_t VAR_18 = VAR_4;
  apr_array_header_t *VAR_19;

  if (! VAR_10)
    VAR_10 = FUNC_1(VAR_14);

  FUNC_0(FUNC_3(&VAR_19, VAR_11, VAR_10,
                         VAR_14));

  if (! VAR_6)
    FUNC_0(FUNC_5(VAR_15, VAR_14));

  FUNC_0(VAR_15->callbacks->file_added(&VAR_17, &VAR_18, &VAR_16,
                                    VAR_5,
                                    VAR_6
                                        ? VAR_8
                                        : VAR_15->empty_file,
                                    VAR_9,
                                    0,
                                    VAR_7->revision,
                                    VAR_10
                                     ? FUNC_4(VAR_10,
                                                          VAR_3)
                                     : ((void*)0),
                                    VAR_11
                                     ? FUNC_4(VAR_11,
                                                          VAR_3)
                                     : ((void*)0),
                                    VAR_6
                                            ? VAR_6->repos_relpath
                                            : ((void*)0),
                                    VAR_6
                                            ? VAR_6->revision
                                            : VAR_1,
                                    VAR_19, VAR_10,
                                    VAR_15->callback_baton,
                                    VAR_14));
  return VAR_2;
}
