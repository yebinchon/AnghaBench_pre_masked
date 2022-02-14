
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_block {int const* sect; } ;
typedef int section ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct object_block *VAR_2 = VAR_0;
  const section *VAR_3 = VAR_1;

  return VAR_2->sect == VAR_3;
}
