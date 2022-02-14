
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct list_info_struct {int dummy; } ;
struct TYPE_7__ {TYPE_2__* frch_last; int frch_obstack; } ;
typedef TYPE_1__ frchainS ;
struct TYPE_8__ {scalar_t__ fr_type; struct TYPE_8__* fr_next; struct list_info_struct* line; int fr_line; int fr_file; scalar_t__ fr_fix; } ;
typedef TYPE_2__ fragS ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int *) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void
FUNC_6 (int VAR_2

                                       )
{
  fragS *VAR_3;
  frchainS *VAR_4;

  FUNC_1 (VAR_1->frch_last == VAR_0);


  VAR_0->fr_fix = FUNC_3 () - VAR_2;

  FUNC_1 (VAR_0->fr_type != 0);



  (void) FUNC_5 (&VAR_1->frch_obstack);
  VAR_4 = VAR_1;
  FUNC_4 (VAR_4);
  VAR_3 = VAR_4->frch_last;
  FUNC_1 (VAR_3 != 0);
  FUNC_1 (VAR_3 == VAR_0);
  VAR_0 = FUNC_2 (&VAR_4->frch_obstack);

  FUNC_0 (&VAR_0->fr_file, &VAR_0->fr_line);





  VAR_3->fr_next = VAR_0;
  VAR_4->frch_last = VAR_0;


  {
    extern struct list_info_struct *VAR_5;
    VAR_0->line = VAR_5;
  }


  FUNC_1 (VAR_1->frch_last == VAR_0);

  VAR_0->fr_next = ((void*)0);
}
