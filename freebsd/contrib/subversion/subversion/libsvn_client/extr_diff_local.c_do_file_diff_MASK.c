
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_13__ {int (* file_closed ) (char const*,int *,int *,void*,TYPE_1__ const*,int *) ;int (* file_changed ) (char const*,int *,int *,char const*,char const*,int *,int *,int,TYPE_3__*,void*,TYPE_1__ const*,int *) ;int (* file_added ) (char const*,int *,int *,int *,char const*,int *,int *,void*,TYPE_1__ const*,int *) ;int (* file_deleted ) (char const*,int *,char const*,int *,void*,TYPE_1__ const*,int *) ;int (* file_opened ) (void**,scalar_t__*,char const*,int *,int *,int *,void*,TYPE_1__ const*,int *,int *) ;} ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
struct TYPE_14__ {int cancel_baton; int cancel_func; int mimetypes_map; int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_15__ {scalar_t__ nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,char const*,int ,int *,int *) ;
 int FUNC_2 (void**,scalar_t__*,char const*,int *,int *,int *,void*,TYPE_1__ const*,int *,int *) ;
 int FUNC_3 (char const*,int *,char const*,int *,void*,TYPE_1__ const*,int *) ;
 int FUNC_4 (char const*,int *,int *,int *,char const*,int *,int *,void*,TYPE_1__ const*,int *) ;
 int FUNC_5 (char const*,int *,int *,char const*,char const*,int *,int *,int,TYPE_3__*,void*,TYPE_1__ const*,int *) ;
 int FUNC_6 (char const*,int *,int *,void*,TYPE_1__ const*,int *) ;
 int * FUNC_7 (int ,int *) ;
 char* FUNC_8 (char const*,char const*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (char const**,char const*,int ,int *) ;
 int FUNC_12 (scalar_t__*,char const*,char const*,int *) ;
 int FUNC_13 (TYPE_3__**,int *,int *,int *) ;
 int FUNC_14 (char const*,int *) ;
 int FUNC_15 (char const**,int *,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(const char *VAR_4,
             const char *VAR_5,
             const char *VAR_6,
             const char *VAR_7,
             svn_boolean_t VAR_8,
             svn_boolean_t VAR_9,
             void *VAR_10,
             const svn_diff_tree_processor_t *VAR_11,
             svn_client_ctx_t *VAR_12,
             apr_pool_t *VAR_13)
{
  const char *VAR_14;
  svn_diff_source_t *VAR_15;
  svn_diff_source_t *VAR_16;
  svn_boolean_t VAR_17 = VAR_0;
  apr_hash_t *VAR_18;
  apr_hash_t *VAR_19;
  void *VAR_20;

  VAR_14 = FUNC_8(VAR_6, VAR_4);

 if (! VAR_9)
    VAR_15 = FUNC_7(VAR_1, VAR_13);
  else
    VAR_15 = ((void*)0);

  if (! VAR_8)
    VAR_16 = FUNC_7(VAR_1, VAR_13);
  else
    VAR_16 = ((void*)0);

  FUNC_0(VAR_11->file_opened(&VAR_20, &VAR_17,
                                      VAR_14,
                                      VAR_15,
                                      VAR_16,
                                      ((void*)0) ,
                                      VAR_10,
                                      VAR_11,
                                      VAR_13,
                                      VAR_13));

  if (VAR_17)
    return VAR_2;

   if (! VAR_9)
    {
      FUNC_0(FUNC_1(&VAR_18, VAR_4, VAR_12->wc_ctx,
                        VAR_13, VAR_13));



      if (! FUNC_9(VAR_18, VAR_3))
        {
          const char *VAR_21;


          FUNC_0(FUNC_11(&VAR_21, VAR_4,
                                          VAR_12->mimetypes_map, VAR_13));

          if (VAR_21)
            FUNC_10(VAR_18, VAR_3,
                          FUNC_14(VAR_21, VAR_13));
        }

      FUNC_0(FUNC_15(&VAR_4, VAR_18,
                                     VAR_12->cancel_func, VAR_12->cancel_baton,
                                     VAR_13, VAR_13));
    }
  else
    VAR_18 = ((void*)0);

  if (! VAR_8)
    {
      FUNC_0(FUNC_1(&VAR_19, VAR_5, VAR_12->wc_ctx,
                        VAR_13, VAR_13));



      if (! FUNC_9(VAR_19, VAR_3))
        {
          const char *VAR_22;


          FUNC_0(FUNC_11(&VAR_22, VAR_5,
                                          VAR_12->mimetypes_map, VAR_13));

          if (VAR_22)
            FUNC_10(VAR_19, VAR_3,
                          FUNC_14(VAR_22, VAR_13));
        }

      FUNC_0(FUNC_15(&VAR_5, VAR_19,
                                     VAR_12->cancel_func, VAR_12->cancel_baton,
                                     VAR_13, VAR_13));

    }
  else
    VAR_19 = ((void*)0);

  if (VAR_8)
    {
      FUNC_0(VAR_11->file_deleted(VAR_14,
                                           VAR_15,
                                           VAR_4,
                                           VAR_18,
                                           VAR_20,
                                           VAR_11,
                                           VAR_13));
    }
  else if (VAR_9)
    {
      FUNC_0(VAR_11->file_added(VAR_14,
                                         ((void*)0) ,
                                         VAR_16,
                                         ((void*)0) ,
                                         VAR_5,
                                         ((void*)0) ,
                                         VAR_19,
                                         VAR_20,
                                         VAR_11,
                                         VAR_13));
    }
  else
    {

      svn_boolean_t VAR_23;
      apr_array_header_t *VAR_24;

      FUNC_0(FUNC_12(&VAR_23, VAR_4, VAR_5,
                                           VAR_13));

      FUNC_0(FUNC_13(&VAR_24, VAR_19, VAR_18,
                             VAR_13));

      if (!VAR_23 || VAR_24->nelts > 0)
        {
          FUNC_0(VAR_11->file_changed(VAR_14,
                                               VAR_15,
                                               VAR_16,
                                               VAR_23 ? ((void*)0) : VAR_4,
                                               VAR_23 ? ((void*)0) : VAR_5,
                                               VAR_18,
                                               VAR_19,
                                               !VAR_23,
                                               VAR_24,
                                               VAR_20,
                                               VAR_11,
                                               VAR_13));
        }
      else
        {
          FUNC_0(VAR_11->file_closed(VAR_14,
                                            VAR_15,
                                            VAR_16,
                                            VAR_20,
                                            VAR_11,
                                            VAR_13));
        }
    }
  return VAR_2;
}
