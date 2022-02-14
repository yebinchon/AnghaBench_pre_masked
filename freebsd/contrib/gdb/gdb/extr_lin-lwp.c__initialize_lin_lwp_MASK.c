
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct target_ops*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 struct target_ops VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int VAR_9 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_8 (void)
{
  struct sigaction VAR_12;

  extern void FUNC_0 (struct target_ops *);

  FUNC_3 ();
  FUNC_2 (&VAR_4);
  FUNC_0 (&VAR_4);


  FUNC_7 (VAR_1, ((void*)0), &VAR_6);

  VAR_12.sa_handler = VAR_9;
  FUNC_6 (&VAR_12.sa_mask);
  VAR_12.sa_flags = 0;
  FUNC_4 (VAR_0, &VAR_12, ((void*)0));


  FUNC_7 (VAR_1, ((void*)0), &VAR_10);
  FUNC_5 (&VAR_10, VAR_0);

  FUNC_6 (&VAR_2);

  FUNC_1 (FUNC_0 ("lin-lwp", VAR_5, VAR_11,
      (char *) &VAR_3,
      "Set debugging of GNU/Linux lwp module.\nEnables printf debugging output.\n", &VAR_7), &VAR_8);

}
