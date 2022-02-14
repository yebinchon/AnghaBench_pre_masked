
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_8__ {int ibuf; int skip; int cw; } ;
struct TYPE_7__ {size_t e_len; void* e_event; int * e_csp; } ;
typedef int SCR ;
typedef TYPE_1__ EVENT ;
typedef TYPE_2__ CL_PRIVATE ;
typedef int CHAR_T ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,int ,int,int,int *,size_t) ;





 scalar_t__ FUNC_4 (int) ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,scalar_t__,int,int,int*,struct timeval*) ;
 int FUNC_8 (int *,size_t,size_t) ;
 scalar_t__ FUNC_9 (int *,int,size_t*,size_t*,int*) ;
 int FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *,int ,char*) ;

int
FUNC_12(SCR *VAR_16, EVENT *VAR_17, u_int32_t VAR_18, int VAR_19)
{
 struct timeval VAR_20, *VAR_21;
 CL_PRIVATE *VAR_22;
 size_t VAR_23, VAR_24;
 int VAR_25, VAR_26 = 0;
 CHAR_T *VAR_27;
 size_t VAR_28;
 int VAR_29;





 VAR_22 = FUNC_0(VAR_16);
retest: if (FUNC_4(VAR_4) || FUNC_2(VAR_22, VAR_1)) {
  if (FUNC_2(VAR_22, VAR_1)) {
   FUNC_1(VAR_22, VAR_1);
   VAR_17->e_event = VAR_9;
  } else
   VAR_17->e_event = VAR_13;
  return (0);
 }
 if (FUNC_2(VAR_22, VAR_0 | VAR_2 | VAR_3)) {
  if (FUNC_2(VAR_22, VAR_0)) {
   VAR_17->e_event = VAR_10;
   return (0);
  }
  if (FUNC_2(VAR_22, VAR_2)) {
   VAR_17->e_event = VAR_11;
   return (0);
  }
  if (FUNC_2(VAR_22, VAR_3)) {
   FUNC_1(VAR_22, VAR_3);
   if (FUNC_9(VAR_16, 1, &VAR_23, &VAR_24, &VAR_25))
    return (1);
   if (VAR_25) {
    (void)FUNC_8(VAR_16, VAR_23, VAR_24);
    VAR_17->e_event = VAR_14;
    return (0);
   }

  }
 }


 if (VAR_19 == 0)
  VAR_21 = ((void*)0);
 else {
  VAR_20.tv_sec = VAR_19 / 1000;
  VAR_20.tv_usec = (VAR_19 % 1000) * 1000;
  VAR_21 = &VAR_20;
 }


read:
 switch (FUNC_7(VAR_16, FUNC_4(VAR_5 | VAR_6),
     VAR_22->ibuf + VAR_22->skip, FUNC_5(VAR_22->ibuf) - VAR_22->skip, &VAR_26, VAR_21)) {
 case 129:
  VAR_29 = FUNC_3(VAR_16, VAR_22->cw, VAR_22->ibuf, VAR_26 + VAR_22->skip,
    VAR_27, VAR_28);
  VAR_17->e_csp = VAR_27;
  VAR_17->e_len = VAR_28;
  VAR_17->e_event = VAR_12;
  if (VAR_29 < 0) {
      int VAR_30 = -VAR_29;
      FUNC_10(VAR_22->ibuf, VAR_22->ibuf + VAR_26 + VAR_22->skip - VAR_30, VAR_30);
      VAR_22->skip = VAR_30;
      if (VAR_28 == 0)
   goto read;
  } else if (VAR_29 == 0)
      VAR_22->skip = 0;
  else
      FUNC_11(VAR_16, VAR_15, "323|Invalid input. Truncated.");
  break;
 case 132:
  VAR_17->e_event = VAR_7;
  break;
 case 131:
  VAR_17->e_event = VAR_8;
  break;
 case 130:
  goto retest;
 case 128:
  VAR_17->e_event = VAR_13;
  break;
 default:
  FUNC_6();
 }
 return (0);
}
