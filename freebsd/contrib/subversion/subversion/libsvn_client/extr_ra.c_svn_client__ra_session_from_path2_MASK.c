
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_4__ {int url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int **,char const**,char const*,char const*,int *,int ,int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_1__**,int *,char const*,int const*,int const*,int *,int *) ;
 int FUNC_4 (char const**,char const*,int *,int *,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;
 int * FUNC_6 (int ,int *,int ,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (int *,int ,int *) ;

svn_error_t *
FUNC_9(svn_ra_session_t **VAR_2,
                                  svn_client__pathrev_t **VAR_3,
                                  const char *VAR_4,
                                  const char *VAR_5,
                                  const svn_opt_revision_t *VAR_6,
                                  const svn_opt_revision_t *VAR_7,
                                  svn_client_ctx_t *VAR_8,
                                  apr_pool_t *VAR_9)
{
  svn_ra_session_t *VAR_10;
  const char *VAR_11;
  const char *VAR_12;
  svn_client__pathrev_t *VAR_13;
  const char *VAR_14;

  FUNC_0(FUNC_4(&VAR_11, VAR_4, VAR_8, VAR_9,
                                    VAR_9));
  if (! VAR_11)
    return FUNC_6(VAR_0, ((void*)0),
                             FUNC_1("'%s' has no URL"), VAR_4);

  if (VAR_5)
    VAR_14 = VAR_5;
  else if (!FUNC_7(VAR_4))
    FUNC_0(FUNC_5(&VAR_14, VAR_4, VAR_9));
  else
    VAR_14 = ((void*)0);

  FUNC_0(FUNC_2(&VAR_10, &VAR_12,
                                               VAR_11,
                                               VAR_14,
                                               ((void*)0) ,
                                               VAR_5 != ((void*)0),
                                               VAR_5 != ((void*)0),
                                               VAR_8, VAR_9, VAR_9));



  if (VAR_12 && FUNC_7(VAR_4))
    VAR_4 = VAR_12;

  FUNC_0(FUNC_3(&VAR_13, VAR_10,
                                          VAR_4, VAR_6, VAR_7,
                                          VAR_8, VAR_9));


  FUNC_0(FUNC_8(VAR_10, VAR_13->url, VAR_9));

  *VAR_2 = VAR_10;
  if (VAR_3)
    *VAR_3 = VAR_13;

  return VAR_1;
}
