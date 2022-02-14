
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int lock_state; int prop_state; int content_state; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_15__ {int (* close_directory ) (void*,int *) ;int (* add_directory ) (char const*,void*,int *,int ,int *,void**) ;} ;
typedef TYPE_2__ svn_delta_editor_t ;
typedef int svn_client_import_filter_func_t ;
struct TYPE_16__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct TYPE_17__ {int repos_changed; } ;
typedef TYPE_4__ import_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,char const*,int *,int *,int *,int ,void*,TYPE_3__*,int *,int *) ;
 int FUNC_2 (char const*,char const*,int *,TYPE_2__ const*,void*,int ,int *,int *,int ,int ,int ,int ,void*,TYPE_4__*,TYPE_3__*,int *) ;
 int FUNC_3 (char const*,void*,int *,int ,int *,void**) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (void*,int *) ;
 int VAR_3 ;
 int FUNC_6 (char const*,int *) ;
 TYPE_1__* FUNC_7 (char const*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_8(const svn_delta_editor_t *VAR_7,
           void *VAR_8,
           const char *VAR_9,
           const char *VAR_10,
           svn_depth_t VAR_11,
           apr_hash_t *VAR_12,
           apr_array_header_t *VAR_13,
           svn_boolean_t VAR_14,
           svn_boolean_t VAR_15,
           svn_boolean_t VAR_16,
           svn_client_import_filter_func_t VAR_17,
           void *VAR_18,
           import_ctx_t *VAR_19,
           svn_client_ctx_t *VAR_20,
           apr_pool_t *VAR_21)
{
  apr_hash_t *VAR_22;
  void *VAR_23;

  FUNC_0(FUNC_6(VAR_9, VAR_21));
  FUNC_0(FUNC_1(&VAR_22, VAR_9, VAR_12, ((void*)0),
                                VAR_13, VAR_17,
                                VAR_18, VAR_20, VAR_21, VAR_21));


  {

    FUNC_0(VAR_7->add_directory(VAR_10, VAR_8, ((void*)0),
                                  VAR_0, VAR_21, &VAR_23));


    VAR_19->repos_changed = VAR_2;





    if (VAR_20->notify_func2)
      {
        svn_wc_notify_t *VAR_24
          = FUNC_7(VAR_9, VAR_4,
                                 VAR_21);
        VAR_24->kind = VAR_3;
        VAR_24->content_state = VAR_24->prop_state
          = VAR_6;
        VAR_24->lock_state = VAR_5;
        VAR_20->notify_func2(VAR_20->notify_baton2, VAR_24, VAR_21);
      }
  }


  FUNC_0(FUNC_2(VAR_9, VAR_10, VAR_22, VAR_7,
                          VAR_23, VAR_11, VAR_12, VAR_13,
                          VAR_14, VAR_15, VAR_16,
                          VAR_17, VAR_18,
                          VAR_19, VAR_20, VAR_21));


  FUNC_0(VAR_7->close_directory(VAR_23, VAR_21));

  return VAR_1;
}
