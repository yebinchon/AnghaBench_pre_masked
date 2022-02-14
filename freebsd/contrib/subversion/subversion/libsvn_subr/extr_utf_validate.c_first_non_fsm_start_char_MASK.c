
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uintptr_t ;
typedef int apr_size_t ;


 int const VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(const char *VAR_1, apr_size_t VAR_2)
{
  for (; VAR_2 > 0; ++VAR_1, --VAR_2)
    if ((unsigned char)*VAR_1 >= 0x80)
      break;

  return VAR_1;
}
