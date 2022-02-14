
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_11__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_12__ {int count; TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_13__ {scalar_t__ cs_lno; scalar_t__ cs_cno; scalar_t__ cs_flags; int cs_ch; } ;
typedef TYPE_3__ VCS ;
typedef int SCR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int ,int *,size_t*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;

int
FUNC_9(SCR *VAR_6, VICMD *VAR_7)
{
 enum { BLANK, NONE, PERIOD } VAR_8;
 VCS VAR_9;
 size_t VAR_10;
 u_long VAR_11;

 VAR_9.cs_lno = VAR_7->m_start.lno;
 VAR_9.cs_cno = VAR_7->m_start.cno;
 if (FUNC_4(VAR_6, &VAR_9))
  return (1);

 VAR_11 = FUNC_0(VAR_7, VAR_4) ? VAR_7->count : 1;







 if (VAR_9.cs_flags == VAR_0 || (VAR_9.cs_flags == 0 && FUNC_7(VAR_9.cs_ch))) {
  if (FUNC_3(VAR_6, &VAR_9))
   return (1);
  if (--VAR_11 == 0) {
   if (VAR_7->m_start.lno != VAR_9.cs_lno ||
       VAR_7->m_start.cno != VAR_9.cs_cno)
    goto okret;
   return (1);
  }
 }

 for (VAR_8 = NONE;;) {
  if (FUNC_5(VAR_6, &VAR_9))
   return (1);
  if (VAR_9.cs_flags == VAR_1)
   break;
  if (VAR_9.cs_flags == VAR_2) {
   if ((VAR_8 == PERIOD || VAR_8 == BLANK) && --VAR_11 == 0) {
    if (FUNC_5(VAR_6, &VAR_9))
     return (1);
    if (VAR_9.cs_flags == 0 &&
        FUNC_7(VAR_9.cs_ch) && FUNC_3(VAR_6, &VAR_9))
     return (1);
    goto okret;
   }
   VAR_8 = NONE;
   continue;
  }
  if (VAR_9.cs_flags == VAR_0) {
   if (--VAR_11 == 0)
    goto okret;
   if (FUNC_3(VAR_6, &VAR_9))
    return (1);
   if (--VAR_11 == 0)
    goto okret;
   VAR_8 = NONE;
   continue;
  }
  switch (VAR_9.cs_ch) {
  case '.':
  case '?':
  case '!':
   VAR_8 = PERIOD;
   break;
  case ')':
  case ']':
  case '"':
  case '\'':
   if (VAR_8 != PERIOD)
    VAR_8 = NONE;
   break;
  case '\t':
   if (VAR_8 == PERIOD)
    VAR_8 = BLANK;

  case ' ':
   if (VAR_8 == PERIOD) {
    VAR_8 = BLANK;
    break;
   }
   if (VAR_8 == BLANK && --VAR_11 == 0) {
    if (FUNC_3(VAR_6, &VAR_9))
     return (1);
    goto okret;
   }

  default:
   VAR_8 = NONE;
   break;
  }
 }


 if (VAR_7->m_start.lno == VAR_9.cs_lno && VAR_7->m_start.cno == VAR_9.cs_cno) {
  FUNC_8(VAR_6, ((void*)0));
  return (1);
 }

okret: VAR_7->m_stop.lno = VAR_9.cs_lno;
 VAR_7->m_stop.cno = VAR_9.cs_cno;
 if (FUNC_2(VAR_7)) {
  if (VAR_7->m_start.cno == 0 &&
      (VAR_9.cs_flags != 0 || VAR_7->m_stop.cno == 0)) {
   if (VAR_7->m_start.lno < VAR_7->m_stop.lno) {
    if (FUNC_6(VAR_6,
        --VAR_7->m_stop.lno, VAR_3, ((void*)0), &VAR_10))
     return (1);
    VAR_7->m_stop.cno = VAR_10 ? VAR_10 - 1 : 0;
   }
   FUNC_1(VAR_7, VAR_5);
  } else
   --VAR_7->m_stop.cno;
  VAR_7->m_final = VAR_7->m_start;
 } else
  VAR_7->m_final = VAR_7->m_stop;
 return (0);
}
