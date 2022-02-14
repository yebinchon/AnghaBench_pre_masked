
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_spillbuf_reader_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__*,int *,int *) ;
 int FUNC_2 (char*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_revnum_t *VAR_2, svn_spillbuf_reader_t *VAR_3, apr_pool_t *VAR_4)
{
  char VAR_5;
  apr_uint64_t VAR_6;

  FUNC_0(FUNC_2(&VAR_5, VAR_3, VAR_4));
  if (VAR_5 == '+')
    {
      FUNC_0(FUNC_1(&VAR_6, VAR_3, VAR_4));
      *VAR_2 = (svn_revnum_t) VAR_6;
    }
  else
    *VAR_2 = VAR_0;
  return VAR_1;
}
