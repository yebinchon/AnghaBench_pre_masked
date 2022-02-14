
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_long ;
typedef int recno_t ;
struct TYPE_15__ {int lno; size_t cno; } ;
struct TYPE_14__ {int lno; size_t cno; } ;
struct TYPE_16__ {int count; TYPE_2__ m_stop; TYPE_2__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_3__ VICMD ;
struct TYPE_17__ {int cs_lno; size_t cs_cno; scalar_t__ cs_flags; int cs_ch; } ;
typedef TYPE_4__ VCS ;
typedef int SCR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_8 (int *,int,int ,int *,size_t*) ;
 scalar_t__ FUNC_9 (int) ;

int
FUNC_10(SCR *VAR_6, VICMD *VAR_7)
{
 VCS VAR_8;
 recno_t VAR_9;
 size_t VAR_10, VAR_11;
 u_long VAR_12;
 int VAR_13;





 if (VAR_7->m_start.lno == 1 && VAR_7->m_start.cno == 0)
  return (0);

 VAR_8.cs_lno = VAR_7->m_start.lno;
 VAR_8.cs_cno = VAR_7->m_start.cno;
 if (FUNC_5(VAR_6, &VAR_8))
  return (1);

 VAR_12 = FUNC_0(VAR_7, VAR_4) ? VAR_7->count : 1;
 if (VAR_8.cs_flags == VAR_0) {
  if (FUNC_3(VAR_6, &VAR_8))
   return (1);
  for (;;) {
   if (FUNC_7(VAR_6, &VAR_8))
    return (1);
   if (VAR_8.cs_flags != VAR_1)
    break;
  }
 } else if (VAR_8.cs_flags == 0 && !FUNC_9(VAR_8.cs_ch))
  for (;;) {
   if (FUNC_7(VAR_6, &VAR_8))
    return (1);
   if (VAR_8.cs_flags != 0 || FUNC_9(VAR_8.cs_ch))
    break;
  }

 for (VAR_13 = 0;;) {
  if (FUNC_7(VAR_6, &VAR_8))
   return (1);
  if (VAR_8.cs_flags == VAR_2)
   break;
  if (VAR_8.cs_flags == VAR_1) {
   VAR_13 = 1;
   continue;
  }
  if (VAR_8.cs_flags == VAR_0) {
   if (--VAR_12 == 0)
    goto ret;
   if (FUNC_3(VAR_6, &VAR_8))
    return (1);
   VAR_13 = 0;
   continue;
  }
  switch (VAR_8.cs_ch) {
  case '.':
  case '?':
  case '!':
   if (!VAR_13 || --VAR_12 != 0) {
    VAR_13 = 0;
    continue;
   }

ret: VAR_9 = VAR_8.cs_lno;
   VAR_11 = VAR_8.cs_cno;





   do {
    if (FUNC_6(VAR_6, &VAR_8))
     return (1);
   } while (!VAR_8.cs_flags &&
       (VAR_8.cs_ch == ')' || VAR_8.cs_ch == ']' ||
       VAR_8.cs_ch == '"' || VAR_8.cs_ch == '\''));
   if ((VAR_8.cs_flags || FUNC_9(VAR_8.cs_ch)) &&
       FUNC_4(VAR_6, &VAR_8))
    return (1);







   if (VAR_7->m_start.lno != VAR_8.cs_lno ||
       VAR_7->m_start.cno != VAR_8.cs_cno)
    goto okret;





   for (;;) {
    if (FUNC_7(VAR_6, &VAR_8))
     return (1);
    if (VAR_8.cs_flags == VAR_1)
     continue;
    if (VAR_8.cs_flags == 0 && FUNC_9(VAR_8.cs_ch))
     continue;
    break;
   }
   if (VAR_8.cs_flags == VAR_0)
    goto okret;


   ++VAR_12;
   VAR_8.cs_lno = VAR_9;
   VAR_8.cs_cno = VAR_11;
   VAR_13 = 0;
   break;
  case '\t':
   VAR_13 = 1;
   break;
  default:
   VAR_13 =
       VAR_8.cs_flags == VAR_1 || FUNC_9(VAR_8.cs_ch) ||
       VAR_8.cs_ch == ')' || VAR_8.cs_ch == ']' ||
       VAR_8.cs_ch == '"' || VAR_8.cs_ch == '\'' ? 1 : 0;
  }
 }

okret: VAR_7->m_stop.lno = VAR_8.cs_lno;
 VAR_7->m_stop.cno = VAR_8.cs_cno;
 if (FUNC_2(VAR_7))
  if (VAR_7->m_start.cno == 0 &&
      (VAR_8.cs_flags != 0 || VAR_7->m_stop.cno == 0)) {
   if (FUNC_8(VAR_6,
       --VAR_7->m_start.lno, VAR_3, ((void*)0), &VAR_10))
    return (1);
   VAR_7->m_start.cno = VAR_10 ? VAR_10 - 1 : 0;
   FUNC_1(VAR_7, VAR_5);
  } else
   --VAR_7->m_start.cno;
 VAR_7->m_final = VAR_7->m_stop;
 return (0);
}
