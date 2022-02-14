
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_8__ {int lno; scalar_t__ cno; } ;
struct TYPE_10__ {int lno; scalar_t__ cno; } ;
struct TYPE_9__ {int count; TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_3__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,TYPE_3__*) ;

int
FUNC_7(SCR *VAR_3, VICMD *VAR_4)
{
 enum { P_INTEXT, P_INBLANK } VAR_5;
 size_t VAR_6;
 recno_t VAR_7, VAR_8;
 CHAR_T *VAR_9;
 char *VAR_10;
 VAR_8 = VAR_4->m_start.lno;

 if (FUNC_2(VAR_4))
  if (VAR_4->m_start.cno == 0) {
   if (VAR_4->m_start.lno == 1) {
    FUNC_6(VAR_3, &VAR_4->m_start);
    return (1);
   } else
    --VAR_4->m_start.lno;
   FUNC_1(VAR_4, VAR_2);
  } else
   --VAR_4->m_start.cno;

 if (VAR_4->m_start.lno <= 1)
  goto sof;


 if (FUNC_4(VAR_3, VAR_8, 0, &VAR_9, &VAR_6))
  goto sof;





 VAR_7 = FUNC_0(VAR_4, VAR_1) ? VAR_4->count : 1;
 VAR_7 *= 2;
 if (VAR_6 == 0 || FUNC_5(VAR_9, VAR_6))
  VAR_5 = P_INBLANK;
 else {
  --VAR_7;
  VAR_5 = P_INTEXT;






  if (VAR_4->m_start.cno > 0)
   ++VAR_8;
 }

 for (;;) {
  if (FUNC_4(VAR_3, --VAR_8, 0, &VAR_9, &VAR_6))
   goto sof;
  switch (VAR_5) {
  case P_INTEXT:
   VAR_0;
   break;
  case P_INBLANK:
   if (VAR_6 != 0 && !FUNC_5(VAR_9, VAR_6)) {
    if (!--VAR_7)
     goto found;
    VAR_5 = P_INTEXT;
   }
   break;
  default:
   FUNC_3();
  }
 }


sof: VAR_8 = 1;

found: VAR_4->m_stop.lno = VAR_8;
 VAR_4->m_stop.cno = 0;





 VAR_4->m_final = VAR_4->m_stop;
 return (0);
}
