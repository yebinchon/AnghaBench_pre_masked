
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_patch_func_t ;
struct TYPE_4__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,int ,char const*,int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char const*,int ,int,int ,int ,int ,int ,void*,TYPE_1__*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (char const*) ;

svn_error_t *
FUNC_9(const char *VAR_7,
                 const char *VAR_8,
                 svn_boolean_t VAR_9,
                 int VAR_10,
                 svn_boolean_t VAR_11,
                 svn_boolean_t VAR_12,
                 svn_boolean_t VAR_13,
                 svn_client_patch_func_t VAR_14,
                 void *VAR_15,
                 svn_client_ctx_t *VAR_16,
                 apr_pool_t *VAR_17)
{
  svn_node_kind_t VAR_18;

  if (VAR_10 < 0)
    return FUNC_5(VAR_2, ((void*)0),
                            FUNC_2("strip count must be positive"));

  if (FUNC_8(VAR_8))
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("'%s' is not a local path"),
                             FUNC_4(VAR_8,
                                                    VAR_17));

  FUNC_0(FUNC_7(VAR_7, &VAR_18, VAR_17));
  if (VAR_18 == VAR_6)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("'%s' does not exist"),
                             FUNC_4(VAR_7,
                                                    VAR_17));
  if (VAR_18 != VAR_5)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("'%s' is not a file"),
                             FUNC_4(VAR_7,
                                                    VAR_17));

  FUNC_0(FUNC_7(VAR_8, &VAR_18, VAR_17));
  if (VAR_18 == VAR_6)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("'%s' does not exist"),
                             FUNC_4(VAR_8,
                                                    VAR_17));
  if (VAR_18 != VAR_4)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("'%s' is not a directory"),
                             FUNC_4(VAR_8,
                                                    VAR_17));

  FUNC_1(
    FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10,
                  VAR_11, VAR_12, VAR_13,
                  VAR_14, VAR_15, VAR_16, VAR_17),
    VAR_16->wc_ctx, VAR_8, VAR_0 , VAR_17);
  return VAR_3;
}
