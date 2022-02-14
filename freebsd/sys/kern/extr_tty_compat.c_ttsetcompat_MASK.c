
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {void* c_ospeed; void* c_ispeed; } ;
struct tty {int t_compatflags; TYPE_1__ t_termios; } ;
struct termios {char* c_cc; void* c_ospeed; void* c_ispeed; } ;
struct tchars {char t_intrc; char t_quitc; char t_startc; char t_stopc; char t_eofc; char t_brkc; } ;
struct sgttyb {int sg_ispeed; int sg_ospeed; char sg_erase; char sg_kill; int sg_flags; } ;
struct ltchars {char t_suspc; char t_dsuspc; char t_rprntc; char t_flushc; char t_werasc; char t_lnextc; } ;
typedef char cc_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;




 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 char VAR_19 ;
 void** VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*,struct termios*) ;
 int FUNC_2 (struct tty*,struct termios*) ;
 int FUNC_3 (void*,int ) ;

__attribute__((used)) static int
FUNC_4(struct tty *VAR_22, u_long *VAR_23, caddr_t VAR_24, struct termios *VAR_25)
{
 switch (*VAR_23) {
 case 129:
 case 130: {
  struct sgttyb *VAR_26 = (struct sgttyb *)VAR_24;
  int VAR_27;

  if ((VAR_27 = VAR_26->sg_ispeed) > VAR_1 || VAR_27 < 0)
   return(VAR_0);
  else if (VAR_27 != FUNC_3(VAR_22->t_termios.c_ispeed,
      VAR_21))
   VAR_25->c_ispeed = VAR_20[VAR_27];
  else
   VAR_25->c_ispeed = VAR_22->t_termios.c_ispeed;
  if ((VAR_27 = VAR_26->sg_ospeed) > VAR_1 || VAR_27 < 0)
   return(VAR_0);
  else if (VAR_27 != FUNC_3(VAR_22->t_termios.c_ospeed,
      VAR_21))
   VAR_25->c_ospeed = VAR_20[VAR_27];
  else
   VAR_25->c_ospeed = VAR_22->t_termios.c_ospeed;
  VAR_25->c_cc[VAR_9] = VAR_26->sg_erase;
  VAR_25->c_cc[VAR_11] = VAR_26->sg_kill;
  VAR_22->t_compatflags = (VAR_22->t_compatflags&0xffff0000) |
      (VAR_26->sg_flags&0xffff);
  FUNC_1(VAR_22, VAR_25);
  *VAR_23 = (*VAR_23 == 129) ? VAR_3 : VAR_2;
  break;
 }
 case 131: {
  struct tchars *VAR_28 = (struct tchars *)VAR_24;
  cc_t *VAR_29;

  VAR_29 = VAR_25->c_cc;
  VAR_29[VAR_10] = VAR_28->t_intrc;
  VAR_29[VAR_13] = VAR_28->t_quitc;
  VAR_29[VAR_15] = VAR_28->t_startc;
  VAR_29[VAR_16] = VAR_28->t_stopc;
  VAR_29[VAR_6] = VAR_28->t_eofc;
  VAR_29[VAR_7] = VAR_28->t_brkc;
  if (VAR_28->t_brkc == (char)VAR_19)
   VAR_29[VAR_8] = VAR_19;
  *VAR_23 = VAR_2;
  break;
 }
 case 128: {
  struct ltchars *VAR_30 = (struct ltchars *)VAR_24;
  cc_t *VAR_31;

  VAR_31 = VAR_25->c_cc;
  VAR_31[VAR_17] = VAR_30->t_suspc;
  VAR_31[VAR_5] = VAR_30->t_dsuspc;
  VAR_31[VAR_14] = VAR_30->t_rprntc;
  VAR_31[VAR_4] = VAR_30->t_flushc;
  VAR_31[VAR_18] = VAR_30->t_werasc;
  VAR_31[VAR_12] = VAR_30->t_lnextc;
  *VAR_23 = VAR_2;
  break;
 }
 case 133:
 case 134:
 case 132:
  if (*VAR_23 == 132)
   VAR_22->t_compatflags = (VAR_22->t_compatflags&0xffff) |
       *(int *)VAR_24<<16;
  else {
   VAR_22->t_compatflags = (FUNC_0(VAR_22)&0xffff0000) |
       (VAR_22->t_compatflags&0xffff);
   if (*VAR_23 == 133)
    VAR_22->t_compatflags |= *(int *)VAR_24<<16;
   else
    VAR_22->t_compatflags &= ~(*(int *)VAR_24<<16);
  }
  FUNC_2(VAR_22, VAR_25);
  *VAR_23 = VAR_2;
  break;
 }
 return 0;
}
