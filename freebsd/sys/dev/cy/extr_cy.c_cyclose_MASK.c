
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; } ;
struct tty {int t_cflag; int t_state; scalar_t__ t_actout; TYPE_1__ t_init_in; struct com_s* t_sc; } ;
struct com_s {int unit; int intr_enable; int prev_modem_status; int channel_control; struct tty* tp; int * cor; int etc; int iobase; } ;
typedef int cy_addr ;


 int VAR_0 ;
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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__* FUNC_2 (struct tty*) ;
 int VAR_15 ;
 int FUNC_3 (struct com_s*,int) ;
 int FUNC_4 (struct com_s*,int ) ;
 int FUNC_5 (struct com_s*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct tty*,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct tty*) ;
 int FUNC_12 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_13(struct tty *VAR_16)
{
 cy_addr VAR_17;
 struct com_s *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_18 = VAR_16->t_sc;
 VAR_20 = VAR_18->unit;
 VAR_17 = VAR_18->iobase;
 VAR_19 = FUNC_9();

 FUNC_6();
 FUNC_0();
 VAR_18->etc = VAR_11;
 FUNC_5(VAR_18, VAR_5, VAR_18->cor[1] &= ~VAR_6);
 FUNC_1();
 FUNC_7();
 FUNC_4(VAR_18, VAR_7);
 FUNC_3(VAR_18, VAR_1 | VAR_2);

 {
  FUNC_6();
  FUNC_0();
  FUNC_5(VAR_18, VAR_9, VAR_18->intr_enable = 0);
  FUNC_1();
  FUNC_7();
  VAR_16 = VAR_18->tp;
  if ((VAR_16->t_cflag & VAR_13)







      || (!VAR_16->t_actout
         && !(VAR_18->prev_modem_status & VAR_8)
         && !(VAR_16->t_init_in.c_cflag & VAR_10))
      || !(VAR_16->t_state & VAR_15)) {
   (void)FUNC_8(VAR_16, 0, VAR_14);


   VAR_18->channel_control = VAR_0
            | VAR_4
            | VAR_3;
   FUNC_3(VAR_18, VAR_18->channel_control);

   FUNC_11(VAR_16);
  }
 }
 VAR_16->t_actout = VAR_12;
 FUNC_12(&VAR_16->t_actout);
 FUNC_12(FUNC_2(VAR_16));
 FUNC_10(VAR_19);
}
