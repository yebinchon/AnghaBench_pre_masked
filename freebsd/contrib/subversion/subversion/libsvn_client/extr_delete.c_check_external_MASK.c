
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__*,char const**,int *,int *,int *,int ,char const*,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_4,
               svn_client_ctx_t *VAR_5,
               apr_pool_t *VAR_6)
{
  svn_node_kind_t VAR_7;
  const char *VAR_8;

  FUNC_0(FUNC_4(&VAR_7, &VAR_8, ((void*)0),
                                     ((void*)0), ((void*)0),
                                     VAR_5->wc_ctx, VAR_4,
                                     VAR_4, VAR_2,
                                     VAR_6, VAR_6));

  if (VAR_7 != VAR_3)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Cannot remove the external at '%s'; "
                               "please edit or delete the svn:externals "
                               "property on '%s'"),
                             FUNC_2(VAR_4,
                                                    VAR_6),
                             FUNC_2(VAR_8,
                                                    VAR_6));

  return VAR_1;
}
