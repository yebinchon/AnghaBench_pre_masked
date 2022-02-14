
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int rev; int url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,int *,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int VAR_0 ;
 int * FUNC_4 (int *,char*,int ,int *,int *,int **,int *) ;
 int FUNC_5 (int *,char const*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char const**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_1,
                           apr_hash_t **VAR_2,
                           svn_ra_session_t *VAR_3,
                           const svn_client__pathrev_t *VAR_4,
                           const char *VAR_5,
                           apr_pool_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;
  const char *VAR_9;
  svn_error_t *VAR_10;

  FUNC_0(FUNC_7(&VAR_8, VAR_1, ((void*)0),
                                 VAR_0,
                                 VAR_6, VAR_7));

  FUNC_0(FUNC_1(&VAR_9, VAR_3, VAR_4->url,
                                            VAR_7));
  VAR_10 = FUNC_4(VAR_3, "", VAR_4->rev,
                        VAR_8, ((void*)0), VAR_2, VAR_7);
  FUNC_0(FUNC_2(
            VAR_10, FUNC_5(VAR_3, VAR_9, VAR_7)));

  return FUNC_3(FUNC_6(VAR_8));
}
