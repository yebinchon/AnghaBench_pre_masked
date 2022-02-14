
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct ucred {int dummy; } ;
struct termios {int dummy; } ;
struct tty {TYPE_2__* t_session; TYPE_1__* t_pgrp; struct termios t_termios; } ;
struct thread {int dummy; } ;
struct pts_softc {int pts_flags; unsigned int pts_unit; } ;
struct fiodgname_arg {int len; } ;
struct file {int f_flag; struct tty* f_data; } ;
struct TYPE_4__ {int s_sid; } ;
struct TYPE_3__ {int pg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int VAR_8 ;



 int FUNC_0 (char const*,int ,int) ;
 int FUNC_1 (struct fiodgname_arg*,int ) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,int ,void*,int ,struct thread*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,int) ;
 struct pts_softc* FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*) ;

__attribute__((used)) static int
FUNC_10(struct file *VAR_9, u_long VAR_10, void *VAR_11,
    struct ucred *VAR_12, struct thread *VAR_13)
{
 struct tty *VAR_14 = VAR_9->f_data;
 struct pts_softc *VAR_15 = FUNC_7(VAR_14);
 int VAR_16 = 0, VAR_17;

 switch (VAR_10) {
 case 139:
  *(int *)VAR_11 = VAR_0;
  return (0);
 case 138:

  return (0);
 case 137:
  FUNC_5(VAR_14);
  if (VAR_15->pts_flags & VAR_6) {

   *(int *)VAR_11 = 1;
  } else {
   *(int *)VAR_11 = FUNC_9(VAR_14);
  }
  FUNC_8(VAR_14);
  return (0);
 case 141:



 {
  struct fiodgname_arg *VAR_18;
  const char *VAR_19;
  int VAR_20;


  VAR_18 = VAR_11;
  VAR_19 = FUNC_3(VAR_14);
  VAR_20 = FUNC_2(VAR_19) + 1;
  if (VAR_20 > VAR_18->len)
   return (VAR_1);
  return (FUNC_0(VAR_19, FUNC_1(VAR_18, VAR_10), VAR_20));
 }
 case 130:
 case 129:






  VAR_10 = VAR_8;
  break;
 case 135:

  FUNC_5(VAR_14);
  if (VAR_14->t_pgrp != ((void*)0))
   *(int *)VAR_11 = VAR_14->t_pgrp->pg_id;
  else
   *(int *)VAR_11 = VAR_4;
  FUNC_8(VAR_14);
  return (0);
 case 133:

  FUNC_5(VAR_14);
  if (VAR_14->t_session == ((void*)0))
   VAR_16 = VAR_3;
  else
   *(int *)VAR_11 = VAR_14->t_session->s_sid;
  FUNC_8(VAR_14);
  return (VAR_16);
 case 131:

  return (0);
 case 128:

  VAR_17 = *(int *)VAR_11;
  if (VAR_17 < 1 || VAR_17 >= VAR_5)
   return (VAR_1);

  FUNC_5(VAR_14);
  FUNC_6(VAR_14, VAR_17);
  FUNC_8(VAR_14);
  return (0);
 case 132:

  FUNC_5(VAR_14);
  if (*(int *)VAR_11)
   VAR_15->pts_flags |= VAR_7;
  else
   VAR_15->pts_flags &= ~VAR_7;
  FUNC_8(VAR_14);
  return (0);
 }


 FUNC_5(VAR_14);
 VAR_16 = FUNC_4(VAR_14, VAR_10, VAR_11, VAR_9->f_flag, VAR_13);
 FUNC_8(VAR_14);
 if (VAR_16 == VAR_2)
  VAR_16 = VAR_3;

 return (VAR_16);
}
