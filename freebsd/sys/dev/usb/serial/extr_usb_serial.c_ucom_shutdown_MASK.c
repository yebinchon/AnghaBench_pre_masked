
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucom_softc {struct tty* sc_tty; } ;
struct TYPE_2__ {int c_cflag; } ;
struct tty {TYPE_1__ t_termios; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 int FUNC_2 (struct tty*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_3)
{
 struct tty *VAR_4 = VAR_3->sc_tty;

 FUNC_1(VAR_3, VAR_1);

 FUNC_0("\n");




 if (VAR_4->t_termios.c_cflag & VAR_0) {
  FUNC_2(VAR_4, 0, VAR_2);
 }
}
