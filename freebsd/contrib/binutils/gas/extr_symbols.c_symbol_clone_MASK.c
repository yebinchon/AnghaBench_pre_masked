
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {struct TYPE_21__* sy_next; struct TYPE_21__* sy_previous; TYPE_2__* bsym; } ;
typedef TYPE_1__ symbolS ;
struct local_symbol {int dummy; } ;
struct TYPE_22__ {int section; int flags; int name; } ;
typedef TYPE_2__ asymbol ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (struct local_symbol*) ;
 int VAR_0 ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int *,int) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*) ;

symbolS *
FUNC_13 (symbolS *VAR_3, int VAR_4)
{
  symbolS *VAR_5;
  asymbol *VAR_6, *VAR_7;





  if (FUNC_0 (VAR_3))
    VAR_3 = FUNC_8 ((struct local_symbol *) VAR_3);
  VAR_6 = VAR_3->bsym;

  VAR_5 = FUNC_10 (&VAR_0, sizeof (*VAR_5));
  *VAR_5 = *VAR_3;
  VAR_7 = FUNC_6 (FUNC_2 (VAR_6));
  if (VAR_7 == ((void*)0))
    FUNC_1 ("bfd_make_empty_symbol: %s", FUNC_4 (FUNC_5 ()));
  VAR_5->bsym = VAR_7;
  VAR_7->name = VAR_6->name;
  VAR_7->flags = VAR_6->flags;
  VAR_7->section = VAR_6->section;
  FUNC_3 (FUNC_2 (VAR_6), VAR_6,
    FUNC_2 (VAR_7), VAR_7);
  if (VAR_4)
    {
      if (VAR_2 == VAR_3)
 VAR_2 = VAR_5;
      else if (VAR_3->sy_previous)
 {
   VAR_3->sy_previous->sy_next = VAR_5;
   VAR_3->sy_previous = ((void*)0);
 }
      if (VAR_1 == VAR_3)
 VAR_1 = VAR_5;
      else if (VAR_3->sy_next)
 VAR_3->sy_next->sy_previous = VAR_5;
      VAR_3->sy_previous = VAR_3->sy_next = VAR_3;
      FUNC_7 (VAR_2, VAR_1);

      FUNC_11 (VAR_5);
    }
  else
    VAR_5->sy_previous = VAR_5->sy_next = VAR_5;

  return VAR_5;
}
