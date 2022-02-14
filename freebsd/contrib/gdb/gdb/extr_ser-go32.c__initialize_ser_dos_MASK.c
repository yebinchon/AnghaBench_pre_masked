
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int inuse; } ;
struct TYPE_3__ {int irq; int base; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_5 (void)
{
  FUNC_4 (&VAR_3);


  VAR_4 = FUNC_3 (VAR_0);


  VAR_5[0].inuse =
    VAR_5[1].inuse =
    VAR_5[2].inuse = 1;

  FUNC_2 (
        FUNC_1 ("com1base", VAR_1, VAR_9,
       (char *) &VAR_6[0].base,
       "Set COM1 base i/o port address.",
       &VAR_7),
        &VAR_8);

  FUNC_2 (
        FUNC_1 ("com1irq", VAR_1, VAR_9,
       (char *) &VAR_6[0].irq,
       "Set COM1 interrupt request.",
       &VAR_7),
        &VAR_8);

  FUNC_2 (
        FUNC_1 ("com2base", VAR_1, VAR_9,
       (char *) &VAR_6[1].base,
       "Set COM2 base i/o port address.",
       &VAR_7),
        &VAR_8);

  FUNC_2 (
        FUNC_1 ("com2irq", VAR_1, VAR_9,
       (char *) &VAR_6[1].irq,
       "Set COM2 interrupt request.",
       &VAR_7),
        &VAR_8);

  FUNC_2 (
        FUNC_1 ("com3base", VAR_1, VAR_9,
       (char *) &VAR_6[2].base,
       "Set COM3 base i/o port address.",
       &VAR_7),
        &VAR_8);

  FUNC_2 (
        FUNC_1 ("com3irq", VAR_1, VAR_9,
       (char *) &VAR_6[2].irq,
       "Set COM3 interrupt request.",
       &VAR_7),
        &VAR_8);

  FUNC_2 (
        FUNC_1 ("com4base", VAR_1, VAR_9,
       (char *) &VAR_6[3].base,
       "Set COM4 base i/o port address.",
       &VAR_7),
        &VAR_8);

  FUNC_2 (
        FUNC_1 ("com4irq", VAR_1, VAR_9,
       (char *) &VAR_6[3].irq,
       "Set COM4 interrupt request.",
       &VAR_7),
        &VAR_8);

  FUNC_0 ("serial", VAR_2,
     "Print DOS serial port status.");
}
