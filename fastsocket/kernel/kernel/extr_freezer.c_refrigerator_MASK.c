
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {long state; int comm; int flags; TYPE_1__* sighand; } ;
struct TYPE_7__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

void FUNC_12(void)
{


 long VAR_3;

 FUNC_10(VAR_2);
 if (FUNC_1(VAR_2)) {
  FUNC_3();
  FUNC_11(VAR_2);
 } else {
  FUNC_11(VAR_2);
  return;
 }
 VAR_3 = VAR_2->state;
 FUNC_4("%s entered refrigerator\n", VAR_2->comm);

 FUNC_8(&VAR_2->sighand->siglock);
 FUNC_5();
 FUNC_9(&VAR_2->sighand->siglock);


 VAR_2->flags |= VAR_0;

 for (;;) {
  FUNC_7(VAR_1);
  if (!FUNC_2(VAR_2))
   break;
  FUNC_6();
 }


 VAR_2->flags &= ~VAR_0;

 FUNC_4("%s left refrigerator\n", VAR_2->comm);
 FUNC_0(VAR_3);
}
