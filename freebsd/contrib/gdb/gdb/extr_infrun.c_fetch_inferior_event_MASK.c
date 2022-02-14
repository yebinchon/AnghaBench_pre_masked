
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct cleanup {int dummy; } ;
struct TYPE_5__ {int wait_some_more; int wp; int waiton_ptid; int ptid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 struct cleanup* FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_12 ;

void
FUNC_9 (void *VAR_13)
{
  static struct cleanup *VAR_14;

  VAR_2 = &VAR_3;

  if (!VAR_2->wait_some_more)
    {
      VAR_14 = FUNC_4 (VAR_5,
     &VAR_10);
      FUNC_4 (VAR_4,
    &VAR_12);


      FUNC_3 (VAR_2);


      VAR_8 = VAR_6;

      VAR_7 = 1;







      FUNC_6 ();
    }

  if (&FUNC_8)
    VAR_2->ptid =
      FUNC_8 (VAR_2->waiton_ptid, VAR_2->wp);
  else
    VAR_2->ptid = FUNC_7 (VAR_2->waiton_ptid, VAR_2->wp);


  FUNC_1 (VAR_2);

  if (!VAR_2->wait_some_more)
    {



      FUNC_0 (VAR_14);
      FUNC_5 ();
      if (VAR_9 && VAR_11)
 FUNC_2 (VAR_1, ((void*)0));
      else
 FUNC_2 (VAR_0, ((void*)0));
    }
}
