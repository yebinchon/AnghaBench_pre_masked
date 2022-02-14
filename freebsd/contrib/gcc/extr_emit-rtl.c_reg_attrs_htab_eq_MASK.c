
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ decl; scalar_t__ offset; } ;
typedef TYPE_1__ reg_attrs ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  reg_attrs *VAR_2 = (reg_attrs *) VAR_0;
  reg_attrs *VAR_3 = (reg_attrs *) VAR_1;

  return (VAR_2->decl == VAR_3->decl && VAR_2->offset == VAR_3->offset);
}
