
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_stream_t *VAR_1,
                     apr_uint64_t VAR_2)
{
  unsigned char VAR_3[VAR_0];

  apr_size_t VAR_4 = FUNC_0(VAR_3, VAR_2);
  return FUNC_1(FUNC_2(VAR_1, (char *)VAR_3, &VAR_4));
}
