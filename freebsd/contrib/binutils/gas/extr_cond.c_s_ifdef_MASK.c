
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symbolS ;
struct conditional_frame {int ignoring; TYPE_1__* previous_cframe; scalar_t__ dead_tree; } ;
typedef int cframe ;
struct TYPE_2__ {int ignoring; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 struct conditional_frame* VAR_1 ;
 int FUNC_6 () ;
 char FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct conditional_frame*) ;
 char* VAR_2 ;
 int FUNC_10 (char) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *,struct conditional_frame*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (char*) ;

void
FUNC_16 (int VAR_4)
{

  char *VAR_5;

  symbolS *VAR_6;
  struct conditional_frame VAR_7;
  char VAR_8;


  FUNC_1 ();
  VAR_5 = VAR_2;

  if (!FUNC_10 (*VAR_5))
    {
      FUNC_5 (FUNC_4("invalid identifier for \".ifdef\""));
      FUNC_12 (&VAR_0, 0);
      FUNC_8 ();
      return;
    }

  VAR_8 = FUNC_7 ();
  VAR_6 = FUNC_15 (VAR_5);
  *VAR_2 = VAR_8;

  FUNC_9 (&VAR_7);

  if (VAR_7.dead_tree)
    VAR_7.ignoring = 1;
  else
    {
      int VAR_9;




      VAR_9 =
 VAR_6 != ((void*)0)
 && (FUNC_3 (VAR_6) || FUNC_14 (VAR_6))
 && FUNC_2 (VAR_6) != VAR_3;

      VAR_7.ignoring = ! (VAR_4 ^ VAR_9);
    }

  VAR_1 = ((struct conditional_frame *)
      FUNC_13 (&VAR_0, &VAR_7,
      sizeof (VAR_7)));

  if (FUNC_0 ()
      && VAR_7.ignoring
      && (VAR_7.previous_cframe == ((void*)0)
   || ! VAR_7.previous_cframe->ignoring))
    FUNC_11 (2);

  FUNC_6 ();
}
