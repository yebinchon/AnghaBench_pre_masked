
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int recno_t ;
typedef int e_key_t ;
struct TYPE_23__ {int lno; int cno; } ;
struct TYPE_19__ {int cno; int lno; } ;
struct TYPE_21__ {scalar_t__ count2; int character; TYPE_2__* kp; TYPE_6__ m_final; TYPE_1__ m_start; int count; } ;
typedef TYPE_3__ VICMD ;
struct TYPE_22__ {int t_rows; } ;
struct TYPE_20__ {int usage; } ;
typedef TYPE_4__ SCR ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_6__*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,TYPE_6__*,int ,int ) ;

int
FUNC_10(SCR *VAR_11, VICMD *VAR_12)
{
 recno_t VAR_13;
 e_key_t VAR_14;





 if (FUNC_0(VAR_12, VAR_6)) {
  VAR_13 = VAR_12->count;
  if (!FUNC_3(VAR_11, VAR_13) && FUNC_4(VAR_11, &VAR_13))
   return (1);
 } else
  VAR_13 = VAR_12->m_start.lno;


 VAR_12->m_final.lno = VAR_13;
 VAR_12->m_final.cno = VAR_12->m_start.cno;
 if (FUNC_0(VAR_12, VAR_7) && VAR_12->count2 != 0) {
  if (VAR_12->count2 > FUNC_2(VAR_11, VAR_2))
   VAR_12->count2 = FUNC_2(VAR_11, VAR_2);
  if (FUNC_6(VAR_11, VAR_12->count2))
   return (1);
 }

 switch (VAR_12->character) {
 case '-':
  if (FUNC_7(VAR_11, VAR_13, VAR_3))
   return (1);
  break;
 case '.':
  if (FUNC_7(VAR_11, VAR_13, VAR_4))
   return (1);
  break;
 case '+':





  if (FUNC_0(VAR_12, VAR_6)) {
   if (FUNC_7(VAR_11, VAR_13, VAR_5))
    return (1);
   if (FUNC_8(VAR_11, &VAR_12->m_final, 0, VAR_5))
    return (1);
  } else
   if (FUNC_9(VAR_11, &VAR_12->m_final, VAR_11->t_rows, VAR_10))
    return (1);
  break;
 case '^':
  if (FUNC_0(VAR_12, VAR_6)) {
   if (FUNC_7(VAR_11, VAR_13, VAR_3))
    return (1);
   if (FUNC_8(VAR_11, &VAR_12->m_final, 0, VAR_5))
    return (1);
   if (FUNC_7(VAR_11, VAR_12->m_final.lno, VAR_3))
    return (1);
  } else
   if (FUNC_9(VAR_11, &VAR_12->m_final, VAR_11->t_rows, VAR_9))
    return (1);
  break;
 default:
  VAR_14 = FUNC_1(VAR_11, VAR_12->character);
  if (VAR_14 != VAR_0 && VAR_14 != VAR_1) {
   FUNC_5(VAR_11, VAR_12->kp->usage, VAR_8);
   return (1);
  }
  if (FUNC_7(VAR_11, VAR_13, VAR_5))
   return (1);
  break;
 }
 return (0);
}
