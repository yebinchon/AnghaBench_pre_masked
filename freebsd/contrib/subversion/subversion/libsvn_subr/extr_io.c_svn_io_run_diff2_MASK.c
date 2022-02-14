
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (int *,int) ;
 char* FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,char*,int) ;
 int FUNC_6 (char const*,char const*,char const**,int*,int *,int ,int *,int *,int *,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

svn_error_t *
FUNC_9(const char *VAR_3,
                 const char *const *VAR_4,
                 int VAR_5,
                 const char *VAR_6,
                 const char *VAR_7,
                 const char *VAR_8,
                 const char *VAR_9,
                 int *VAR_10,
                 apr_file_t *VAR_11,
                 apr_file_t *VAR_12,
                 const char *VAR_13,
                 apr_pool_t *VAR_14)
{
  const char **VAR_15;
  int VAR_16;
  int VAR_17;
  int VAR_18 = 4;
  apr_pool_t *VAR_19 = FUNC_7(VAR_14);

  if (VAR_10 == ((void*)0))
    VAR_10 = &VAR_17;

  if (VAR_4 != ((void*)0))
    VAR_18 += VAR_5;
  else
    VAR_18 += 1;

  if (VAR_6 != ((void*)0))
    VAR_18 += 2;
  if (VAR_7 != ((void*)0))
    VAR_18 += 2;

  VAR_15 = FUNC_3(VAR_19, VAR_18 * sizeof(char *));

  VAR_16 = 0;
  VAR_15[VAR_16++] = VAR_13;

  if (VAR_4 != ((void*)0))
    {
      int VAR_20;
      for (VAR_20 = 0; VAR_20 < VAR_5; ++VAR_20)
        VAR_15[VAR_16++] = VAR_4[VAR_20];
    }
  else
    VAR_15[VAR_16++] = "-u";

  if (VAR_6 != ((void*)0))
    {
      VAR_15[VAR_16++] = "-L";
      VAR_15[VAR_16++] = VAR_6;
    }
  if (VAR_7 != ((void*)0))
    {
      VAR_15[VAR_16++] = "-L";
      VAR_15[VAR_16++] = VAR_7;
    }

  VAR_15[VAR_16++] = FUNC_4(VAR_8, VAR_19);
  VAR_15[VAR_16++] = FUNC_4(VAR_9, VAR_19);
  VAR_15[VAR_16++] = ((void*)0);

  FUNC_1(VAR_16 == VAR_18);

  FUNC_0(FUNC_6(VAR_3, VAR_13, VAR_15, VAR_10, ((void*)0), VAR_2,
                         ((void*)0), VAR_11, VAR_12, VAR_19));
  if (*VAR_10 != 0 && *VAR_10 != 1)
    return FUNC_5(VAR_0, ((void*)0),
                             FUNC_2("'%s' returned %d"),
                             FUNC_4(VAR_13, VAR_14),
                             *VAR_10);

  FUNC_8(VAR_19);

  return VAR_1;
}
