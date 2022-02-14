
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_stream_t ;
typedef int svn_io_file_del_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_file_options_t ;
typedef int svn_diff_conflict_display_style_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,char const*,char const*,char const*,int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,int *,char const*,char const*,char const*,int *,int *,int *,int *,int ,int ,void*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char const**,char const*,int ,int *,int *) ;
 int FUNC_7 (char const**,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_1,
                        svn_wc__db_t *VAR_2,
                        const char *VAR_3,
                        svn_diff_conflict_display_style_t VAR_4,
                        const apr_array_header_t *VAR_5,
                        const char *VAR_6,
                        const char *VAR_7,
                        const char *VAR_8,
                        svn_io_file_del_t VAR_9,
                        svn_cancel_func_t VAR_10,
                        void *VAR_11,
                        apr_pool_t *VAR_12,
                        apr_pool_t *VAR_13)
{
  const char *VAR_14;
  svn_stream_t *VAR_15;
  svn_diff_t *VAR_16;
  svn_diff_file_options_t *VAR_17;

  VAR_17 = FUNC_2(VAR_13);
  if (VAR_5)
    FUNC_0(FUNC_3(VAR_17,
                                        VAR_5,
                                        VAR_13));

  FUNC_0(FUNC_7(&VAR_14, VAR_2,
                                         VAR_3,
                                         VAR_13, VAR_13));




  FUNC_0(FUNC_6(&VAR_15, VAR_1,
                                 VAR_14, VAR_9,
                                 VAR_12, VAR_13));
  FUNC_0(FUNC_1(&VAR_16,
                                VAR_6,
                                VAR_7, VAR_8,
                                VAR_17, VAR_13));
  FUNC_0(FUNC_4(VAR_15, VAR_16,
                                      VAR_6,
                                      VAR_7,
                                      VAR_8,
                                      ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                      VAR_4, VAR_10, VAR_11,
                                      VAR_13));
  FUNC_0(FUNC_5(VAR_15));

  return VAR_0;
}
