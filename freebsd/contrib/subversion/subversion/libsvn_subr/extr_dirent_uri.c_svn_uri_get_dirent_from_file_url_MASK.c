
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,char*,char const*,char*,int ) ;
 char* FUNC_4 (int *,char const*,int) ;
 char FUNC_5 (char) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int * FUNC_9 (int ,int *,int ,char const*) ;
 char* FUNC_10 (char const*,int *) ;
 int FUNC_11 (char const*,int *) ;

svn_error_t *
FUNC_12(const char **VAR_3,
                                 const char *VAR_4,
                                 apr_pool_t *VAR_5)
{
  const char *VAR_6, *VAR_7;

  FUNC_0(FUNC_11(VAR_4, VAR_5));




  if (FUNC_8(VAR_4, "file://", 7) != 0)
    return FUNC_9(VAR_0, ((void*)0),
                             FUNC_1("Local URL '%s' does not contain 'file://' "
                               "prefix"), VAR_4);






  VAR_6 = VAR_4 + 7;
  VAR_7 = FUNC_6(VAR_6, '/');
  if (VAR_7)
    VAR_6 = FUNC_4(VAR_5, VAR_6, VAR_7 - VAR_6);
  else
    VAR_7 = "/";


  if (*VAR_6 == '\0')
    VAR_6 = ((void*)0);
  else
    {
      VAR_6 = FUNC_10(VAR_6, VAR_5);
      if (FUNC_7(VAR_6, "localhost") == 0)
        VAR_6 = ((void*)0);
    }
  if (VAR_6)
    return FUNC_9(VAR_0, ((void*)0),
                             FUNC_1("Local URL '%s' contains unsupported hostname"),
                             VAR_4);

  *VAR_3 = FUNC_10(VAR_7, VAR_5);

  return VAR_1;
}
