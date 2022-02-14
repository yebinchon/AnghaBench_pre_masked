
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int hex ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,char const*,char*) ;
 int FUNC_3 (unsigned char*,char const*,char const*) ;
 int FUNC_4 (char*,unsigned char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int * FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *,int *,char*,char const**,char const**) ;
 int FUNC_8 (int *,int *,char const*) ;

svn_error_t *FUNC_9(svn_ra_svn_conn_t *VAR_3, apr_pool_t *VAR_4,
                                     const char *VAR_5, const char *VAR_6,
                                     const char **VAR_7)
{
  const char *VAR_8, *VAR_9, *VAR_10;
  unsigned char VAR_11[VAR_0];
  char VAR_12[2 * VAR_0 + 1];


  FUNC_0(FUNC_7(VAR_3, VAR_4, "w(?c)", &VAR_8, &VAR_9));
  if (FUNC_5(VAR_8, "failure") == 0 && VAR_9)
    {
      *VAR_7 = VAR_9;
      return VAR_2;
    }
  else if (FUNC_5(VAR_8, "step") != 0 || !VAR_9)
    return FUNC_6(VAR_1, ((void*)0),
                            FUNC_1("Unexpected server response to authentication"));


  FUNC_3(VAR_11, VAR_9, VAR_6);
  FUNC_4(VAR_12, VAR_11);
  VAR_12[sizeof(VAR_12) - 1] = '\0';
  VAR_10 = FUNC_2(VAR_4, "%s %s", VAR_5, VAR_12);
  FUNC_0(FUNC_8(VAR_3, VAR_4, VAR_10));


  FUNC_0(FUNC_7(VAR_3, VAR_4, "w(?c)", &VAR_8, &VAR_9));
  if (FUNC_5(VAR_8, "failure") == 0 && VAR_9)
    {
      *VAR_7 = VAR_9;
      return VAR_2;
    }
  else if (FUNC_5(VAR_8, "success") != 0 || VAR_9)
    return FUNC_6(VAR_1, ((void*)0),
                            FUNC_1("Unexpected server response to authentication"));

  *VAR_7 = ((void*)0);
  return VAR_2;
}
