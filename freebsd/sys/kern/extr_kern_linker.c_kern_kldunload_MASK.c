
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int td_ucred; } ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_4__ {scalar_t__ userrefs; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (struct thread*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct thread*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(struct thread *VAR_5, int VAR_6, int VAR_7)
{
 linker_file_t VAR_8;
 int VAR_9 = 0;

 if ((VAR_9 = FUNC_8(VAR_5->td_ucred, 0)) != 0)
  return (VAR_9);

 if ((VAR_9 = FUNC_7(VAR_5, VAR_3)) != 0)
  return (VAR_9);

 FUNC_1(FUNC_3(VAR_5));
 FUNC_9(&VAR_4);
 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_2, ("kldunload: lf->userrefs=%d\n", VAR_8->userrefs));

  if (VAR_8->userrefs == 0) {



   FUNC_6("kldunload: attempt to unload file that was"
       " loaded by the kernel\n");
   VAR_9 = VAR_0;
  } else {
   VAR_8->userrefs--;
   VAR_9 = FUNC_4(VAR_8, VAR_7);
   if (VAR_9)
    VAR_8->userrefs++;
  }
 } else
  VAR_9 = VAR_1;
 FUNC_10(&VAR_4);

 FUNC_0();
 return (VAR_9);
}
