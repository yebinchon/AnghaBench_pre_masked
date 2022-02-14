
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char const**,char const*,char const*,char const*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_10 (char const*,char const*,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char const**,int ,int ,int *,int *) ;
 int * FUNC_13 (char const*,int *) ;

svn_error_t *
FUNC_14(apr_hash_t *VAR_6,
                           const char *VAR_7,
                           const char *VAR_8,
                           const char *VAR_9,
                           apr_pool_t *VAR_10)
{
  svn_stream_t *VAR_11;
  const char *VAR_12, *VAR_13;

  FUNC_0(FUNC_4(&VAR_12, VAR_7, VAR_8, VAR_9,
                              VAR_10));
  if (! VAR_12)
    return FUNC_7(VAR_2, ((void*)0),
                            FUNC_2("Unable to locate auth file"));




  FUNC_8(VAR_6, VAR_1,
                FUNC_13(VAR_8, VAR_10));

  FUNC_1(FUNC_12(&VAR_11, &VAR_13,
                                   FUNC_5(VAR_12, VAR_10),
                                   VAR_5,
                                   VAR_10, VAR_10),
            FUNC_2("Unable to open auth file for writing"));
  FUNC_1(FUNC_9(VAR_6, VAR_11, VAR_3, VAR_10),
            FUNC_3(VAR_10, FUNC_2("Error writing hash to '%s'"),
                         FUNC_6(VAR_12, VAR_10)));
  FUNC_0(FUNC_11(VAR_11));
  FUNC_0(FUNC_10(VAR_13, VAR_12, VAR_0, VAR_10));




  FUNC_8(VAR_6, VAR_1, ((void*)0));

  return VAR_4;
}
