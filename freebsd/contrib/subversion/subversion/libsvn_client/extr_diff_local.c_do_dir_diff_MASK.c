
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_15__ {int (* dir_added ) (char const*,int *,int *,int *,int *,void*,TYPE_1__ const*,int *) ;int (* dir_deleted ) (char const*,int *,int *,void*,TYPE_1__ const*,int *) ;int (* dir_closed ) (char const*,int *,int *,void*,TYPE_1__ const*,int *) ;int (* dir_changed ) (char const*,int *,int *,int *,int *,TYPE_3__*,void*,TYPE_1__ const*,int *) ;int (* dir_opened ) (void**,scalar_t__*,scalar_t__*,char const*,int *,int *,int *,void*,TYPE_1__ const*,int *,int *) ;} ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_16__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_17__ {scalar_t__ nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int **,char const*,int ,int *,int *) ;
 int FUNC_2 (char const*,char const*,char const*,char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,TYPE_1__ const*,TYPE_2__*,int *) ;
 int FUNC_3 (void**,scalar_t__*,scalar_t__*,char const*,int *,int *,int *,void*,TYPE_1__ const*,int *,int *) ;
 int FUNC_4 (char const*,int *,int *,int *,int *,TYPE_3__*,void*,TYPE_1__ const*,int *) ;
 int FUNC_5 (char const*,int *,int *,void*,TYPE_1__ const*,int *) ;
 int FUNC_6 (char const*,int *,int *,void*,TYPE_1__ const*,int *) ;
 int FUNC_7 (char const*,int *,int *,int *,int *,void*,TYPE_1__ const*,int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_8 (int ,int *) ;
 char* FUNC_9 (char const*,char const*) ;
 int FUNC_10 (TYPE_3__**,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char *VAR_4,
            const char *VAR_5,
            const char *VAR_6,
            const char *VAR_7,
            svn_boolean_t VAR_8,
            svn_boolean_t VAR_9,
            svn_boolean_t VAR_10,
            svn_depth_t VAR_11,
            void *VAR_12,
            const svn_diff_tree_processor_t *VAR_13,
            svn_client_ctx_t *VAR_14,
            apr_pool_t *VAR_15)
{
  const char *VAR_16;
  svn_diff_source_t *VAR_17;
  svn_diff_source_t *VAR_18;
  svn_boolean_t VAR_19 = VAR_0;
  svn_boolean_t VAR_20 = VAR_0;
  void *VAR_21;
  apr_hash_t *VAR_22;
  apr_hash_t *VAR_23;

  VAR_16 = FUNC_9(VAR_6, VAR_4);

  if (! VAR_9)
    {
      VAR_17 = FUNC_8(VAR_1, VAR_15);
      FUNC_0(FUNC_1(&VAR_22, VAR_4, VAR_14->wc_ctx,
                        VAR_15, VAR_15));
    }
  else
    {
      VAR_17 = ((void*)0);
      VAR_22 = ((void*)0);
    }

  if (! VAR_8)
    {
      VAR_18 = FUNC_8(VAR_1, VAR_15);
      FUNC_0(FUNC_1(&VAR_23, VAR_5, VAR_14->wc_ctx,
                        VAR_15, VAR_15));
    }
  else
    {
      VAR_18 = ((void*)0);
      VAR_23 = ((void*)0);
    }

  FUNC_0(VAR_13->dir_opened(&VAR_21, &VAR_19, &VAR_20,
                                     VAR_16,
                                     VAR_17,
                                     VAR_18,
                                     ((void*)0) ,
                                     VAR_12,
                                     VAR_13,
                                     VAR_15, VAR_15));

  if (!VAR_20)
    {
      if (VAR_11 >= VAR_3)
        FUNC_0(FUNC_2(VAR_4, VAR_5,
                               VAR_6, VAR_7,
                               VAR_8, VAR_9,
                               VAR_10, VAR_11,
                               VAR_21,
                               VAR_13, VAR_14, VAR_15));
    }
  else if (VAR_19)
    return VAR_2;

  if (VAR_22 && VAR_23)
    {
      apr_array_header_t *VAR_24;

      FUNC_0(FUNC_10(&VAR_24, VAR_23, VAR_22,
                             VAR_15));

      if (VAR_24->nelts)
        {
          FUNC_0(VAR_13->dir_changed(VAR_16,
                                              VAR_17,
                                              VAR_18,
                                              VAR_22,
                                              VAR_23,
                                              VAR_24,
                                              VAR_21,
                                              VAR_13,
                                              VAR_15));
          return VAR_2;
        }
    }

  if (VAR_17 && VAR_18)
    {
      FUNC_0(VAR_13->dir_closed(VAR_16,
                                         VAR_17,
                                         VAR_18,
                                         VAR_21,
                                         VAR_13,
                                         VAR_15));
    }
  else if (VAR_17)
    {
      FUNC_0(VAR_13->dir_deleted(VAR_16,
                                          VAR_17,
                                          VAR_22,
                                          VAR_21,
                                          VAR_13,
                                          VAR_15));
    }
  else
    {
      FUNC_0(VAR_13->dir_added(VAR_16,
                                        ((void*)0) ,
                                        VAR_18,
                                        ((void*)0) ,
                                        VAR_23,
                                        VAR_21,
                                        VAR_13,
                                        VAR_15));
    }

  return VAR_2;
}
