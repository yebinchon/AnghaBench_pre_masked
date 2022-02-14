
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
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 struct conditional_frame* VAR_1 ;
 char* FUNC_4 (int*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct conditional_frame*) ;
 char* VAR_2 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,struct conditional_frame*,int) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

void
FUNC_11 (int VAR_3)
{
  char *VAR_4, *VAR_5;
  int VAR_6, VAR_7;
  int VAR_8;
  struct conditional_frame VAR_9;

  VAR_4 = FUNC_4 (&VAR_6);

  FUNC_1 ();
  if (*VAR_2 != ',')
    {
      FUNC_3 (FUNC_2(".ifeqs syntax error"));
      FUNC_6 ();
      return;
    }

  ++VAR_2;

  VAR_5 = FUNC_4 (&VAR_7);

  VAR_8 = VAR_6 == VAR_7 && FUNC_10 (VAR_4, VAR_5, VAR_6) == 0;

  FUNC_7 (&VAR_9);
  VAR_9.ignoring = VAR_9.dead_tree || ! (VAR_8 ^ VAR_3);
  VAR_1 = ((struct conditional_frame *)
      FUNC_9 (&VAR_0, &VAR_9, sizeof (VAR_9)));

  if (FUNC_0 ()
      && VAR_9.ignoring
      && (VAR_9.previous_cframe == ((void*)0)
   || ! VAR_9.previous_cframe->ignoring))
    FUNC_8 (2);

  FUNC_5 ();
}
