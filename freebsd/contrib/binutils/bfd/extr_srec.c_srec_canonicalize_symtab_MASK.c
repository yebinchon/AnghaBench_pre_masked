
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct srec_symbol {int val; int name; struct srec_symbol* next; } ;
typedef int bfd_size_type ;
struct TYPE_12__ {TYPE_1__* srec_data; } ;
struct TYPE_14__ {TYPE_2__ tdata; } ;
typedef TYPE_4__ bfd ;
struct TYPE_13__ {int * p; } ;
struct TYPE_15__ {TYPE_3__ udata; int section; int flags; int value; int name; TYPE_4__* the_bfd; } ;
typedef TYPE_5__ asymbol ;
struct TYPE_11__ {struct srec_symbol* symbols; TYPE_5__* csymbols; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static long
FUNC_2 (bfd *VAR_2, asymbol **VAR_3)
{
  bfd_size_type VAR_4 = FUNC_1 (VAR_2);
  asymbol *VAR_5;
  unsigned int VAR_6;

  VAR_5 = VAR_2->tdata.srec_data->csymbols;
  if (VAR_5 == ((void*)0))
    {
      asymbol *VAR_7;
      struct srec_symbol *VAR_8;

      VAR_5 = FUNC_0 (VAR_2, VAR_4 * sizeof (asymbol));
      if (VAR_5 == ((void*)0) && VAR_4 != 0)
 return 0;
      VAR_2->tdata.srec_data->csymbols = VAR_5;

      for (VAR_8 = VAR_2->tdata.srec_data->symbols, VAR_7 = VAR_5;
    VAR_8 != ((void*)0);
    VAR_8 = VAR_8->next, ++VAR_7)
 {
   VAR_7->the_bfd = VAR_2;
   VAR_7->name = VAR_8->name;
   VAR_7->value = VAR_8->val;
   VAR_7->flags = VAR_0;
   VAR_7->section = VAR_1;
   VAR_7->udata.p = ((void*)0);
 }
    }

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    *VAR_3++ = VAR_5++;
  *VAR_3 = ((void*)0);

  return VAR_4;
}
