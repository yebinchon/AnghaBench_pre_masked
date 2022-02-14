
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_byte_t ;


 int VAR_0 ;

__attribute__((used)) static apr_size_t
FUNC_0(const char *VAR_1,
              apr_size_t VAR_2)
{
  apr_size_t VAR_3 = (apr_byte_t)(VAR_1[0] - 'a') % 8
                   + 1 * (apr_byte_t)(VAR_1[VAR_2 - 1] - 'a') % 8
                   + 10 * (VAR_2 - 7);
  return VAR_3 % VAR_0;
}
