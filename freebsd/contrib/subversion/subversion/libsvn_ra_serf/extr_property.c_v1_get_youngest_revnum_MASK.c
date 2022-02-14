
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {int blncache; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const**,TYPE_1__*,char const*,int ,int *,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char const**,int *,int ,char const*,int *) ;
 int FUNC_6 (int ,char const*,int ,char const*,int *) ;
 int FUNC_7 (char const**,TYPE_1__*,char const*,int ,char*,int *,int *) ;
 char* FUNC_8 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_revnum_t *VAR_3,
                       const char **VAR_4,
                       svn_ra_serf__session_t *VAR_5,
                       const char *VAR_6,
                       apr_pool_t *VAR_7,
                       apr_pool_t *VAR_8)
{
  const char *VAR_9;
  const char *VAR_10;



  FUNC_0(FUNC_7(&VAR_9, VAR_5, VAR_6,
                                      VAR_1,
                                      "checked-in",
                                      VAR_8, VAR_8));
  if (!VAR_9)
    {
      return FUNC_4(VAR_0, ((void*)0),
                              FUNC_1("The OPTIONS response did not include "
                                "the requested checked-in value"));
    }
  VAR_9 = FUNC_8(VAR_9, VAR_8);






  FUNC_0(FUNC_5(&VAR_10,
                                                  VAR_3,
                                                  VAR_5->blncache,
                                                  VAR_9,
                                                  VAR_8));
  if (!VAR_10)
    {
      FUNC_0(FUNC_3(VAR_3, &VAR_10, VAR_5,
                                     VAR_9, VAR_1,
                                     VAR_8, VAR_8));
      FUNC_0(FUNC_6(VAR_5->blncache,
                                        VAR_9, *VAR_3,
                                        VAR_10, VAR_8));
    }

  if (VAR_4 != ((void*)0))
    *VAR_4 = FUNC_2(VAR_7, VAR_10);

  return VAR_2;
}
