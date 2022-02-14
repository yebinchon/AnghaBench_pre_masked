
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t cno; int lno; } ;
struct TYPE_7__ {int count; TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ,int *,size_t*,int*) ;
 int FUNC_3 (int *,int *) ;

int
FUNC_4(SCR *VAR_1, VICMD *VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 if (FUNC_2(VAR_1, VAR_2->m_start.lno, ((void*)0), &VAR_3, &VAR_4)) {
  if (VAR_4)
   goto eol;
  return (1);
 }


 if (VAR_3 == 0) {
eol: FUNC_3(VAR_1, ((void*)0));
  return (1);
 }
 VAR_2->m_stop.cno = VAR_2->m_start.cno +
     (FUNC_0(VAR_2, VAR_0) ? VAR_2->count : 1);
 if (VAR_2->m_start.cno == VAR_3 - 1 && !FUNC_1(VAR_2)) {
  FUNC_3(VAR_1, ((void*)0));
  return (1);
 }
 if (VAR_2->m_stop.cno >= VAR_3) {
  VAR_2->m_stop.cno = VAR_3 - 1;
  VAR_2->m_final = FUNC_1(VAR_2) ? VAR_2->m_start : VAR_2->m_stop;
 } else if (FUNC_1(VAR_2)) {
  --VAR_2->m_stop.cno;
  VAR_2->m_final = VAR_2->m_start;
 } else
  VAR_2->m_final = VAR_2->m_stop;
 return (0);
}
