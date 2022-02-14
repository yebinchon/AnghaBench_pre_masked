
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int type; int * csymbols; int * symtail; int * symbols; int * tail; int * head; } ;
typedef TYPE_2__ tdata_type ;
typedef int bfd_boolean ;
struct TYPE_7__ {TYPE_2__* srec_data; } ;
struct TYPE_9__ {TYPE_1__ tdata; } ;
typedef TYPE_3__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_2)
{
  tdata_type *VAR_3;

  FUNC_1 ();

  VAR_3 = FUNC_0 (VAR_2, sizeof (tdata_type));
  if (VAR_3 == ((void*)0))
    return VAR_0;

  VAR_2->tdata.srec_data = VAR_3;
  VAR_3->type = 1;
  VAR_3->head = ((void*)0);
  VAR_3->tail = ((void*)0);
  VAR_3->symbols = ((void*)0);
  VAR_3->symtail = ((void*)0);
  VAR_3->csymbols = ((void*)0);

  return VAR_1;
}
