
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tty {int t_state; } ;
struct com_s {int iptr; int ibuf; int state; int last_modem_status; int prev_modem_status; int extra_state; scalar_t__ etc; struct tty* tp; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct com_s* FUNC_4 (int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct com_s*) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*,int) ;
 int FUNC_9 (struct tty*) ;
 int FUNC_10 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_13)
{
 int VAR_14;




 if (VAR_11 == 0)
  return;
repeat:
 for (VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14) {
  struct com_s *VAR_15;
  int VAR_16;
  struct tty *VAR_17;

  VAR_15 = FUNC_4(VAR_14);
  if (VAR_15 == ((void*)0))
   continue;
  VAR_17 = VAR_15->tp;
  if (VAR_17 == ((void*)0)) {





   FUNC_2();
   FUNC_0();
   VAR_16 = VAR_15->iptr - VAR_15->ibuf;
   VAR_15->iptr = VAR_15->ibuf;
   if (VAR_15->state & VAR_3) {
    VAR_16 += VAR_8;
    VAR_15->state &= ~VAR_3;
   }
   VAR_11 -= VAR_16;
   FUNC_1();
   FUNC_3();
   if (VAR_16 != 0)
    FUNC_6(VAR_7,
        "cy%d: %d events for device with no tp\n",
        VAR_14, VAR_16);
   continue;
  }
  if (VAR_15->iptr != VAR_15->ibuf) {
   FUNC_2();
   FUNC_0();
   FUNC_5(VAR_15);
   FUNC_1();
   FUNC_3();
  }
  if (VAR_15->state & VAR_3) {
   u_char VAR_18;

   FUNC_2();
   FUNC_0();
   FUNC_5(VAR_15);
   VAR_18 = VAR_15->last_modem_status
          ^ VAR_15->prev_modem_status;
   VAR_15->prev_modem_status = VAR_15->last_modem_status;
   VAR_11 -= VAR_8;
   VAR_15->state &= ~VAR_3;
   FUNC_1();
   FUNC_3();
   if (VAR_18 & VAR_0)
    FUNC_8(VAR_17,
        VAR_15->prev_modem_status & VAR_0);
  }
  if (VAR_15->extra_state & VAR_1) {
   FUNC_2();
   FUNC_0();
   VAR_11 -= VAR_8;
   VAR_15->extra_state &= ~VAR_1;
   FUNC_1();
   FUNC_3();
   if (!(VAR_15->state & VAR_2)) {
    VAR_17->t_state &= ~VAR_10;
    FUNC_7(VAR_15->tp);
   }
   if (VAR_15->etc != VAR_6) {
    if (VAR_15->etc == VAR_5)
     VAR_15->etc = VAR_6;
    FUNC_10(&VAR_15->etc);
   }
  }
  if (VAR_15->state & VAR_4) {
   FUNC_2();
   FUNC_0();
   VAR_11 -= VAR_8;
   VAR_15->state &= ~VAR_4;
   FUNC_1();
   FUNC_3();
   FUNC_9(VAR_17);
  }
  if (VAR_11 == 0)
   break;
 }
 if (VAR_11 >= VAR_8)
  goto repeat;
}
