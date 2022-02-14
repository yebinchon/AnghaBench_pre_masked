
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_6__ {int abspath; scalar_t__ implicit_mergeinfo; } ;
typedef TYPE_1__ svn_client__merge_path_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int *,scalar_t__*,int *,int ,int *,int ,int ,int ,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ,int ,int *,int *,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_client__merge_path_t *VAR_2,
                          svn_client__merge_path_t *VAR_3,
                          svn_boolean_t VAR_4,
                          svn_revnum_t VAR_5,
                          svn_revnum_t VAR_6,
                          svn_ra_session_t *VAR_7,
                          svn_client_ctx_t *VAR_8,
                          apr_pool_t *VAR_9,
                          apr_pool_t *VAR_10)
{



  if (VAR_3->implicit_mergeinfo)
    return VAR_0;

  if (VAR_4)
    FUNC_2(FUNC_4(VAR_2,
                                                   VAR_3,
                                                   VAR_5,
                                                   VAR_6,
                                                   VAR_7,
                                                   VAR_8,
                                                   VAR_9,
                                                   VAR_10));
  else
    FUNC_2(FUNC_3(((void*)0),
                               &(VAR_3->implicit_mergeinfo),
                               ((void*)0), VAR_1,
                               VAR_7, VAR_3->abspath,
                               FUNC_0(VAR_5, VAR_6),
                               FUNC_1(VAR_5, VAR_6),
                               VAR_8, VAR_9, VAR_10));

  return VAR_0;
}
