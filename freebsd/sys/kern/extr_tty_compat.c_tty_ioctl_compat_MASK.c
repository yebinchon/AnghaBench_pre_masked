
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct termios {void** c_cc; int c_ispeed; int c_ospeed; } ;
struct tty {int t_compatflags; struct termios t_termios; } ;
struct thread {int dummy; } ;
struct tchars {void* t_brkc; void* t_eofc; void* t_stopc; void* t_startc; void* t_quitc; void* t_intrc; } ;
struct sgttyb {int sg_flags; void* sg_kill; void* sg_erase; void* sg_ispeed; void* sg_ospeed; } ;
struct ltchars {void* t_lnextc; void* t_werasc; void* t_flushc; void* t_rprntc; void* t_dsuspc; void* t_suspc; } ;
typedef void* cc_t ;
typedef struct termios* caddr_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;



 size_t VAR_3 ;
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
 int VAR_17 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct tty*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tty*,int*,struct termios*,struct termios*) ;
 int FUNC_4 (struct tty*,int,struct termios*,int,struct thread*) ;
 int VAR_18 ;

int
FUNC_5(struct tty *VAR_19, u_long VAR_20, caddr_t VAR_21, int VAR_22,
    struct thread *VAR_23)
{
 switch (VAR_20) {
 case 129:
 case 130:
 case 131:
 case 128:
 case 134:
 case 135:
 case 132: {
  struct termios VAR_24;
  int VAR_25;

  VAR_24 = VAR_19->t_termios;
  if ((VAR_25 = FUNC_3(VAR_19, &VAR_20, VAR_21, &VAR_24)) != 0)
   return VAR_25;
  return FUNC_4(VAR_19, VAR_20, &VAR_24, VAR_22, VAR_23);
 }
 case 137: {
  struct sgttyb *VAR_26 = (struct sgttyb *)VAR_21;
  cc_t *VAR_27 = VAR_19->t_termios.c_cc;

  VAR_26->sg_ospeed = FUNC_2(VAR_19->t_termios.c_ospeed,
      VAR_17);
  if (VAR_19->t_termios.c_ispeed == 0)
   VAR_26->sg_ispeed = VAR_26->sg_ospeed;
  else
   VAR_26->sg_ispeed = FUNC_2(VAR_19->t_termios.c_ispeed,
       VAR_17);
  VAR_26->sg_erase = VAR_27[VAR_7];
  VAR_26->sg_kill = VAR_27[VAR_9];
  VAR_26->sg_flags = VAR_19->t_compatflags = FUNC_1(VAR_19);
  break;
 }
 case 138: {
  struct tchars *VAR_28 = (struct tchars *)VAR_21;
  cc_t *VAR_29 = VAR_19->t_termios.c_cc;

  VAR_28->t_intrc = VAR_29[VAR_8];
  VAR_28->t_quitc = VAR_29[VAR_11];
  VAR_28->t_startc = VAR_29[VAR_13];
  VAR_28->t_stopc = VAR_29[VAR_14];
  VAR_28->t_eofc = VAR_29[VAR_5];
  VAR_28->t_brkc = VAR_29[VAR_6];
  break;
 }
 case 136: {
  struct ltchars *VAR_30 = (struct ltchars *)VAR_21;
  cc_t *VAR_31 = VAR_19->t_termios.c_cc;

  VAR_30->t_suspc = VAR_31[VAR_15];
  VAR_30->t_dsuspc = VAR_31[VAR_4];
  VAR_30->t_rprntc = VAR_31[VAR_12];
  VAR_30->t_flushc = VAR_31[VAR_3];
  VAR_30->t_werasc = VAR_31[VAR_16];
  VAR_30->t_lnextc = VAR_31[VAR_10];
  break;
 }
 case 133:
  VAR_19->t_compatflags =
   (FUNC_1(VAR_19) & 0xffff0000UL)
     | (VAR_19->t_compatflags & 0xffff);
  *(int *)VAR_21 = VAR_19->t_compatflags>>16;
  if (VAR_18)
   FUNC_0("CLGET: returning %x\n", *(int *)VAR_21);
  break;

 case 140:
  *(int *)VAR_21 = 2;
  break;

 case 139: {
  int VAR_32 = 0;

  return (FUNC_4(VAR_19, VAR_2,
   *(int *)VAR_21 == 2 ? (caddr_t)&VAR_32 : VAR_21,
   VAR_22, VAR_23));
     }

 case 141: {
  int VAR_33 = 1;

  return (FUNC_4(VAR_19, VAR_1, (caddr_t)&VAR_33, VAR_22, VAR_23));
 }

 default:
  return (VAR_0);
 }
 return (0);
}
