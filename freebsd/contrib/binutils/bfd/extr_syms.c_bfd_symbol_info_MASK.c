
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name; scalar_t__ value; int type; } ;
typedef TYPE_2__ symbol_info ;
struct TYPE_9__ {int name; TYPE_1__* section; scalar_t__ value; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_7__ {scalar_t__ vma; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2 (asymbol *VAR_0, symbol_info *VAR_1)
{
  VAR_1->type = FUNC_0 (VAR_0);

  if (FUNC_1 (VAR_1->type))
    VAR_1->value = 0;
  else
    VAR_1->value = VAR_0->value + VAR_0->section->vma;

  VAR_1->name = VAR_0->name;
}
