
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char**,int *,char const*,int ,int *) ;
 char* FUNC_4 (int *,char const*) ;
 char* FUNC_5 (char const*,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,int *) ;
 int FUNC_8 (char const*,int *) ;
 int FUNC_9 (scalar_t__,int *,int *) ;
 int * FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (char const**,char const*,int *) ;
 int FUNC_12 (char const**,char*,int *) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (char const*) ;

svn_error_t *
FUNC_15(const char **VAR_3,
                        const char *VAR_4,
                        apr_pool_t *VAR_5)
{
  char *VAR_6;
  apr_status_t VAR_7;
  const char *VAR_8;

  FUNC_1(! FUNC_14(VAR_4));


  FUNC_0(FUNC_11(&VAR_8, VAR_4, VAR_5));

  VAR_7 = FUNC_3(&VAR_6, ((void*)0),
                               VAR_8,
                               VAR_0,
                               VAR_5);
  if (VAR_7)
    {
      if (FUNC_6(VAR_4)
          && FUNC_7(VAR_4, VAR_5)
          && !FUNC_13(VAR_4))
        {
          *VAR_3 = FUNC_4(VAR_5, VAR_4);
          return VAR_2;
        }

      return FUNC_10(VAR_1,
                               FUNC_9(VAR_7, ((void*)0), ((void*)0)),
                               FUNC_2("Couldn't determine absolute path of '%s'"),
                               FUNC_8(VAR_4, VAR_5));
    }

  FUNC_0(FUNC_12(VAR_3, VAR_6, VAR_5));
  *VAR_3 = FUNC_5(*VAR_3, VAR_5);
  return VAR_2;
}
