
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int hash_table_size; } ;
typedef TYPE_1__ CGEN_KEYWORD ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static unsigned int
FUNC_1 (const CGEN_KEYWORD *VAR_0,
     const char *VAR_1,
     int VAR_2)
{
  unsigned int VAR_3;

  if (VAR_2)
    for (VAR_3 = 0; *VAR_1; ++VAR_1)
      VAR_3 = (VAR_3 * 97) + (unsigned char) *VAR_1;
  else
    for (VAR_3 = 0; *VAR_1; ++VAR_1)
      VAR_3 = (VAR_3 * 97) + (unsigned char) FUNC_0 (*VAR_1);
  return VAR_3 % VAR_0->hash_table_size;
}
