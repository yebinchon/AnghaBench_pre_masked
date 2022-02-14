
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct TYPE_23__ {int lno; size_t cno; } ;
struct TYPE_22__ {int lno; size_t cno; } ;
struct TYPE_24__ {int count; scalar_t__ key; int flags; struct TYPE_24__* kp; TYPE_2__ m_final; TYPE_1__ m_stop; TYPE_1__ m_start; struct TYPE_24__* rkp; scalar_t__ (* func ) (TYPE_4__*,TYPE_3__*) ;} ;
typedef TYPE_3__ VICMD ;
struct TYPE_25__ {int lno; size_t cno; } ;
typedef TYPE_4__ SCR ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (TYPE_4__*,int) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int,int ,int *,size_t*) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__ VAR_12 ;
 scalar_t__ FUNC_10 (TYPE_4__*,int *,TYPE_3__*,TYPE_3__*,int*,int*) ;
 int FUNC_11 (TYPE_4__*,int *,int ) ;
 TYPE_3__* VAR_13 ;

__attribute__((used)) static int
FUNC_12(
 SCR *VAR_14,
 VICMD *VAR_15,
 VICMD *VAR_16,
 int *VAR_17)
{
 VICMD VAR_18;
 size_t VAR_19;
 u_long VAR_20;
 u_int VAR_21;
 int VAR_22, VAR_23;






 if (FUNC_1(VAR_16, VAR_3)) {
  VAR_18 = *VAR_15;
  FUNC_2(&VAR_18, VAR_3);
  FUNC_0(&VAR_18, VAR_5);
 } else {
  FUNC_8(&VAR_18, 0, sizeof(VICMD));
  if (FUNC_10(VAR_14, ((void*)0), &VAR_18, VAR_16, &VAR_23, VAR_17) != VAR_0)
   return (1);
 }







 VAR_20 = VAR_18.count = FUNC_1(&VAR_18, VAR_2) ? VAR_18.count : 1;
 if (FUNC_1(VAR_16, VAR_2)) {
  VAR_18.count *= VAR_16->count;
  FUNC_2(&VAR_18, VAR_2);






  FUNC_0(VAR_16, VAR_2);
  FUNC_2(VAR_16, VAR_1);
 }







 if (VAR_16->key == VAR_18.key) {
  FUNC_2(VAR_16, VAR_6 | VAR_7);


  VAR_16->m_start.lno = VAR_14->lno;
  VAR_16->m_start.cno = 0;
  VAR_16->m_stop.lno = VAR_14->lno + VAR_18.count - 1;
  if (FUNC_7(VAR_14, VAR_16->m_stop.lno, 0, ((void*)0), &VAR_19)) {
   if (VAR_16->m_stop.lno != 1 ||
      (VAR_16->key != 'c' && VAR_16->key != '!')) {
    FUNC_11(VAR_14, ((void*)0), VAR_4);
    return (1);
   }
   VAR_16->m_stop.cno = 0;
  } else
   VAR_16->m_stop.cno = VAR_19 ? VAR_19 - 1 : 0;
 } else {





  VAR_18.rkp = VAR_16->kp;






  if (VAR_16->kp == &VAR_12) {
   VAR_22 = 1;
   VAR_16->kp = &VAR_13['y'];
  } else
   VAR_22 = 0;
  VAR_21 = FUNC_1(VAR_16, VAR_9);
  if (FUNC_4(VAR_10)) {
   FUNC_5(VAR_8);
   FUNC_3(VAR_10);
  }
  FUNC_0(VAR_16, VAR_9);
  FUNC_2(&VAR_18, VAR_18.kp->flags & ~VAR_9);







  VAR_18.m_final.lno =
      VAR_18.m_stop.lno = VAR_18.m_start.lno = VAR_14->lno;
  VAR_18.m_final.cno =
      VAR_18.m_stop.cno = VAR_18.m_start.cno = VAR_14->cno;


  if ((VAR_18.kp->func)(VAR_14, &VAR_18))
   return (1);







  if (!FUNC_6(VAR_14, VAR_16->m_stop.lno)) {
   if (VAR_16->m_stop.lno != 1 ||
      (VAR_16->key != 'c' && VAR_16->key != '!')) {
    FUNC_11(VAR_14, ((void*)0), VAR_4);
    return (1);
   }
   VAR_16->m_stop.cno = 0;
  }





  if (VAR_22)
   VAR_16->kp = &VAR_12;
  FUNC_2(VAR_16, FUNC_1(&VAR_18, VAR_5 | VAR_9));





  if (!FUNC_1(VAR_16, VAR_9))
   FUNC_2(VAR_16, VAR_21);






  VAR_16->rkp = VAR_18.kp;







  if (VAR_18.m_start.lno > VAR_18.m_stop.lno ||
      (VAR_18.m_start.lno == VAR_18.m_stop.lno &&
      VAR_18.m_start.cno > VAR_18.m_stop.cno)) {
   VAR_16->m_start = VAR_18.m_stop;
   VAR_16->m_stop = VAR_18.m_start;
  } else {
   VAR_16->m_start = VAR_18.m_start;
   VAR_16->m_stop = VAR_18.m_stop;
  }
  VAR_16->m_final = VAR_18.m_final;
 }






 if (FUNC_1(VAR_16->kp, VAR_11)) {
  *VAR_15 = VAR_18;
  VAR_15->count = VAR_20;
 }
 return (0);
}
