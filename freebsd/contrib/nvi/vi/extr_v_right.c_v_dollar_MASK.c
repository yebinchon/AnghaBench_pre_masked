
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t cno; int lno; } ;
struct TYPE_9__ {int count; TYPE_1__ m_stop; TYPE_1__ m_start; TYPE_1__ m_final; int rkp; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,char) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int ,int *,size_t*,int*) ;
 scalar_t__ FUNC_5 (int *,int ,size_t*) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,int *) ;

int
FUNC_8(SCR *VAR_2, VICMD *VAR_3)
{
 size_t VAR_4;
 int VAR_5;





 if ((FUNC_0(VAR_3, VAR_0) ? VAR_3->count : 1) != 1) {






  VAR_3->m_stop.cno = 0;
  if (FUNC_5(VAR_2, VAR_3->m_start.lno, &VAR_3->m_stop.cno))
   return (1);
  if (FUNC_3(VAR_3) && VAR_3->m_start.cno <= VAR_3->m_stop.cno)
   FUNC_1(VAR_3, VAR_1);

  --VAR_3->count;
  if (FUNC_6(VAR_2, VAR_3))
   return (1);
 }
 if (FUNC_4(VAR_2, VAR_3->m_stop.lno, ((void*)0), &VAR_4, &VAR_5)) {
  if (!VAR_5)
   return (1);
  VAR_4 = 0;
 }

 if (VAR_4 == 0) {
  if (FUNC_3(VAR_3) && !FUNC_2(VAR_3->rkp, 'c')) {
   FUNC_7(VAR_2, ((void*)0));
   return (1);
  }
  return (0);
 }





 VAR_3->m_stop.cno = VAR_4 ? VAR_4 - 1 : 0;
 VAR_3->m_final = FUNC_3(VAR_3) ? VAR_3->m_start : VAR_3->m_stop;
 return (0);
}
