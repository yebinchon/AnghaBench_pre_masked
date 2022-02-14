
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dir_t ;
struct TYPE_6__ {scalar_t__ lno; size_t cno; } ;
struct TYPE_5__ {TYPE_2__ m_stop; TYPE_2__ m_start; TYPE_2__ m_final; } ;
typedef TYPE_1__ VICMD ;
typedef int SCR ;
typedef TYPE_2__ MARK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ,int *,size_t*) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,size_t*) ;

int
FUNC_4(SCR *VAR_5, VICMD *VAR_6, int VAR_7)
{
 dir_t VAR_8;
 MARK VAR_9;
 size_t VAR_10;
 if (VAR_6->m_start.lno == VAR_6->m_stop.lno &&
     VAR_6->m_start.cno == VAR_6->m_stop.cno) {
  FUNC_2(VAR_5, VAR_3, "190|Search wrapped to original position");
  return (1);
 }






 if (VAR_7)
  FUNC_0(VAR_6, VAR_4);
 if (VAR_6->m_start.lno > VAR_6->m_stop.lno ||
     (VAR_6->m_start.lno == VAR_6->m_stop.lno &&
     VAR_6->m_start.cno > VAR_6->m_stop.cno)) {
  VAR_9 = VAR_6->m_start;
  VAR_6->m_start = VAR_6->m_stop;
  VAR_6->m_stop = VAR_9;
  VAR_8 = VAR_0;
 } else
  VAR_8 = VAR_2;
 VAR_6->m_final = VAR_6->m_start;





 if (VAR_7)
  return (0);
 if (VAR_6->m_start.lno < VAR_6->m_stop.lno && VAR_6->m_stop.cno == 0) {
  if (FUNC_1(VAR_5, --VAR_6->m_stop.lno, VAR_1, ((void*)0), &VAR_10))
   return (1);
  VAR_6->m_stop.cno = VAR_10 ? VAR_10 - 1 : 0;
  VAR_10 = 0;
  if (FUNC_3(VAR_5, VAR_6->m_start.lno, &VAR_10))
   return (1);
  if (VAR_6->m_start.cno <= VAR_10)
   FUNC_0(VAR_6, VAR_4);
 } else
  --VAR_6->m_stop.cno;

 return (0);
}
