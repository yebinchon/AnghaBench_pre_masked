
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {scalar_t__ c_cc; } ;
struct tty {int t_state; scalar_t__ t_ihiwat; int t_iflag; int t_rawcc; scalar_t__* t_cc; int t_lflag; TYPE_1__ t_rawq; } ;
struct com_s {int* ibuf; int* iptr; int state; size_t ierroff; int mcr_image; int mcr_rts; int mcr_rts_reg; int * delta_error_counts; struct tty* tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
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
 size_t VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ FUNC_2 (char*,int,TYPE_1__*) ;
 int FUNC_3 (struct com_s*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_19 ;
 int FUNC_6 (struct tty*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*,int) ;

__attribute__((used)) static void
FUNC_10(struct com_s *VAR_22)
{
 u_char *VAR_23;
 int VAR_24;
 u_char VAR_25;
 int VAR_26;
 struct tty *VAR_27;

 VAR_23 = VAR_22->ibuf;
 VAR_27 = VAR_22->tp;
 if (!(VAR_27->t_state & VAR_10)) {
  VAR_19 -= (VAR_22->iptr - VAR_22->ibuf);
  VAR_22->iptr = VAR_22->ibuf;
  return;
 }
 if (VAR_27->t_state & VAR_9) {
  do {





   FUNC_1();
   FUNC_5();
   VAR_24 = VAR_22->iptr - VAR_23;
   if (VAR_27->t_rawq.c_cc + VAR_24 > VAR_27->t_ihiwat
       && (VAR_22->state & VAR_5
    || VAR_27->t_iflag & VAR_8)
       && !(VAR_27->t_state & VAR_11))
    FUNC_8(VAR_27);
   VAR_22->delta_error_counts[VAR_4]
    += FUNC_2((char *)VAR_23, VAR_24, &VAR_27->t_rawq);
   VAR_23 += VAR_24;
   VAR_20 += VAR_24;
   VAR_21 += VAR_24;
   VAR_27->t_rawcc += VAR_24;
   FUNC_7(VAR_27);
   if (VAR_27->t_state & VAR_12
       && (VAR_27->t_iflag & VAR_7
    || VAR_27->t_cc[VAR_17] == VAR_27->t_cc[VAR_18])) {
    VAR_27->t_state &= ~VAR_12;
    VAR_27->t_lflag &= ~VAR_6;
    FUNC_6(VAR_27);
   }
   FUNC_4();
   FUNC_0();
  } while (VAR_23 < VAR_22->iptr);
 } else {
  do {





   FUNC_1();
   FUNC_5();
   VAR_25 = VAR_23[VAR_22->ierroff];
   VAR_26 = *VAR_23++;
   if (VAR_25
       & (VAR_0 | VAR_1 | VAR_2 | VAR_3)) {
    if (VAR_25 & VAR_0)
     VAR_26 |= VAR_13;
    if (VAR_25 & VAR_1)
     VAR_26 |= VAR_14;
    if (VAR_25 & VAR_2)
     VAR_26 |= VAR_15;
    if (VAR_25 & VAR_3)
     VAR_26 |= VAR_16;
   }
   FUNC_9(VAR_27, VAR_26);
   FUNC_4();
   FUNC_0();
  } while (VAR_23 < VAR_22->iptr);
 }
 VAR_19 -= (VAR_22->iptr - VAR_22->ibuf);
 VAR_22->iptr = VAR_22->ibuf;






 if ((VAR_22->state & VAR_5) && !(VAR_22->mcr_image & VAR_22->mcr_rts) &&
     !(VAR_27->t_state & VAR_11))
  FUNC_3(VAR_22, VAR_22->mcr_rts_reg,
     VAR_22->mcr_image |= VAR_22->mcr_rts);
}
