
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int sz64; int sz32; } ;



__attribute__((used)) static int
FUNC_0 (const struct reg *VAR_0, int VAR_1)
{
  return VAR_1 == 8 ? VAR_0->sz64 : VAR_0->sz32;
}
