
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_long ;
typedef enum which { ____Placeholder_which } which ;
struct TYPE_13__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_11__ {int count; TYPE_3__ m_stop; TYPE_3__ m_start; TYPE_3__ m_final; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_12__ {scalar_t__ cs_lno; scalar_t__ cs_cno; scalar_t__ cs_flags; int cs_ch; } ;
typedef TYPE_2__ VCS ;
typedef int SCR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_9(SCR *VAR_3, VICMD *VAR_4, enum which VAR_5)
{
 enum { INWORD, NOTWORD } VAR_6;
 VCS VAR_7;
 u_long VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_2) ? VAR_4->count : 1;
 VAR_7.cs_lno = VAR_4->m_start.lno;
 VAR_7.cs_cno = VAR_4->m_start.cno;
 if (FUNC_4(VAR_3, &VAR_7))
  return (1);







 if (VAR_7.cs_flags == 0 && !FUNC_1(VAR_7.cs_ch)) {
  if (FUNC_5(VAR_3, &VAR_7))
   return (1);
  if (VAR_7.cs_flags == 0 && !FUNC_1(VAR_7.cs_ch))
   goto start;
 }
 if (FUNC_3(VAR_3, &VAR_7))
  return (1);







start: if (VAR_5 == VAR_0)
  while (VAR_8--) {
   for (;;) {
    if (FUNC_5(VAR_3, &VAR_7))
     return (1);
    if (VAR_7.cs_flags == VAR_1)
     goto ret;
    if (VAR_7.cs_flags != 0 || FUNC_1(VAR_7.cs_ch))
     break;
   }





   if (VAR_8 == 0) {
    if (VAR_7.cs_flags == 0 && FUNC_6(VAR_3, &VAR_7))
     return (1);
    break;
   }


   if (FUNC_3(VAR_3, &VAR_7))
    return (1);
   if (VAR_7.cs_flags == VAR_1)
    goto ret;
  }
 else
  while (VAR_8--) {
   VAR_6 = VAR_7.cs_flags == 0 &&
       FUNC_7(VAR_7.cs_ch) ? INWORD : NOTWORD;
   for (;;) {
    if (FUNC_5(VAR_3, &VAR_7))
     return (1);
    if (VAR_7.cs_flags == VAR_1)
     goto ret;
    if (VAR_7.cs_flags != 0 || FUNC_1(VAR_7.cs_ch))
     break;
    if (VAR_6 == INWORD) {
     if (!FUNC_7(VAR_7.cs_ch))
      break;
    } else
     if (FUNC_7(VAR_7.cs_ch))
      break;
   }

   if (VAR_8 == 0) {
    if (VAR_7.cs_flags == 0 && FUNC_6(VAR_3, &VAR_7))
     return (1);
    break;
   }


   if (VAR_7.cs_flags != 0 || FUNC_1(VAR_7.cs_ch))
    if (FUNC_3(VAR_3, &VAR_7))
     return (1);
   if (VAR_7.cs_flags == VAR_1)
    goto ret;
  }







ret: if (!FUNC_2(VAR_4) &&
     VAR_7.cs_lno == VAR_4->m_start.lno && VAR_7.cs_cno == VAR_4->m_start.cno) {
  FUNC_8(VAR_3, &VAR_4->m_start);
  return (1);
 }


 VAR_4->m_stop.lno = VAR_7.cs_lno;
 VAR_4->m_stop.cno = VAR_7.cs_cno;





 VAR_4->m_final = FUNC_2(VAR_4) ? VAR_4->m_start : VAR_4->m_stop;
 return (0);
}
