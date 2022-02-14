
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conditional_frame {int ignoring; TYPE_1__* previous_cframe; scalar_t__ dead_tree; } ;
typedef int cframe ;
struct TYPE_2__ {int ignoring; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct conditional_frame* VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (struct conditional_frame*) ;
 scalar_t__* VAR_2 ;
 int* VAR_3 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,struct conditional_frame*,int) ;

void
FUNC_6 (int VAR_4)
{
  struct conditional_frame VAR_5;

  FUNC_3 (&VAR_5);

  if (VAR_5.dead_tree)
    VAR_5.ignoring = 1;
  else
    {
      int VAR_6;

      FUNC_1 ();
      VAR_6 = VAR_3[(unsigned char) *VAR_2];
      VAR_5.ignoring = (VAR_4 == !VAR_6);
    }

  VAR_1 = ((struct conditional_frame *)
      FUNC_5 (&VAR_0, &VAR_5,
      sizeof (VAR_5)));

  if (FUNC_0 ()
      && VAR_5.ignoring
      && (VAR_5.previous_cframe == ((void*)0)
   || ! VAR_5.previous_cframe->ignoring))
    FUNC_4 (2);

  FUNC_2 ();
}
