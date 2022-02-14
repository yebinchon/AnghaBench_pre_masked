
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,char const*,char const*,char const*,int ,int ,int ,int ,char const*,int,int,int *) ;
 int FUNC_2 (int*,char const**,int *,char const**,int *,char const**,int *,char const**,int *,char const**,char const*,TYPE_1__ const*,char const*,TYPE_1__ const*,int *,int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(
                  const char *VAR_4,
                  const svn_opt_revision_t *VAR_5,
                  const char *VAR_6,
                  const svn_opt_revision_t *VAR_7,
                  svn_client_ctx_t *VAR_8,
                  apr_pool_t *VAR_9)
{
  const char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
  svn_revnum_t VAR_14, VAR_15, VAR_16, VAR_17;
  const char *VAR_18;
  svn_boolean_t VAR_19, VAR_20;

  VAR_19 = (! FUNC_3(VAR_6))
                 && (VAR_7->kind == VAR_2
                     || VAR_7->kind == VAR_3
                     || VAR_7->kind == VAR_1);
  FUNC_0(FUNC_2(
            &VAR_20,
            &VAR_10, &VAR_14,
            &VAR_11, &VAR_15,
            &VAR_12, &VAR_16,
            &VAR_13, &VAR_17,
            &VAR_18,
            VAR_4, VAR_5,
            VAR_6, VAR_7,
            VAR_8, VAR_9, VAR_9));

  FUNC_0(FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13,
                            VAR_14, VAR_15, VAR_16, VAR_17,
                            VAR_18, VAR_19, VAR_20,
                            VAR_9));

  return VAR_0;
}
