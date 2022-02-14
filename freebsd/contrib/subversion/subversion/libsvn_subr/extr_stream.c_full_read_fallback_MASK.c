
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,char*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_stream_t *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
  apr_size_t VAR_4 = *VAR_3;
  while (VAR_4 > 0)
    {
      apr_size_t VAR_5 = VAR_4;
      FUNC_0(FUNC_1(VAR_1, VAR_2, &VAR_5));

      if (VAR_5 == 0)
        {
          *VAR_3 -= VAR_4;
          return VAR_0;
        }

      VAR_4 -= VAR_5;
      VAR_2 += VAR_5;
    }

  return VAR_0;
}
