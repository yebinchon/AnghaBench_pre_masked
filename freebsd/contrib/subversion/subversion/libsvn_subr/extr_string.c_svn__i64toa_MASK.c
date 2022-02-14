
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_uint64_t ;
typedef scalar_t__ apr_size_t ;
typedef scalar_t__ apr_int64_t ;


 scalar_t__ FUNC_0 (char*,scalar_t__) ;

apr_size_t
FUNC_1(char * VAR_0, apr_int64_t VAR_1)
{
  if (VAR_1 >= 0)
    return FUNC_0(VAR_0, (apr_uint64_t)VAR_1);

  *VAR_0 = '-';
  return FUNC_0(VAR_0 + 1, 0 - (apr_uint64_t)VAR_1) + 1;
}
