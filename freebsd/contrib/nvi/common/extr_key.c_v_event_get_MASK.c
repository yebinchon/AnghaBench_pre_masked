
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_27__ {scalar_t__ i_cnt; size_t i_next; TYPE_4__* i_event; scalar_t__ (* scr_event ) (TYPE_2__*,TYPE_4__*,int,int) ;int seqb; } ;
struct TYPE_28__ {int e_event; int e_c; scalar_t__ e_value; TYPE_3__ e_ch; } ;
struct TYPE_26__ {TYPE_3__* gp; } ;
struct TYPE_25__ {int* output; int ilen; int olen; } ;
typedef TYPE_1__ SEQ ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;
typedef TYPE_4__ EVENT ;


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
 int const VAR_10 ;





 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int*,TYPE_4__*,int) ;
 TYPE_1__* FUNC_10 (TYPE_2__*,int *,TYPE_4__*,int *,scalar_t__,int ,int*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_4__*,int,int) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_4__*,int,int) ;
 int FUNC_14 (TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int *,int*,int,int) ;
 int FUNC_16 (TYPE_2__*,int) ;

int
FUNC_17(
 SCR *VAR_25,
 EVENT *VAR_26,
 int VAR_27,
 u_int32_t VAR_28)
{
 EVENT *VAR_29, VAR_30;
 GS *VAR_31;
 SEQ *VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36;

 VAR_31 = VAR_25->gp;


 if (VAR_26 == ((void*)0))
  VAR_26 = &VAR_30;

retry: VAR_35 = VAR_36 = 0;





 if (VAR_31->i_cnt != 0 && FUNC_4(VAR_9))
  return (0);





 if (VAR_31->i_cnt == 0 || FUNC_4(VAR_3 | VAR_9)) {




  if (FUNC_1(VAR_31, VAR_12) && FUNC_11(VAR_25))
   return (1);
loop: if (VAR_31->scr_event(VAR_25, VAR_26,
      FUNC_4(VAR_3 | VAR_7 | VAR_8), VAR_27))
   return (1);
  switch (VAR_26->e_event) {
  case 132:
  case 130:
  case 129:




   FUNC_16(VAR_25, VAR_21 | VAR_22 |
       (VAR_26->e_event == 129 ? 0: VAR_20));
   return (1);
  case 128:
   VAR_35 = 1;
   break;
  case 131:

   FUNC_2(VAR_25->gp, VAR_11);





   if (FUNC_4(VAR_3))
    return (0);
   goto append;
  default:
append: if (FUNC_14(VAR_25, VAR_26))
    return (1);
   break;
  }
 }






 if (FUNC_4(VAR_3 | VAR_9))
  return (0);

newmap: VAR_29 = &VAR_31->i_event[VAR_31->i_next];





 if (VAR_29->e_event != VAR_10) {
  *VAR_26 = *VAR_29;
  FUNC_7(1);
  return (0);
 }
 if (VAR_35 || FUNC_1(&VAR_29->e_ch, VAR_1) ||
     !FUNC_4(VAR_4 | VAR_5) ||
     ((VAR_29->e_c & ~VAR_15) == 0 &&
     !FUNC_8(VAR_31->seqb, VAR_29->e_c)))
  goto nomap;


 VAR_32 = FUNC_10(VAR_25, ((void*)0), VAR_29, ((void*)0), VAR_31->i_cnt,
     FUNC_4(VAR_4) ? VAR_23 : VAR_24, &VAR_34);
 if (VAR_34) {
  if (FUNC_5(VAR_25, VAR_19))
   VAR_27 = (VAR_29->e_value == VAR_13 ?
       FUNC_6(VAR_25, VAR_16) :
       FUNC_6(VAR_25, VAR_17)) * 100;
  else
   VAR_27 = 0;
  goto loop;
 }


 if (VAR_32 == ((void*)0)) {
nomap: if (!FUNC_3(VAR_29->e_c) && FUNC_4(VAR_6))
   goto not_digit;
  *VAR_26 = *VAR_29;
  FUNC_7(1);
  return (0);
 }





 if (FUNC_4(VAR_6) &&
     VAR_32->output != ((void*)0) && !FUNC_3(VAR_32->output[0])) {
not_digit: VAR_26->e_c = VAR_2;
  VAR_26->e_value = VAR_14;
  VAR_26->e_event = VAR_10;
  FUNC_0(&VAR_26->e_ch, 0);
  return (0);
 }


 VAR_33 = !FUNC_9(VAR_32->output, &VAR_31->i_event[VAR_31->i_next], VAR_32->ilen);


 FUNC_7(VAR_32->ilen);


 if (VAR_32->output == ((void*)0))
  goto retry;


 if (FUNC_5(VAR_25, VAR_18)) {







  if ((++VAR_36 == 1 || VAR_36 % 10 == 0) &&
      (VAR_31->scr_event(VAR_25, &VAR_30,
      VAR_3, 0) || VAR_30.e_event == 131)) {
   FUNC_2(VAR_25->gp, VAR_11);
   VAR_26->e_event = 131;
   return (0);
  }







  if (VAR_33) {
   if (FUNC_15(VAR_25, ((void*)0), VAR_32->output + VAR_32->ilen,
       VAR_32->olen - VAR_32->ilen, VAR_0))
    return (1);
   if (FUNC_15(VAR_25, ((void*)0),
       VAR_32->output, VAR_32->ilen, VAR_1 | VAR_0))
    return (1);
   VAR_29 = &VAR_31->i_event[VAR_31->i_next];
   goto nomap;
  }
  if (FUNC_15(VAR_25, ((void*)0), VAR_32->output, VAR_32->olen, VAR_0))
   return (1);
  goto newmap;
 }


 if (FUNC_15(VAR_25, ((void*)0), VAR_32->output, VAR_32->olen, VAR_0 | VAR_1))
  return (1);

 goto nomap;
}
