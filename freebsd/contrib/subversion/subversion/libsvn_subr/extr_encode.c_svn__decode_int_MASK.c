
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 unsigned char* FUNC_0 (int*,unsigned char const*,unsigned char const*) ;

const unsigned char *
FUNC_1(apr_int64_t *VAR_1,
                const unsigned char *VAR_2,
                const unsigned char *VAR_3)
{
  apr_uint64_t VAR_4;
  const unsigned char *VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3);

  VAR_4 = VAR_4 & 1
        ? (VAR_0 - VAR_4 / 2)
        : VAR_4 / 2;
  *VAR_1 = (apr_int64_t)VAR_4;

  return VAR_5;
}
