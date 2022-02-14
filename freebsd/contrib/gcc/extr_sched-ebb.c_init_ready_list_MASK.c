
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {scalar_t__ prev_head; scalar_t__ next_tail; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_4 = 0;
  rtx VAR_5 = VAR_0->prev_head;
  rtx VAR_6 = VAR_0->next_tail;
  rtx VAR_7;

  VAR_2 = 0;
  for (VAR_7 = FUNC_0 (VAR_5); VAR_7 != VAR_6; VAR_7 = FUNC_0 (VAR_7))
    {
      FUNC_3 (VAR_7);
      VAR_4++;
    }

  FUNC_2 (VAR_4 == VAR_1);
}
