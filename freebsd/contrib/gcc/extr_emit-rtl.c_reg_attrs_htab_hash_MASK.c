
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; scalar_t__ decl; } ;
typedef TYPE_1__ reg_attrs ;
typedef int hashval_t ;



__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_0)
{
  reg_attrs *VAR_1 = (reg_attrs *) VAR_0;

  return ((VAR_1->offset * 1000) ^ (long) VAR_1->decl);
}
