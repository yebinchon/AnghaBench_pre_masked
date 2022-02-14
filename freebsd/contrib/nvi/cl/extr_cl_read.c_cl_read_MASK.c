
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_int32_t ;
struct timeval {int dummy; } ;
struct termios {int c_iflag; int c_lflag; } ;
typedef int input_t ;
typedef int fd_set ;
struct TYPE_13__ {char* c_cc; } ;
struct TYPE_14__ {int eof_count; TYPE_2__ orig; TYPE_1__* script; struct termios vi_enter; struct TYPE_14__* gp; } ;
struct TYPE_12__ {int sh_master; } ;
typedef TYPE_3__ SCR ;
typedef TYPE_3__ GS ;
typedef TYPE_3__ CL_PRIVATE ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int FUNC_6 () ;
 int VAR_21 ;
 int FUNC_7 (TYPE_3__*,int ,char*) ;
 int FUNC_8 (int,char*,size_t) ;
 int FUNC_9 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int,struct termios*) ;
 int FUNC_12 (int,int,struct termios*) ;

__attribute__((used)) static input_t
FUNC_13(SCR *VAR_22, u_int32_t VAR_23, char *VAR_24, size_t VAR_25, int *VAR_26,
    struct timeval *VAR_27)
{
 struct termios VAR_28, VAR_29;
 CL_PRIVATE *VAR_30;
 GS *VAR_31;
 fd_set VAR_32;
 input_t VAR_33;
 int VAR_34, VAR_35, VAR_36;

 VAR_31 = VAR_22->gp;
 VAR_30 = FUNC_0(VAR_22);
 VAR_36 = 0;







 if (!FUNC_4(VAR_30, VAR_0)) {
  switch (VAR_35 = FUNC_8(VAR_17, VAR_24, VAR_25)) {
  case 0:
   return (VAR_5);
  case -1:
   goto err;
  default:
   *VAR_26 = VAR_35;
   return (VAR_8);
  }

 }





 if (VAR_27 != ((void*)0)) {
  FUNC_3(&VAR_32);
  FUNC_2(VAR_17, &VAR_32);
  switch (FUNC_9(VAR_17 + 1, &VAR_32, ((void*)0), ((void*)0), VAR_27)) {
  case 0:
   return (VAR_9);
  case -1:
   goto err;
  default:
   break;
  }
 }
 if (FUNC_5(VAR_1 | VAR_2) && !FUNC_11(VAR_17, &VAR_28)) {
  VAR_36 = 1;
  if (FUNC_5(VAR_1)) {
   VAR_29 = VAR_28;
   VAR_29 &= ~VAR_10;
   VAR_29 &= ~(VAR_12 | VAR_11);
   (void)FUNC_12(VAR_17,
       VAR_19 | VAR_18, &VAR_29);
  } else
   (void)FUNC_12(VAR_17,
       VAR_19 | VAR_18, &VAR_30->vi_enter);
 }
 if (FUNC_4(VAR_31, VAR_4)) {
loop: FUNC_3(&VAR_32);
  FUNC_2(VAR_17, &VAR_32);
  VAR_34 = VAR_17;
  if (FUNC_4(VAR_22, VAR_16)) {
   FUNC_2(VAR_22->script->sh_master, &VAR_32);
   if (VAR_22->script->sh_master > VAR_34)
    VAR_34 = VAR_22->script->sh_master;
  }
  switch (FUNC_9(VAR_34 + 1, &VAR_32, ((void*)0), ((void*)0), ((void*)0))) {
  case 0:
   FUNC_6();
  case -1:
   goto err;
  default:
   break;
  }
  if (!FUNC_1(VAR_17, &VAR_32)) {
   if (FUNC_10(VAR_22))
    return (VAR_6);
   goto loop;
  }
 }
 switch (VAR_35 = FUNC_8(VAR_17, VAR_24, VAR_25 - 1)) {
 case 0:
  if (++VAR_30->eof_count < 50) {
   VAR_24[0] = VAR_30->orig.c_cc[VAR_20];
   *VAR_26 = 1;
   VAR_33 = VAR_8;

  } else
   VAR_33 = VAR_5;
  break;
 case -1:
err: if (VAR_21 == VAR_3)
   VAR_33 = VAR_7;
  else {
   VAR_33 = VAR_6;
   FUNC_7(VAR_22, VAR_13, "input");
  }
  break;
 default:
  if (FUNC_4(VAR_22, VAR_15) && VAR_24[VAR_35 - 1] != '\n')
   VAR_24[VAR_35++] = VAR_30->orig.c_cc[VAR_20];
  *VAR_26 = VAR_35;
  VAR_30->eof_count = 0;
  VAR_33 = VAR_8;
  break;
 }


 if (VAR_36)
  (void)FUNC_12(VAR_17, VAR_19 | VAR_18, &VAR_28);
 return (VAR_33);
}
