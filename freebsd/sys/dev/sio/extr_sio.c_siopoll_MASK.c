
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tty {int dummy; } ;
struct com_s {int iptr; int ibuf; int state; int last_modem_status; int prev_modem_status; int extra_state; scalar_t__ gone; struct tty* tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct com_s* FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct com_s*) ;
 int FUNC_4 (int ,struct com_s*,int) ;
 int FUNC_5 (struct tty*,int) ;
 int FUNC_6 (struct tty*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_11)
{
 int VAR_12;

 if (VAR_6 == 0)
  return;
repeat:
 for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12) {
  struct com_s *VAR_13;
  int VAR_14;
  struct tty *VAR_15;

  VAR_13 = FUNC_0(VAR_12);
  if (VAR_13 == ((void*)0))
   continue;
  VAR_15 = VAR_13->tp;
  if (VAR_15 == ((void*)0) || VAR_13->gone) {




   FUNC_1(&VAR_8);
   VAR_14 = VAR_13->iptr - VAR_13->ibuf;
   VAR_13->iptr = VAR_13->ibuf;
   if (VAR_13->state & VAR_2) {
    VAR_14 += VAR_4;
    VAR_13->state &= ~VAR_2;
   }
   VAR_6 -= VAR_14;
   FUNC_2(&VAR_8);
   continue;
  }
  if (VAR_13->iptr != VAR_13->ibuf) {
   FUNC_1(&VAR_8);
   FUNC_3(VAR_13);
   FUNC_2(&VAR_8);
  }
  if (VAR_13->state & VAR_2) {
   u_char VAR_16;

   FUNC_1(&VAR_8);
   VAR_16 = VAR_13->last_modem_status
          ^ VAR_13->prev_modem_status;
   VAR_13->prev_modem_status = VAR_13->last_modem_status;
   VAR_6 -= VAR_4;
   VAR_13->state &= ~VAR_2;
   FUNC_2(&VAR_8);
   if (VAR_16 & VAR_5)
    FUNC_5(VAR_15,
        VAR_13->prev_modem_status & VAR_5);
  }
  if (VAR_13->state & VAR_3) {
   FUNC_1(&VAR_8);
   VAR_6 -= VAR_4;
   VAR_13->state &= ~VAR_3;
   FUNC_2(&VAR_8);
   if (!(VAR_13->state & VAR_1)
       && !(VAR_13->extra_state & VAR_0)) {
    FUNC_4(VAR_10, VAR_13, VAR_7 / 100);
    VAR_13->extra_state |= VAR_0;
   }
   FUNC_6(VAR_15);
  }
  if (VAR_6 == 0)
   break;
 }
 if (VAR_6 >= VAR_4)
  goto repeat;
}
