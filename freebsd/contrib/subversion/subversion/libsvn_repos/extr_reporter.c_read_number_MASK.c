
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_spillbuf_reader_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_uint64_t *VAR_1, svn_spillbuf_reader_t *VAR_2, apr_pool_t *VAR_3)
{
  char VAR_4;

  *VAR_1 = 0;
  while (1)
    {
      FUNC_0(FUNC_1(&VAR_4, VAR_2, VAR_3));
      if (VAR_4 == ':')
        break;
      *VAR_1 = *VAR_1 * 10 + (VAR_4 - '0');
    }
  return VAR_0;
}
