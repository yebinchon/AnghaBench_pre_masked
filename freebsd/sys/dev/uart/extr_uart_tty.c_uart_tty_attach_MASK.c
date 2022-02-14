
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct tty* tp; } ;
struct TYPE_5__ {TYPE_1__ u_tty; } ;
struct uart_softc {int sc_softih; TYPE_3__* sc_sysdev; int sc_dev; TYPE_2__ sc_u; } ;
struct tty {int dummy; } ;
struct consdev {int cn_name; } ;
struct TYPE_6__ {scalar_t__ type; int baudrate; scalar_t__ cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ,int ,struct uart_softc*,int ,int ,int *) ;
 struct tty* FUNC_3 (int *,struct uart_softc*) ;
 int FUNC_4 (struct tty*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct tty*,int *,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_6(struct uart_softc *VAR_7)
{
 struct tty *VAR_8;
 int VAR_9;

 VAR_7->sc_u.u_tty.tp = VAR_8 = FUNC_3(&VAR_5, VAR_7);

 VAR_9 = FUNC_0(VAR_7->sc_dev);

 if (VAR_7->sc_sysdev != ((void*)0) && VAR_7->sc_sysdev->type == VAR_2) {
  FUNC_1(((struct consdev *)VAR_7->sc_sysdev->cookie)->cn_name,
      "ttyu%r", VAR_9);
  FUNC_4(VAR_8, VAR_7->sc_sysdev->baudrate);
 }

 FUNC_2(&VAR_3, VAR_4, VAR_6, VAR_7, VAR_1,
     VAR_0, &VAR_7->sc_softih);

 FUNC_5(VAR_8, ((void*)0), "u%r", VAR_9);

 return (0);
}
