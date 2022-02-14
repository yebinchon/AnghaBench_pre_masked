
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int*,char*,char const*,char const*,char const*,char const*,char const*,char const*,int *,char const*,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_1,
                       apr_file_t *VAR_2,
                       const char *VAR_3,
                       const apr_array_header_t *VAR_4,
                       const char *VAR_5,
                       const char *VAR_6,
                       const char *VAR_7,
                       const char *VAR_8,
                       const char *VAR_9,
                       const char *VAR_10,
                       apr_pool_t *VAR_11)
{
  int VAR_12;

  FUNC_0(FUNC_1(&VAR_12, ".",
                             VAR_5, VAR_6, VAR_7,
                             VAR_8, VAR_9, VAR_10,
                             VAR_2, VAR_3,
                             VAR_4, VAR_11));

  *VAR_1 = VAR_12 == 1;

  return VAR_0;
}
