
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (unsigned char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_size_t *VAR_1,
              apr_size_t *VAR_2,
              svn_stream_t *VAR_3)
{
  unsigned char VAR_4;

  *VAR_1 = 0;
  while (1)
    {
      FUNC_0(FUNC_1(&VAR_4, VAR_3));
      ++*VAR_2;
      *VAR_1 = (*VAR_1 << 7) | (VAR_4 & 0x7f);
      if (!(VAR_4 & 0x80))
        break;
    }
  return VAR_0;
}
