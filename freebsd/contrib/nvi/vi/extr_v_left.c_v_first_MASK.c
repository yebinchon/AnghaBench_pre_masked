
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cno; int lno; } ;
struct TYPE_6__ {TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(SCR *VAR_0, VICMD *VAR_1)
{
 VAR_1->m_stop.cno = 0;
 if (FUNC_1(VAR_0, VAR_1->m_stop.lno, &VAR_1->m_stop.cno))
  return (1);







 if (FUNC_0(VAR_1) && VAR_1->m_start.cno == VAR_1->m_stop.cno) {
  FUNC_2(VAR_0);
  return (1);
 }
 if (VAR_1->m_start.cno < VAR_1->m_stop.cno)
  if (FUNC_0(VAR_1)) {
   --VAR_1->m_stop.cno;
   VAR_1->m_final = VAR_1->m_start;
  } else
   VAR_1->m_final = VAR_1->m_stop;
 else {
  if (FUNC_0(VAR_1))
   --VAR_1->m_start.cno;
  VAR_1->m_final = VAR_1->m_stop;
 }
 return (0);
}
