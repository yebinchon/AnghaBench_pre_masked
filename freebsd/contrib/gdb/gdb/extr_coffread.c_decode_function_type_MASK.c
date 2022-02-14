
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ l; } ;
struct TYPE_4__ {TYPE_1__ x_tagndx; } ;
union internal_auxent {TYPE_2__ x_sym; } ;
struct type {int dummy; } ;
struct coff_symbol {scalar_t__ c_naux; } ;


 int FUNC_0 (unsigned int) ;
 struct type* FUNC_1 (struct coff_symbol*,int ,union internal_auxent*) ;

__attribute__((used)) static struct type *
FUNC_2 (struct coff_symbol *VAR_0, unsigned int VAR_1,
        union internal_auxent *VAR_2)
{
  if (VAR_2->x_sym.x_tagndx.l == 0)
    VAR_0->c_naux = 0;

  return FUNC_1 (VAR_0, FUNC_0 (VAR_1), VAR_2);
}
