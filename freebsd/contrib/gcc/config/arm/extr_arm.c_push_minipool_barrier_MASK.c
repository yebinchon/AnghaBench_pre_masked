
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_4__ {struct TYPE_4__* next; int address; int insn; } ;
typedef TYPE_1__ Mfix ;
typedef int HOST_WIDE_INT ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1 (rtx VAR_3, HOST_WIDE_INT VAR_4)
{
  Mfix * VAR_5 = (Mfix *) FUNC_0 (&VAR_2, sizeof (* VAR_5));

  VAR_5->insn = VAR_3;
  VAR_5->address = VAR_4;

  VAR_5->next = ((void*)0);
  if (VAR_0 != ((void*)0))
    VAR_1->next = VAR_5;
  else
    VAR_0 = VAR_5;

  VAR_1 = VAR_5;
}
