
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,char const*,scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(apr_file_t *VAR_1,
                 apr_off_t VAR_2,
                 apr_pool_t *VAR_3)
{

  enum { BUFFER_SIZE = 1024 };
  static const char VAR_4[BUFFER_SIZE] = { 0 };


  while (VAR_2)
    {
      apr_size_t VAR_5 = FUNC_0(VAR_2, BUFFER_SIZE);
      FUNC_1(FUNC_2(VAR_1, VAR_4, VAR_5, ((void*)0), VAR_3));
      VAR_2 -= VAR_5;
    }

  return VAR_0;
}
