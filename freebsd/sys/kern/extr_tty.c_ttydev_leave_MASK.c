
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int si_note; } ;
struct tty {int t_flags; int t_dcdwait; TYPE_2__ t_outpoll; TYPE_1__ t_inpoll; scalar_t__ t_outlow; int t_outq; scalar_t__ t_inlow; int t_inq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tty* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct tty*,int) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,int ) ;
 scalar_t__ FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*) ;
 int FUNC_10 (struct tty*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct tty *VAR_3)
{

 FUNC_5(VAR_3, VAR_0);

 if (FUNC_6(VAR_3) || VAR_3->t_flags & VAR_1) {

  FUNC_8(VAR_3);
  return;
 }

 VAR_3->t_flags |= VAR_1;


 if (VAR_2 == VAR_3)
  FUNC_0();


 if (!FUNC_4(VAR_3))
  FUNC_3(VAR_3, 1);

 FUNC_10(VAR_3);


 FUNC_11(&VAR_3->t_inq);
 VAR_3->t_inlow = 0;
 FUNC_12(&VAR_3->t_outq);
 VAR_3->t_outlow = 0;

 FUNC_2(&VAR_3->t_inpoll.si_note, 1);
 FUNC_2(&VAR_3->t_outpoll.si_note, 1);

 if (!FUNC_4(VAR_3))
  FUNC_9(VAR_3);

 VAR_3->t_flags &= ~VAR_1;
 FUNC_1(&VAR_3->t_dcdwait);
 FUNC_7(VAR_3);
}
