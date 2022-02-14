
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_8__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_9__ {int nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,char const*,int ,int *) ;
 int FUNC_2 (int *,TYPE_2__ const*,char const*,int ,int ,int const*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__ const*,int *,char const**,int *,int *) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_2,
                   const apr_array_header_t *VAR_3,
                   svn_boolean_t VAR_4,
                   svn_boolean_t VAR_5,
                   const apr_hash_t *VAR_6,
                   svn_client_ctx_t *VAR_7,
                   apr_pool_t *VAR_8)
{
  const char *VAR_9, *VAR_10;

  FUNC_0(FUNC_3(VAR_3, ((void*)0), &VAR_9, ((void*)0), VAR_8));
  if (VAR_3->nelts == 1)
    VAR_9 = FUNC_4(VAR_9, VAR_8);

  FUNC_0(FUNC_5(&VAR_10, VAR_9, VAR_8));

  FUNC_1(
    FUNC_2(VAR_2, VAR_3, VAR_9,
                                       VAR_4, VAR_5,
                                       VAR_6, VAR_7, VAR_8),
    VAR_7->wc_ctx, VAR_10, VAR_0, VAR_8);

  return VAR_1;
}
