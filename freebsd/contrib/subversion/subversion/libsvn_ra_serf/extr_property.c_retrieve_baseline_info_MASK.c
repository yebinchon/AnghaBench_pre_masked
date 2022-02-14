
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__*,char const*) ;
 int * FUNC_5 (int ,int *,int ) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int **,int *,char const*,scalar_t__,int ,int *,int *) ;
 char* FUNC_8 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_revnum_t *VAR_4,
                       const char **VAR_5,
                       svn_ra_serf__session_t *VAR_6,
                       const char *VAR_7,
                       svn_revnum_t VAR_8,
                       apr_pool_t *VAR_9,
                       apr_pool_t *VAR_10)
{
  apr_hash_t *VAR_11;
  apr_hash_t *VAR_12;
  const char *VAR_13;

  FUNC_0(FUNC_7(&VAR_11, VAR_6,
                                        VAR_7, VAR_8,
                                        VAR_3,
                                        VAR_10, VAR_10));
  VAR_12 = FUNC_3(VAR_11, "DAV:", 4);


  VAR_13 = FUNC_6(VAR_12, "baseline-collection");
  if (!VAR_13)
    {
      return FUNC_5(VAR_1, ((void*)0),
                              FUNC_2("The PROPFIND response did not include "
                                "the requested baseline-collection value"));
    }
  *VAR_5 = FUNC_8(VAR_13, VAR_9);

  if (VAR_4)
    {
      const char *VAR_14;

      VAR_14 = FUNC_6(VAR_12, VAR_0);
      if (VAR_14)
        {
          apr_int64_t VAR_15;

          FUNC_0(FUNC_4(&VAR_15, VAR_14));
          *VAR_4 = (svn_revnum_t)VAR_15;
        }

      if (!VAR_14 || !FUNC_1(*VAR_4))
        return FUNC_5(VAR_1, ((void*)0),
                                FUNC_2("The PROPFIND response did not include "
                                  "the requested version-name value"));
    }

  return VAR_2;
}
