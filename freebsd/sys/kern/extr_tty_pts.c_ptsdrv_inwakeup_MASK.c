
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct pts_softc {TYPE_1__ pts_inpoll; int pts_inwait; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 struct pts_softc* FUNC_3 (struct tty*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_0)
{
 struct pts_softc *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->pts_inwait);
 FUNC_2(&VAR_1->pts_inpoll);
 FUNC_0(&VAR_1->pts_inpoll.si_note, 0);
}
