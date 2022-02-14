
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct srec_symbol {char const* name; struct srec_symbol* next; int val; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_7__ {TYPE_1__* srec_data; } ;
struct TYPE_8__ {int symcount; TYPE_2__ tdata; } ;
typedef TYPE_3__ bfd ;
struct TYPE_6__ {struct srec_symbol* symtail; struct srec_symbol* symbols; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct srec_symbol* FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_2, const char *VAR_3, bfd_vma VAR_4)
{
  struct srec_symbol *VAR_5;

  VAR_5 = FUNC_0 (VAR_2, sizeof (* VAR_5));
  if (VAR_5 == ((void*)0))
    return VAR_0;

  VAR_5->name = VAR_3;
  VAR_5->val = VAR_4;

  if (VAR_2->tdata.srec_data->symbols == ((void*)0))
    VAR_2->tdata.srec_data->symbols = VAR_5;
  else
    VAR_2->tdata.srec_data->symtail->next = VAR_5;
  VAR_2->tdata.srec_data->symtail = VAR_5;
  VAR_5->next = ((void*)0);

  ++VAR_2->symcount;

  return VAR_1;
}
