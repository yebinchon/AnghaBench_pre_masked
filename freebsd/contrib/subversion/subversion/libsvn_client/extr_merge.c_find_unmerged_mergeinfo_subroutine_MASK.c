
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_4__ {int rev; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,TYPE_1__ const*,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_mergeinfo_t *VAR_3,
                                   svn_mergeinfo_t VAR_4,
                                   svn_mergeinfo_t VAR_5,
                                   const svn_client__pathrev_t *VAR_6,
                                   svn_ra_session_t *VAR_7,
                                   svn_client_ctx_t *VAR_8,
                                   apr_pool_t *VAR_9,
                                   apr_pool_t *VAR_10)
{
  svn_mergeinfo_t VAR_11;



  FUNC_0(FUNC_1(
            &VAR_11, ((void*)0) ,
            VAR_6, VAR_6->rev, VAR_0,
            VAR_7, VAR_8, VAR_10));
  FUNC_0(FUNC_2(VAR_5,
                               VAR_11,
                               VAR_10, VAR_10));






  FUNC_0(FUNC_3(VAR_3,
                                VAR_5,
                                VAR_4, VAR_2,
                                VAR_9, VAR_10));
  return VAR_1;
}
