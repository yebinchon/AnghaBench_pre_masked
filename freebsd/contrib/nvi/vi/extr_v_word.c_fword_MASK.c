
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
struct TYPE_11__ {int count; TYPE_3__ m_stop; TYPE_3__ m_start; TYPE_3__ m_final; int rkp; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_12__ {scalar_t__ cs_lno; scalar_t__ cs_cno; scalar_t__ cs_flags; int cs_ch; } ;
typedef TYPE_2__ VCS ;
typedef int SCR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_10(SCR *VAR_4, VICMD *VAR_5, enum which VAR_6)
{
 enum { INWORD, NOTWORD } VAR_7;
 VCS VAR_8;
 u_long VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_3) ? VAR_5->count : 1;
 VAR_8.cs_lno = VAR_5->m_start.lno;
 VAR_8.cs_cno = VAR_5->m_start.cno;
 if (FUNC_6(VAR_4, &VAR_8))
  return (1);
 if (VAR_8.cs_flags == VAR_1 || (VAR_8.cs_flags == 0 && FUNC_1(VAR_8.cs_ch))) {
  if (FUNC_3(VAR_5) && VAR_8.cs_flags != VAR_1 && VAR_9 == 1) {
   if (FUNC_2(VAR_5->rkp, 'c'))
    return (0);
   if (FUNC_2(VAR_5->rkp, 'd') || FUNC_2(VAR_5->rkp, 'y')) {
    if (FUNC_5(VAR_4, &VAR_8))
     return (1);
    goto ret;
   }
  }
  if (FUNC_4(VAR_4, &VAR_8))
   return (1);
  --VAR_9;
 }







 if (VAR_6 == VAR_0)
  while (VAR_9--) {
   for (;;) {
    if (FUNC_7(VAR_4, &VAR_8))
     return (1);
    if (VAR_8.cs_flags == VAR_2)
     goto ret;
    if (VAR_8.cs_flags != 0 || FUNC_1(VAR_8.cs_ch))
     break;
   }






   if (VAR_9 == 0 && FUNC_3(VAR_5)) {
    if ((FUNC_2(VAR_5->rkp, 'd') ||
        FUNC_2(VAR_5->rkp, 'y')) &&
        FUNC_5(VAR_4, &VAR_8))
     return (1);
    break;
   }


   if (FUNC_4(VAR_4, &VAR_8))
    return (1);
   if (VAR_8.cs_flags == VAR_2)
    goto ret;
  }
 else
  while (VAR_9--) {
   VAR_7 = VAR_8.cs_flags == 0 &&
       FUNC_8(VAR_8.cs_ch) ? INWORD : NOTWORD;
   for (;;) {
    if (FUNC_7(VAR_4, &VAR_8))
     return (1);
    if (VAR_8.cs_flags == VAR_2)
     goto ret;
    if (VAR_8.cs_flags != 0 || FUNC_1(VAR_8.cs_ch))
     break;
    if (VAR_7 == INWORD) {
     if (!FUNC_8(VAR_8.cs_ch))
      break;
    } else
     if (FUNC_8(VAR_8.cs_ch))
      break;
   }

   if (VAR_9 == 0 && FUNC_3(VAR_5)) {
    if ((FUNC_2(VAR_5->rkp, 'd') ||
        FUNC_2(VAR_5->rkp, 'y')) &&
        FUNC_5(VAR_4, &VAR_8))
     return (1);
    break;
   }


   if (VAR_8.cs_flags != 0 || FUNC_1(VAR_8.cs_ch))
    if (FUNC_4(VAR_4, &VAR_8))
     return (1);
   if (VAR_8.cs_flags == VAR_2)
    goto ret;
  }







ret: if (!FUNC_3(VAR_5) &&
     VAR_8.cs_lno == VAR_5->m_start.lno && VAR_8.cs_cno == VAR_5->m_start.cno) {
  FUNC_9(VAR_4, &VAR_5->m_start);
  return (1);
 }


 VAR_5->m_stop.lno = VAR_8.cs_lno;
 VAR_5->m_stop.cno = VAR_8.cs_cno;
 if (FUNC_3(VAR_5) && VAR_8.cs_flags == 0)
  --VAR_5->m_stop.cno;





 VAR_5->m_final = FUNC_3(VAR_5) ? VAR_5->m_start : VAR_5->m_stop;
 return (0);
}
