
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {int dummy; } ;
struct TYPE_2__ {int * to_terminal_ours; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct serial*) ;
 struct serial* FUNC_5 (int) ;
 int FUNC_6 (struct serial*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

void
FUNC_10 (void)
{
  struct serial *VAR_6 = FUNC_5 (1);

  FUNC_7 ();







  FUNC_9 ((char *) 0);


  FUNC_3 (VAR_3);
  FUNC_3 (VAR_2);


  FUNC_4 (VAR_6);
  FUNC_6 (VAR_6);

  FUNC_0 ();


  if (VAR_5)
    FUNC_2 (VAR_5, VAR_2);






  if (VAR_4


      || VAR_1.to_terminal_ours == ((void*)0))
    FUNC_1 (VAR_2, "Quit\n");
  else
    FUNC_1 (VAR_2,
   "Quit (expect signal SIGINT when the program is resumed)\n");

  FUNC_8 (VAR_0);
}
