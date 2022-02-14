
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_file_options_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const**,char const**,char const**,char const*,char const*,char const*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char const*,char const*,char const*,int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int *) ;
 int FUNC_6 (int *,int *,char const*,char const*,char const*,char const*,char const*,char const*,char*,int ,int ,void*,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_boolean_t *VAR_3,
              apr_file_t *VAR_4,
              const apr_array_header_t *VAR_5,
              const char *VAR_6,
              const char *VAR_7,
              const char *VAR_8,
              const char *VAR_9,
              const char *VAR_10,
              const char *VAR_11,
              svn_cancel_func_t VAR_12,
              void *VAR_13,
              apr_pool_t *VAR_14)
{
  svn_diff_t *VAR_15;
  svn_stream_t *VAR_16;
  const char *VAR_17;
  const char *VAR_18;
  const char *VAR_19;
  svn_diff_file_options_t *VAR_20;

  VAR_20 = FUNC_4(VAR_14);

  if (VAR_5)
    FUNC_0(FUNC_5(VAR_20,
                                        VAR_5, VAR_14));


  FUNC_1(&VAR_17, &VAR_18, &VAR_19,
                        VAR_9, VAR_10, VAR_11, VAR_14);

  FUNC_0(FUNC_3(&VAR_15, VAR_7, VAR_6, VAR_8,
                                VAR_20, VAR_14));

  VAR_16 = FUNC_8(VAR_4, VAR_1, VAR_14);

  FUNC_0(FUNC_6(VAR_16, VAR_15,
                                      VAR_7, VAR_6, VAR_8,
                                      VAR_18,
                                      VAR_17,
                                      VAR_19,
                                      "=======",
                                      VAR_2,
                                      VAR_12, VAR_13,
                                      VAR_14));
  FUNC_0(FUNC_7(VAR_16));

  *VAR_3 = FUNC_2(VAR_15);

  return VAR_0;
}
