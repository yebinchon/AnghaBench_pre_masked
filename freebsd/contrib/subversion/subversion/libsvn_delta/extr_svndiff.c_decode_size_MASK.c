
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_uint64_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ VAR_0 ;
 unsigned char* FUNC_0 (scalar_t__*,unsigned char const*,unsigned char const*) ;

__attribute__((used)) static const unsigned char *
FUNC_1(apr_size_t *VAR_1,
            const unsigned char *VAR_2,
            const unsigned char *VAR_3)
{
  apr_uint64_t VAR_4 = 0;
  const unsigned char *VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3);
  if (VAR_4 > VAR_0)
    return ((void*)0);

  *VAR_1 = (apr_size_t)VAR_4;
  return VAR_5;
}
