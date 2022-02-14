
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_19__ ;


typedef int u_long ;
struct TYPE_37__ {scalar_t__ rvalue; int rlast; } ;
typedef TYPE_2__ VI_PRIVATE ;
struct TYPE_36__ {size_t cno; scalar_t__ lno; } ;
struct TYPE_35__ {size_t cno; scalar_t__ lno; } ;
struct TYPE_38__ {int count; TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_19__ m_start; } ;
typedef TYPE_3__ VICMD ;
struct TYPE_41__ {int e_event; scalar_t__ e_value; int e_c; } ;
struct TYPE_40__ {int showmode; } ;
struct TYPE_39__ {size_t ai; int len; int lb; } ;
typedef TYPE_4__ TEXT ;
typedef TYPE_5__ SCR ;
typedef TYPE_6__ EVENT ;
typedef int CHAR_T ;


 int VAR_0 ;






 int FUNC_0 (TYPE_5__*,int *,size_t) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int *,size_t,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int *,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_5__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_5__*,scalar_t__,int ,int **,size_t*) ;
 int FUNC_10 (TYPE_5__*,scalar_t__,int *,size_t) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*,int ,char*) ;
 int FUNC_13 (TYPE_4__*) ;
 TYPE_4__* FUNC_14 (TYPE_5__*,int *,size_t,size_t) ;
 int FUNC_15 (TYPE_5__*,int *,int ) ;
 int FUNC_16 (TYPE_5__*,TYPE_19__*) ;
 int FUNC_17 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_18 (TYPE_5__*,TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_19 (TYPE_5__*,scalar_t__,int *,int ,TYPE_4__*) ;
 scalar_t__ FUNC_20 (TYPE_5__*,int ) ;
 int FUNC_21 (TYPE_5__*,TYPE_6__*) ;

int
FUNC_22(SCR *VAR_12, VICMD *VAR_13)
{
 EVENT VAR_14;
 VI_PRIVATE *VAR_15;
 TEXT *VAR_16;
 size_t VAR_17, VAR_18;
 u_long VAR_19;
 int VAR_20, VAR_21;
 CHAR_T *VAR_22;
 CHAR_T *VAR_23;

 VAR_15 = FUNC_7(VAR_12);
 if (FUNC_9(VAR_12, VAR_13->m_start.lno, VAR_0, &VAR_23, &VAR_18))
  return (1);
 if (VAR_18 == 0) {
  FUNC_12(VAR_12, VAR_5, "186|No characters to replace");
  return (1);
 }
 VAR_19 = FUNC_1(VAR_13, VAR_9) ? VAR_13->count : 1;
 VAR_13->m_stop.lno = VAR_13->m_start.lno;
 VAR_13->m_stop.cno = VAR_13->m_start.cno + VAR_19 - 1;
 if (VAR_13->m_stop.cno > VAR_18 - 1) {
  FUNC_16(VAR_12, &VAR_13->m_start);
  return (1);
 }





 VAR_20 = 0;
 if (!FUNC_1(VAR_13, VAR_10)) {
  VAR_12->showmode = VAR_8;
  if (FUNC_20(VAR_12, 0))
   return (1);
next: if (FUNC_18(VAR_12, &VAR_14, 0, 0))
   return (1);

  switch (VAR_14.e_event) {
  case 133:




   if (!VAR_20) {
    if (VAR_14.e_value == VAR_4) {
     VAR_20 = 1;
     goto next;
    }
    if (VAR_14.e_value == VAR_2)
     return (0);
   }
   VAR_15->rlast = VAR_14.e_c;
   VAR_15->rvalue = VAR_14.e_value;
   break;
  case 131:
  case 132:
   FUNC_2(VAR_12, VAR_7);
   return (1);
  case 130:

   return (0);
  case 128:

   FUNC_15(VAR_12, ((void*)0), VAR_11);
   return (0);
  case 129:
   if (FUNC_21(VAR_12, &VAR_14))
    return (1);
   goto next;
  default:
   FUNC_17(VAR_12, &VAR_14);
   return (0);
  }
 }


 FUNC_3(VAR_12, VAR_22, VAR_17, VAR_18);
 FUNC_4(VAR_22, VAR_23, VAR_18);
 VAR_23 = VAR_22;







 if ((!VAR_20 && VAR_15->rvalue == VAR_1) || VAR_15->rvalue == VAR_3) {

  VAR_13->m_stop.lno = VAR_13->m_start.lno + 1;
  VAR_13->m_stop.cno = 0;


  if (FUNC_10(VAR_12, VAR_13->m_start.lno, VAR_23, VAR_13->m_start.cno))
   goto err_ret;
  VAR_23 += VAR_13->m_start.cno + VAR_19;
  VAR_18 -= VAR_13->m_start.cno + VAR_19;
  if (VAR_18 != 0 && FUNC_5(VAR_12, VAR_6))
   for (; VAR_18 && FUNC_11(*VAR_23); --VAR_18, ++VAR_23);

  if ((VAR_16 = FUNC_14(VAR_12, VAR_23, VAR_18, VAR_18)) == ((void*)0))
   goto err_ret;

  if (VAR_18 != 0 && FUNC_5(VAR_12, VAR_6)) {
   if (FUNC_19(VAR_12, VAR_13->m_start.lno, ((void*)0), 0, VAR_16))
    goto err_ret;
   VAR_13->m_stop.cno = VAR_16->ai ? VAR_16->ai - 1 : 0;
  } else
   VAR_13->m_stop.cno = 0;

  VAR_13->m_stop.cno = VAR_16->ai ? VAR_16->ai - 1 : 0;
  if (FUNC_8(VAR_12, 1, VAR_13->m_start.lno, VAR_16->lb, VAR_16->len))
err_ret: VAR_21 = 1;
  else {
   FUNC_13(VAR_16);
   VAR_21 = 0;
  }
 } else {
  FUNC_6(VAR_22 + VAR_13->m_start.cno, VAR_15->rlast, VAR_19);
  VAR_21 = FUNC_10(VAR_12, VAR_13->m_start.lno, VAR_22, VAR_18);
 }
 FUNC_0(VAR_12, VAR_22, VAR_17);

 VAR_13->m_final = VAR_13->m_stop;
 return (VAR_21);
}
