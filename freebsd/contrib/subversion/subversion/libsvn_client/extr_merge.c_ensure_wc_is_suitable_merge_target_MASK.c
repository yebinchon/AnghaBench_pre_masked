
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,char const*,int ,TYPE_1__*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,char const*,...) ;
 int FUNC_7 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (scalar_t__*,int ,char const*,int ,int ,int ,int *) ;
 int FUNC_9 (scalar_t__*,int ,char const*,int *,int *) ;
 int FUNC_10 (scalar_t__*,int ,char const*,int *) ;
 int FUNC_11 (scalar_t__*,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char *VAR_10,
                                   svn_client_ctx_t *VAR_11,
                                   svn_boolean_t VAR_12,
                                   svn_boolean_t VAR_13,
                                   svn_boolean_t VAR_14,
                                   apr_pool_t *VAR_15)
{
  svn_node_kind_t VAR_16;


  FUNC_0(FUNC_7(VAR_10, &VAR_16, VAR_15));
  if (VAR_16 == VAR_9)
    return FUNC_6(VAR_4, ((void*)0),
                             FUNC_2("Path '%s' does not exist"),
                             FUNC_4(VAR_10,
                                                    VAR_15));
  FUNC_0(FUNC_11(&VAR_16, VAR_11->wc_ctx, VAR_10,
                            VAR_0, VAR_0, VAR_15));
  if (VAR_16 != VAR_7 && VAR_16 != VAR_8)
    return FUNC_6(VAR_3, ((void*)0),
                             FUNC_2("Merge target '%s' does not exist in the "
                               "working copy"), VAR_10);


  if (! VAR_12)
    {
      svn_revnum_t VAR_17;
      svn_revnum_t VAR_18;

      FUNC_0(FUNC_3(&VAR_17, &VAR_18, VAR_10,
                                           VAR_0, VAR_11, VAR_15));

      if (!(FUNC_1(VAR_17) && FUNC_1(VAR_18)))
        {
          svn_boolean_t VAR_19;


          FUNC_0(FUNC_10(&VAR_19, VAR_11->wc_ctx, VAR_10,
                                        VAR_15));
          if (VAR_19)
            return VAR_5;
          else
            return FUNC_5(VAR_2, ((void*)0),
                                    FUNC_2("Cannot determine revision of working "
                                      "copy"));
        }

      if (VAR_17 != VAR_18)
        return FUNC_6(VAR_1, ((void*)0),
                                 FUNC_2("Cannot merge into mixed-revision working "
                                   "copy [%ld:%ld]; try updating first"),
                                   VAR_17, VAR_18);
    }


  if (! VAR_14)
    {
      svn_boolean_t VAR_20;

      FUNC_0(FUNC_9(&VAR_20, VAR_11->wc_ctx,
                                            VAR_10, ((void*)0),
                                            VAR_15));
      if (VAR_20)
        return FUNC_5(VAR_2, ((void*)0),
                                FUNC_2("Cannot merge into a working copy "
                                  "with a switched subtree"));
    }


  if (! VAR_13)
    {
      svn_boolean_t VAR_21;

      FUNC_0(FUNC_8(&VAR_21, VAR_11->wc_ctx,
                                     VAR_10, VAR_6,
                                     VAR_11->cancel_func,
                                     VAR_11->cancel_baton,
                                     VAR_15));
      if (VAR_21)
        return FUNC_5(VAR_2, ((void*)0),
                                FUNC_2("Cannot merge into a working copy "
                                  "that has local modifications"));
    }

  return VAR_5;
}
