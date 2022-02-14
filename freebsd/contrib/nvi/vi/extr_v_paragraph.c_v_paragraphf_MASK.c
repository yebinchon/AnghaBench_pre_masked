
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_8__ {size_t cno; int lno; } ;
struct TYPE_9__ {int count; TYPE_1__ m_stop; TYPE_1__ m_start; TYPE_1__ m_final; int rkp; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,char) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int,int **,size_t*,int*) ;
 scalar_t__ FUNC_7 (int *,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_8 (int *,int,size_t*) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,size_t) ;

int
FUNC_11(SCR *VAR_5, VICMD *VAR_6)
{
 enum { P_INTEXT, P_INBLANK } VAR_7;
 size_t VAR_8, VAR_9;
 recno_t VAR_10, VAR_11, VAR_12;
 int VAR_13;
 CHAR_T *VAR_14;
 char *VAR_15;
 if (FUNC_4(VAR_6))
  if (VAR_6->m_start.cno == 0)
   FUNC_2(VAR_6, VAR_2);
  else {
   VAR_6->m_stop = VAR_6->m_start;
   VAR_6->m_stop.cno = 0;
   if (FUNC_8(VAR_5, VAR_6->m_stop.lno, &VAR_6->m_stop.cno))
    return (1);
   if (VAR_6->m_start.cno <= VAR_6->m_stop.cno)
    FUNC_2(VAR_6, VAR_2);
  }


 VAR_12 = VAR_6->m_start.lno;
 if (FUNC_7(VAR_5, VAR_12, 0, &VAR_14, &VAR_9))
  goto eof;





 VAR_10 = FUNC_1(VAR_6, VAR_1) ? VAR_6->count : 1;
 VAR_10 *= 2;
 if (VAR_9 == 0 || FUNC_10(VAR_14, VAR_9))
  VAR_7 = P_INBLANK;
 else {
  --VAR_10;
  VAR_7 = P_INTEXT;
 }

 for (;;) {
  VAR_11 = VAR_12;
  VAR_8 = VAR_9;
  if (FUNC_7(VAR_5, ++VAR_12, 0, &VAR_14, &VAR_9))
   goto eof;
  switch (VAR_7) {
  case P_INTEXT:
   VAR_0;
   break;
  case P_INBLANK:
   if (VAR_9 == 0 || FUNC_10(VAR_14, VAR_9))
    break;
   if (--VAR_10) {
    VAR_7 = P_INTEXT;
    break;
   }
found: if (FUNC_4(VAR_6)) {
    VAR_6->m_stop.lno = VAR_11;
    VAR_6->m_stop.cno = VAR_8 ? VAR_8 - 1 : 0;
    VAR_6->m_final = VAR_6->m_start;
   } else {
    VAR_6->m_stop.lno = VAR_12;
    VAR_6->m_stop.cno = 0;
    VAR_6->m_final = VAR_6->m_stop;
   }
   return (0);
  default:
   FUNC_5();
  }
 }
eof: if (VAR_6->m_start.lno == VAR_12 || VAR_6->m_start.lno == VAR_12 - 1) {
  if (FUNC_6(VAR_5, VAR_6->m_start.lno, &VAR_14, &VAR_9, &VAR_13)) {
   if (!VAR_13)
    return (1);
   VAR_6->m_start.cno = 0;
   return (0);
  }
  if (VAR_6->m_start.cno == (VAR_9 ? VAR_9 - 1 : 0)) {
   FUNC_9(VAR_5, ((void*)0));
   return (1);
  }
 }
 if (FUNC_4(VAR_6) && FUNC_3(VAR_6->rkp, 'd')) {
  FUNC_0(VAR_6, VAR_3);
  FUNC_2(VAR_6, VAR_4);
 }
 VAR_6->m_stop.lno = VAR_12 - 1;
 VAR_6->m_stop.cno = VAR_9 ? VAR_9 - 1 : 0;
 VAR_6->m_final = FUNC_4(VAR_6) ? VAR_6->m_start : VAR_6->m_stop;
 return (0);
}
