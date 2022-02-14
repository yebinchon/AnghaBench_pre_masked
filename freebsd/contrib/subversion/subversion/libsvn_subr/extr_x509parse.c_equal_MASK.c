
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const*,void const*,scalar_t__) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(const void *VAR_1, apr_size_t VAR_2,
      const void *VAR_3, apr_size_t VAR_4)
{
  if (VAR_2 != VAR_4)
    return VAR_0;

  return FUNC_0(VAR_1, VAR_3, VAR_4) == 0;
}
