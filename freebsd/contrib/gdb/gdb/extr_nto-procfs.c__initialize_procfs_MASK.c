
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int trace; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;

void
FUNC_8 (void)
{
  sigset_t VAR_9;

  FUNC_3 ();
  FUNC_2 (&VAR_6);



  FUNC_6 (&VAR_9);
  FUNC_5 (&VAR_9, VAR_0);
  FUNC_7 (VAR_1, &VAR_9, ((void*)0));


  FUNC_6 (&VAR_8.trace);
  FUNC_4 ();


  VAR_3 = FUNC_0 (VAR_2)->flags;
  VAR_4 = 1;

  FUNC_1 ("pidlist", VAR_7, "pidlist");
  FUNC_1 ("meminfo", VAR_5, "memory information");
}
