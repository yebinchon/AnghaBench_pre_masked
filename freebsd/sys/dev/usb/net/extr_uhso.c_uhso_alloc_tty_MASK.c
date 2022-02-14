
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhso_tty {int dummy; } ;
struct uhso_softc {int sc_ttys; TYPE_1__* sc_tty; TYPE_1__* sc_ucom; } ;
struct ucom_softc {int dummy; } ;
struct TYPE_2__ {struct uhso_softc* ht_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 void* FUNC_1 (TYPE_1__*,int,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct uhso_softc *VAR_3)
{

 VAR_3->sc_ttys++;
 VAR_3->sc_tty = FUNC_1(VAR_3->sc_tty, sizeof(struct uhso_tty) * VAR_3->sc_ttys,
     VAR_0, VAR_1 | VAR_2);
 if (VAR_3->sc_tty == ((void*)0))
  return (-1);

 VAR_3->sc_ucom = FUNC_1(VAR_3->sc_ucom,
     sizeof(struct ucom_softc) * VAR_3->sc_ttys, VAR_0, VAR_1 | VAR_2);
 if (VAR_3->sc_ucom == ((void*)0))
  return (-1);

 VAR_3->sc_tty[VAR_3->sc_ttys - 1].ht_sc = VAR_3;

 FUNC_0(1, "Allocated TTY %d\n", VAR_3->sc_ttys - 1);
 return (VAR_3->sc_ttys - 1);
}
