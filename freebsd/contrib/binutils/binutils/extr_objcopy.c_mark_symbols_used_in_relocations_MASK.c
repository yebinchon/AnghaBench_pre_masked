
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef TYPE_2__* sec_ptr ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_16__ {TYPE_1__** sym_ptr_ptr; } ;
typedef TYPE_3__ arelent ;
struct TYPE_18__ {TYPE_1__* symbol; } ;
struct TYPE_17__ {TYPE_1__* symbol; } ;
struct TYPE_15__ {int * output_section; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {TYPE_1__* symbol; } ;


 int VAR_0 ;
 TYPE_12__* VAR_1 ;
 long FUNC_0 (int *,TYPE_2__*,TYPE_3__**,int **) ;
 TYPE_9__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 long FUNC_4 (int *,TYPE_2__*) ;
 TYPE_7__* VAR_4 ;
 int FUNC_5 (TYPE_3__**) ;
 TYPE_3__** FUNC_6 (long) ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_5, sec_ptr VAR_6, void *VAR_7)
{
  asymbol **VAR_8 = VAR_7;
  long VAR_9;
  arelent **VAR_10;
  long VAR_11, VAR_12;


  if (VAR_6->output_section == ((void*)0))
    return;

  VAR_9 = FUNC_4 (VAR_5, VAR_6);
  if (VAR_9 < 0)
    {

      if (VAR_9 == -1 && FUNC_2 () == VAR_3)
 return;
      FUNC_1 (FUNC_3 (VAR_5));
    }

  if (VAR_9 == 0)
    return;

  VAR_10 = FUNC_6 (VAR_9);
  VAR_11 = FUNC_0 (VAR_5, VAR_6, VAR_10, VAR_8);
  if (VAR_11 < 0)
    FUNC_1 (FUNC_3 (VAR_5));



  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    {
      if (*VAR_10[VAR_12]->sym_ptr_ptr != VAR_2->symbol
   && *VAR_10[VAR_12]->sym_ptr_ptr != VAR_1->symbol
   && *VAR_10[VAR_12]->sym_ptr_ptr != VAR_4->symbol)
 (*VAR_10[VAR_12]->sym_ptr_ptr)->flags |= VAR_0;
    }

  if (VAR_10 != ((void*)0))
    FUNC_5 (VAR_10);
}
