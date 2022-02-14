
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cno; int lno; } ;
struct TYPE_7__ {int count; TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,size_t) ;

int
FUNC_5(SCR *VAR_1, VICMD *VAR_2)
{
 if (FUNC_0(VAR_2, VAR_0) && VAR_2->count > 1) {
  --VAR_2->count;
  VAR_2->m_stop.cno =
      FUNC_4(VAR_1, VAR_2->m_start.lno, (size_t)VAR_2->count);






  if (FUNC_1(VAR_2) && VAR_2->m_stop.cno == VAR_2->m_start.cno) {
   FUNC_2(VAR_1);
   return (1);
  }
 } else {






  if (FUNC_1(VAR_2) && VAR_2->m_start.cno == 0) {
   FUNC_3(VAR_1);
   return (1);
  }
  VAR_2->m_stop.cno = 0;
 }
 if (VAR_2->m_start.cno < VAR_2->m_stop.cno)
  if (FUNC_1(VAR_2)) {
   --VAR_2->m_stop.cno;
   VAR_2->m_final = VAR_2->m_start;
  } else
   VAR_2->m_final = VAR_2->m_stop;
 else {
  if (FUNC_1(VAR_2))
   --VAR_2->m_start.cno;
  VAR_2->m_final = VAR_2->m_stop;
 }
 return (0);
}
