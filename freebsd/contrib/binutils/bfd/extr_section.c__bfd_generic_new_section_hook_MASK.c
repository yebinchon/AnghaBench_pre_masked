
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {TYPE_2__* symbol; TYPE_2__** symbol_ptr_ptr; int name; } ;
typedef TYPE_1__ asection ;
struct TYPE_5__ {int flags; TYPE_1__* section; scalar_t__ value; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;

bfd_boolean
FUNC_1 (bfd *VAR_3, asection *VAR_4)
{
  VAR_4->symbol = FUNC_0 (VAR_3);
  if (VAR_4->symbol == ((void*)0))
    return VAR_1;

  VAR_4->symbol->name = VAR_4->name;
  VAR_4->symbol->value = 0;
  VAR_4->symbol->section = VAR_4;
  VAR_4->symbol->flags = VAR_0;

  VAR_4->symbol_ptr_ptr = &VAR_4->symbol;
  return VAR_2;
}
