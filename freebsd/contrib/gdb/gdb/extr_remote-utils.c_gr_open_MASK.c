
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gr_settings {TYPE_1__* ops; int * clear_all_breakpoints; } ;
struct TYPE_3__ {int to_shortname; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct gr_settings* VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int * VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int * FUNC_11 () ;
 char* FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ,int *) ;

void
FUNC_20 (char *VAR_3, int VAR_4, struct gr_settings *VAR_5)
{
  FUNC_17 (VAR_4);
  FUNC_14 (VAR_5->ops->to_shortname, VAR_3);
  FUNC_18 (VAR_5->ops);

  VAR_1 = VAR_5;

  if (FUNC_11 () != ((void*)0))
    FUNC_2 (0);





  if (FUNC_12 () == ((void*)0))
    FUNC_19 (VAR_5->ops->to_shortname, ((void*)0));

  FUNC_15 (FUNC_8 (FUNC_12 ()));
  if (!FUNC_11 ())
    FUNC_3 ((char *) FUNC_12 ());

  if (VAR_0 != -1)
    {
      if (FUNC_10 (FUNC_11 (), VAR_0) != 0)
 {
   FUNC_6 (FUNC_11 ());
   FUNC_3 (FUNC_12 ());
 }
    }

  FUNC_9 (FUNC_11 ());



  FUNC_7 (FUNC_11 ());


  if (FUNC_13 () == 0)
    FUNC_16 (1);


  if (VAR_1->clear_all_breakpoints == ((void*)0))
    VAR_1->clear_all_breakpoints = VAR_2;

  if (VAR_4)
    {
      FUNC_4 ("Remote debugging using `%s'", FUNC_12 ());
      if (VAR_0 != -1)
 FUNC_4 (" at baud rate of %d",
    VAR_0);
      FUNC_4 ("\n");
    }

  FUNC_5 (VAR_5->ops);
  FUNC_0 ();
  FUNC_1 ();
  return;
}
