
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char const*,int ,int ) ;
 int FUNC_2 (int **,char const*,int *,int *) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 char* FUNC_4 (char const*,int ,int *) ;
 char* FUNC_5 (char const*,char const*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (char const*,char const*,int *) ;
 char* FUNC_8 (char const*,int ,int *) ;
 int FUNC_9 (int *,char const*,int ,int *,int *,int *,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_9,
                   const char *VAR_10,
                   const char *VAR_11,
                   svn_sqlite__db_t *VAR_12,
                   int VAR_13,
                   apr_int64_t VAR_14,
                   apr_pool_t *VAR_15)
{
  const char *VAR_16;
  const char *VAR_17;
  const char *VAR_18;
  apr_hash_t *VAR_19;
  apr_hash_t *VAR_20;
  apr_hash_t *VAR_21;
  const char *VAR_22
    = FUNC_3(VAR_9, VAR_10,
                                      VAR_15);
  const char *VAR_23 = FUNC_5(VAR_22,
                                                     VAR_9);

  if (*VAR_11 == '\0')
    {
      VAR_16 = FUNC_8(VAR_9,
                                       VAR_1, VAR_15);
      VAR_17 = FUNC_8(VAR_9,
                                         VAR_3, VAR_15);
      VAR_18 = FUNC_8(VAR_9,
                                          VAR_4, VAR_15);
    }
  else
    {
      const char *VAR_24;
      const char *VAR_25;

      VAR_25 = FUNC_8(VAR_9, VAR_0,
                                           VAR_15);
      VAR_24 = FUNC_8(VAR_9, VAR_2,
                                          VAR_15);

      VAR_16 = FUNC_4(VAR_24,
                                     FUNC_1(VAR_15,
                                                 VAR_11,
                                                 VAR_6,
                                                 VAR_5),
                                     VAR_15);

      VAR_17 = FUNC_4(VAR_24,
                                       FUNC_1(VAR_15,
                                                   VAR_11,
                                                   VAR_7,
                                                   VAR_5),
                                       VAR_15);

      VAR_18 = FUNC_4(VAR_25,
                                        FUNC_1(VAR_15,
                                                    VAR_11,
                                                    VAR_8,
                                                    VAR_5),
                                        VAR_15);
    }

  FUNC_0(FUNC_2(&VAR_19, VAR_16,
                        VAR_15, VAR_15));
  FUNC_0(FUNC_2(&VAR_20, VAR_17,
                        VAR_15, VAR_15));
  FUNC_0(FUNC_2(&VAR_21, VAR_18,
                        VAR_15, VAR_15));

  return FUNC_6(FUNC_9(
                            VAR_12, VAR_10,
                            FUNC_7(VAR_23, VAR_11, VAR_15),
                            VAR_19, VAR_20, VAR_21,
                            VAR_13, VAR_14,
                            VAR_15));
}
