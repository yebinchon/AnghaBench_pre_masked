
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct umcs7840_softc {int sc_driver_done; TYPE_3__* sc_ports; } ;
struct ucom_softc {size_t sc_portno; TYPE_2__* sc_tty; struct umcs7840_softc* sc_parent; } ;
struct TYPE_8__ {int reg_control; int reg_sp; } ;
struct TYPE_7__ {int sc_lcr; int sc_mcr; } ;
struct TYPE_5__ {int c_cflag; } ;
struct TYPE_6__ {TYPE_1__ t_termios; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (struct umcs7840_softc*,size_t,int ,int*) ;
 scalar_t__ FUNC_2 (struct umcs7840_softc*,int ,int*) ;
 TYPE_4__* VAR_24 ;
 scalar_t__ FUNC_3 (struct umcs7840_softc*,size_t,int ,int) ;
 scalar_t__ FUNC_4 (struct umcs7840_softc*,size_t,int) ;
 scalar_t__ FUNC_5 (struct umcs7840_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct ucom_softc *VAR_25)
{
 struct umcs7840_softc *VAR_26 = VAR_25->sc_parent;
 uint16_t VAR_27 = VAR_25->sc_portno;
 uint8_t VAR_28;


 if (!VAR_26->sc_driver_done) {




  if (FUNC_2(VAR_26, VAR_3, &VAR_28))
   return;
  VAR_28 |= VAR_1;
  if (FUNC_5(VAR_26, VAR_3, VAR_28))
   return;
  VAR_26->sc_driver_done = 1;
 }

 if (FUNC_2(VAR_26, VAR_24[VAR_27].reg_sp, &VAR_28))
  return;
 VAR_28 |= VAR_6;
 if (FUNC_5(VAR_26, VAR_24[VAR_27].reg_sp, VAR_28))
  return;
 VAR_28 &= ~VAR_6;
 if (FUNC_5(VAR_26, VAR_24[VAR_27].reg_sp, VAR_28))
  return;


 if (FUNC_3(VAR_26, VAR_27, VAR_22, VAR_23))
  return;


 if (FUNC_2(VAR_26, VAR_24[VAR_27].reg_control, &VAR_28))
  return;
 VAR_28 |= VAR_2;
 if (FUNC_5(VAR_26, VAR_24[VAR_27].reg_control, VAR_28))
  return;


 if (FUNC_3(VAR_26, VAR_27, VAR_19, 0))
  return;


 if (FUNC_3(VAR_26, VAR_27, VAR_18, 0))
  return;
 if (FUNC_3(VAR_26, VAR_27, VAR_18,
     VAR_7 | VAR_8 |
     VAR_9 | VAR_10))
  return;


 VAR_26->sc_ports[VAR_27].sc_lcr = VAR_13 | VAR_14;
 if (FUNC_3(VAR_26, VAR_27, VAR_20, VAR_26->sc_ports[VAR_27].sc_lcr))
  return;





 VAR_26->sc_ports[VAR_27].sc_mcr = VAR_16;
 if (VAR_25->sc_tty == ((void*)0) || (VAR_25->sc_tty->t_termios.c_cflag & VAR_0) == 0)
  VAR_26->sc_ports[VAR_27].sc_mcr |= VAR_15 | VAR_17;
 if (FUNC_3(VAR_26, VAR_27, VAR_21, VAR_26->sc_ports[VAR_27].sc_mcr))
  return;


 if (FUNC_2(VAR_26, VAR_24[VAR_27].reg_sp, &VAR_28))
  return;
 VAR_28 |= VAR_5 | VAR_4;
 if (FUNC_5(VAR_26, VAR_24[VAR_27].reg_sp, VAR_28))
  return;
 VAR_28 &= ~(VAR_5 | VAR_4);
 if (FUNC_5(VAR_26, VAR_24[VAR_27].reg_sp, VAR_28))
  return;


 if (FUNC_4(VAR_26, VAR_27, 9600))
  return;







 if (FUNC_1(VAR_26, VAR_27, VAR_20, &VAR_26->sc_ports[VAR_27].sc_lcr))
  return;
 if (FUNC_3(VAR_26, VAR_27, VAR_19,
     VAR_12 | VAR_11))
  return;


 if (FUNC_2(VAR_26, VAR_24[VAR_27].reg_control, &VAR_28))
  return;
 VAR_28 &= ~VAR_2;
 if (FUNC_5(VAR_26, VAR_24[VAR_27].reg_control, VAR_28))
  return;

 FUNC_0("Port %d has been opened\n", VAR_27);
}
