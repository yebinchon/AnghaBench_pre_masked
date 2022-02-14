
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,int ,int *) ;
 scalar_t__ FUNC_3 (char const*,int *) ;
 char* FUNC_4 (int *,char*,char const*,char const*) ;
 int FUNC_5 (char const**,char const*,int *) ;
 int VAR_4 ;
 int FUNC_6 (char const**,char const**,char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,char const*,int) ;
 int * FUNC_8 (scalar_t__,int ,...) ;
 int FUNC_9 (int *,int ,int ,char*) ;
 int FUNC_10 (char const**,char const*,int *) ;
 int FUNC_11 (char const*) ;

svn_error_t *
FUNC_12(const char *VAR_5,
                                  const char *VAR_6,
                                  apr_hash_t *VAR_7,
                                  apr_pool_t *VAR_8)
{
  const char *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
  char *VAR_14;
  int VAR_15;
  apr_status_t VAR_16;

  FUNC_6(&VAR_11, &VAR_12, VAR_5, VAR_8);

  FUNC_0(FUNC_5(&VAR_9, VAR_6, VAR_7));

  VAR_16 = FUNC_2(&VAR_14, VAR_0, VAR_8);
  if (VAR_16)
    return FUNC_8(VAR_16, FUNC_1("Can't get working directory"));


  if (VAR_11[0] == '\0')
    VAR_13 = ".";
  else
    FUNC_0(FUNC_10(&VAR_13, VAR_11, VAR_8));

  VAR_16 = FUNC_3(VAR_13, VAR_8);
  if (VAR_16)
    return FUNC_8
      (VAR_16, FUNC_1("Can't change working directory to '%s'"), VAR_11);

  VAR_10 = FUNC_4(VAR_8, "%s %s", VAR_9, VAR_12);
  VAR_15 = FUNC_11(VAR_10);

  VAR_16 = FUNC_3(VAR_14, VAR_8);
  if (VAR_16)
    FUNC_9(FUNC_8
                      (VAR_16, FUNC_1("Can't restore working directory")),
                      VAR_4, VAR_3 , "svn: ");

  if (VAR_15)


    return FUNC_7(VAR_1, ((void*)0),
                             FUNC_1("system('%s') returned %d"), VAR_10, VAR_15);

  return VAR_2;
}
