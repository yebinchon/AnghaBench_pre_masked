
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int FUNC_0 (char const*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*,int *) ;

svn_error_t *
FUNC_3(svn_stream_t *VAR_0,
                const char *VAR_1)
{
  apr_size_t VAR_2;
  VAR_2 = FUNC_0(VAR_1);
  return FUNC_1(FUNC_2(VAR_0, VAR_1, &VAR_2));
}
