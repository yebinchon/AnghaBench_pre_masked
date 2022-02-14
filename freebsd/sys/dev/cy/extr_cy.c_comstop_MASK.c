
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty {struct com_s* t_sc; } ;
struct com_s {int extra_state; scalar_t__ etc; int state; scalar_t__ ibuf; scalar_t__ iptr; TYPE_2__* tp; TYPE_1__* obufs; } ;
typedef void* bool_t ;
struct TYPE_4__ {int t_state; } ;
struct TYPE_3__ {void* l_queued; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct com_s*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_13 ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_7(struct tty *VAR_14, int VAR_15)
{
 struct com_s *VAR_16;
 bool_t VAR_17;

 VAR_16 = VAR_14->t_sc;
 VAR_17 = VAR_7;
 FUNC_3();
 FUNC_0();
 if (VAR_15 & VAR_9) {
  VAR_16->obufs[0].l_queued = VAR_7;
  VAR_16->obufs[1].l_queued = VAR_7;
  if (VAR_16->extra_state & VAR_2) {
   VAR_13 -= VAR_10;
   VAR_16->extra_state &= ~VAR_2;
   if (VAR_16->etc != VAR_6) {
    if (VAR_16->etc == VAR_5)
     VAR_16->etc = VAR_6;
    VAR_17 = VAR_11;
   }
  }
  VAR_16->tp->t_state &= ~VAR_12;
  if (VAR_16->state & VAR_4)
   VAR_13 -= VAR_10;
  VAR_16->state &= ~(VAR_4 | VAR_3);
 }
 if (VAR_15 & VAR_8) {

  VAR_13 -= (VAR_16->iptr - VAR_16->ibuf);
  VAR_16->iptr = VAR_16->ibuf;
 }
 FUNC_1();
 FUNC_4();
 if (VAR_17)
  FUNC_6(&VAR_16->etc);
 if (VAR_15 & VAR_9 && VAR_16->etc == VAR_6)
  FUNC_2(VAR_16, VAR_0 | VAR_1);
 FUNC_5(VAR_14);
}
