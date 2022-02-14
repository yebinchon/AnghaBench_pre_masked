
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tty* tp; } ;
struct TYPE_4__ {TYPE_1__ u_tty; } ;
struct uart_softc {int sc_softih; TYPE_2__ sc_u; } ;
struct tty {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;

int
FUNC_3(struct uart_softc *VAR_0)
{
 struct tty *VAR_1;

 VAR_1 = VAR_0->sc_u.u_tty.tp;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0->sc_softih);
 FUNC_2(VAR_1);

 return (0);
}
