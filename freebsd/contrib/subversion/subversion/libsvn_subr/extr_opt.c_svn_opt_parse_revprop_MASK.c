
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *,char const*,int) ;
 char* FUNC_4 (char const*,char) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,char const*) ;
 int FUNC_7 (int *,char const*,int *) ;
 int FUNC_8 (char const*) ;
 int * FUNC_9 (char const*,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (char const**,char const*,int *) ;

svn_error_t *
FUNC_12(apr_hash_t **VAR_3, const char *VAR_4,
                      apr_pool_t *VAR_5)
{
  const char *VAR_6, *VAR_7;
  svn_string_t *VAR_8;

  if (! *VAR_4)
    return FUNC_5(VAR_1, ((void*)0),
                            FUNC_1("Revision property pair is empty"));

  if (! *VAR_3)
    *VAR_3 = FUNC_2(VAR_5);

  VAR_6 = FUNC_4(VAR_4, '=');
  if (VAR_6)
    {
      VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_6 - VAR_4);
      FUNC_0(FUNC_11(&VAR_7, VAR_7, VAR_5));
      VAR_8 = FUNC_9(VAR_6 + 1, VAR_5);
    }
  else
    {
      FUNC_0(FUNC_11(&VAR_7, VAR_4, VAR_5));
      VAR_8 = FUNC_10(VAR_5);
    }

  if (!FUNC_8(VAR_7))
    return FUNC_6(VAR_0, ((void*)0),
                             FUNC_1("'%s' is not a valid Subversion property name"),
                             VAR_7);

  FUNC_7(*VAR_3, VAR_7, VAR_8);

  return VAR_2;
}
