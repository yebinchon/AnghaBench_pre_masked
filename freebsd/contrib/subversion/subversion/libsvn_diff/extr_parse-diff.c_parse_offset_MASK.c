
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_linenum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (scalar_t__*,char const*,int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_linenum_t *VAR_3, const char *VAR_4)
{
  svn_error_t *VAR_5;
  apr_uint64_t VAR_6;

  VAR_5 = FUNC_0(&VAR_6, VAR_4, 0, VAR_1, 10);
  if (VAR_5)
    {
      FUNC_1(VAR_5);
      return VAR_0;
    }

  *VAR_3 = (svn_linenum_t)VAR_6;

  return VAR_2;
}
