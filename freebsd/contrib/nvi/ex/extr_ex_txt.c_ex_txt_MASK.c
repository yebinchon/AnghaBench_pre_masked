
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int carat_t ;
struct TYPE_31__ {int (* scr_ex_adjust ) (TYPE_2__*,int ) ;} ;
struct TYPE_32__ {int e_event; int e_value; char e_c; TYPE_3__ e_ch; } ;
struct TYPE_30__ {scalar_t__ lno; TYPE_3__* gp; } ;
struct TYPE_29__ {int lb_len; scalar_t__ len; char* lb; scalar_t__ ai; scalar_t__ lno; } ;
typedef int TEXTH ;
typedef TYPE_1__ TEXT ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;
typedef TYPE_4__ EVENT ;
typedef int ARG_CHAR_T ;


 int FUNC_0 (TYPE_2__*,char*,int,scalar_t__) ;
 int VAR_0 ;



 int VAR_1 ;






 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char) ;



 int VAR_3 ;

 int VAR_4 ;

 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,int ) ;
 int FUNC_10 (int *,TYPE_1__*,int ) ;
 int * FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int *,TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char) ;
 int FUNC_16 (char) ;
 int VAR_13 ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 TYPE_1__* FUNC_20 (TYPE_2__*,int *,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_23 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_24 (TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_25 (TYPE_2__*,TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_26 (TYPE_2__*,scalar_t__,TYPE_1__*,scalar_t__,TYPE_1__*) ;

int
FUNC_27(SCR *VAR_14, TEXTH *VAR_15, ARG_CHAR_T VAR_16, u_int32_t VAR_17)
{
 EVENT VAR_18;
 GS *VAR_19;
 TEXT VAR_20, *VAR_21, *VAR_22;
 carat_t VAR_23;
 size_t VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_25 = 0;






 if (!FUNC_7(VAR_15)) {
  VAR_22 = FUNC_8(VAR_15);
  if (FUNC_11(VAR_22, VAR_13) != ((void*)0) || VAR_22->lb_len < 32) {
   FUNC_21(VAR_15);
   goto newtp;
  }
  VAR_22->len = 0;
 } else {
newtp: if ((VAR_22 = FUNC_20(VAR_14, ((void*)0), 0, 32)) == ((void*)0))
   goto err;
  FUNC_9(VAR_15, VAR_22, VAR_13);
 }


 VAR_22->lno = VAR_14->lno + 1;
 VAR_19 = VAR_14->gp;
 if (FUNC_1(VAR_19, VAR_2))
  FUNC_3(VAR_6);
 else {
  if (FUNC_4(VAR_6)) {
   FUNC_5(VAR_12);
   if (FUNC_26(VAR_14, VAR_14->lno, ((void*)0), 0, VAR_22))
    goto err;
  }
  FUNC_23(VAR_14, VAR_22, VAR_16, VAR_17);
 }

 for (VAR_23 = 140, VAR_26 = 0;;) {
  if (FUNC_25(VAR_14, &VAR_18, 0, 0))
   goto err;


  switch (VAR_18.e_event) {
  case 138:
   break;
  case 136:
   goto err;
  case 134:
  case 133:
   continue;
  case 137:
   VAR_25 = 1;

  case 135:





   goto notlast;
  default:
   FUNC_24(VAR_14, &VAR_18);
   goto notlast;
  }







  FUNC_0(VAR_14, VAR_22->lb, VAR_22->lb_len, VAR_22->len + 1);

  switch (VAR_18.e_value) {
  case 130:
   if (!FUNC_1(&VAR_18.e_ch, VAR_0))
    goto ins_ch;

  case 129:





   if (FUNC_4(VAR_7) &&
       VAR_22->len != 0 && VAR_22->lb[VAR_22->len - 1] == '\\')
    goto ins_ch;







   if (FUNC_4(VAR_10)) {
    VAR_22->lb[VAR_22->len] = '\0';
    goto done;
   }





   if (FUNC_4(VAR_11) && VAR_22->len == VAR_22->ai + 1 &&
       VAR_22->lb[VAR_22->len - 1] == '.') {
notlast: FUNC_12(VAR_15, VAR_22, VAR_13);
    FUNC_19(VAR_22);
    goto done;
   }


   if ((VAR_21 = FUNC_20(VAR_14, ((void*)0), 0, 32)) == ((void*)0))
    goto err;
   VAR_21->lno = VAR_22->lno + 1;
   if (FUNC_4(VAR_6)) {
    if (VAR_26) {
     VAR_26 = 0;
     if (FUNC_26(VAR_14,
         VAR_5, &VAR_20, VAR_20.ai, VAR_21))
      goto err;
     FUNC_14(VAR_20.lb);
    } else
     if (FUNC_26(VAR_14,
         VAR_5, VAR_22, VAR_22->len, VAR_21))
      goto err;
    VAR_23 = 140;
   }
   FUNC_23(VAR_14, VAR_21, VAR_16, VAR_17);





   VAR_22 = VAR_21;
   FUNC_10(VAR_15, VAR_22, VAR_13);
   break;
  case 132:
   if (VAR_22->len <= VAR_22->ai && FUNC_4(VAR_6))
    VAR_23 = 141;
   goto ins_ch;
  case 128:
   if (VAR_22->len <= VAR_22->ai && FUNC_4(VAR_6))
    VAR_23 = 139;
   goto ins_ch;
  case 131:







   if (FUNC_4(VAR_9)) {
    for (VAR_24 = 0; VAR_24 < VAR_22->len; ++VAR_24)
     if (!FUNC_15(VAR_22->lb[VAR_24]))
      break;
    if (VAR_24 == VAR_22->len) {
     VAR_22->len = 1;
     VAR_22->lb[0] = VAR_18.e_c;
     VAR_22->lb[1] = '\0';





     (void)FUNC_16('\n');
     goto done;
    }
   }
   if (!FUNC_4(VAR_6) || VAR_22->len == 0)
    continue;
   switch (VAR_23) {
   case 141:
    if (VAR_22->len > VAR_22->ai + 1)
     continue;


    VAR_20.lb = ((void*)0);
    VAR_20.lb_len = 0;
    FUNC_0(VAR_14, VAR_20.lb, VAR_20.lb_len, VAR_22->ai);
    FUNC_6(VAR_20.lb, VAR_22->lb, VAR_22->ai);
    VAR_20.ai = VAR_20.len = VAR_22->ai;

    VAR_23 = 140;
    VAR_26 = 1;
    goto leftmargin;
   case 139:
    if (VAR_22->len > VAR_22->ai + 1)
     continue;

    VAR_23 = 140;
leftmargin: (void)VAR_19->scr_ex_adjust(VAR_14, VAR_1);
    VAR_22->ai = VAR_22->len = 0;
    break;
   case 140:
    if (VAR_22->len > VAR_22->ai)
     continue;

    if (FUNC_22(VAR_14, VAR_22))
     goto err;
    break;
   default:
    FUNC_13();
   }


   (void)VAR_19->scr_ex_adjust(VAR_14, VAR_1);
   FUNC_23(VAR_14, VAR_22, VAR_16, VAR_17);
   break;
  default:







ins_ch: if (FUNC_4(VAR_8) && FUNC_2(VAR_18.e_c) &&
       VAR_18.e_value != VAR_3 && VAR_18.e_value != VAR_4)
    break;

   VAR_22->lb[VAR_22->len++] = VAR_18.e_c;
   break;
  }
 }


done: return (VAR_25);

err:
alloc_err:
 return (1);
}
