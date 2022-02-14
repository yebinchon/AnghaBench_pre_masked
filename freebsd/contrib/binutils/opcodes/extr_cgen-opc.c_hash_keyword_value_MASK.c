
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int hash_table_size; } ;
typedef TYPE_1__ CGEN_KEYWORD ;



__attribute__((used)) static unsigned int
FUNC_0 (const CGEN_KEYWORD *VAR_0, unsigned int VAR_1)
{
  return VAR_1 % VAR_0->hash_table_size;
}
