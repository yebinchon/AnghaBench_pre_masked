
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_8__ {scalar_t__ cno; int lno; } ;
struct TYPE_9__ {int count; TYPE_1__ m_stop; TYPE_1__ m_start; int rkp; TYPE_1__ m_final; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ,char) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int*) ;
 scalar_t__ FUNC_5 (int *,int,scalar_t__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *) ;

int
FUNC_8(SCR *VAR_2, VICMD *VAR_3)
{
 recno_t VAR_4, VAR_5;
 if (FUNC_3(VAR_3))
  FUNC_1(VAR_3, VAR_1);





 VAR_4 = FUNC_0(VAR_3, VAR_0) ? VAR_3->count : 1;
 if (VAR_4 != 1) {
  --VAR_3->count;
  return (FUNC_6(VAR_2, VAR_3));
 }







 VAR_3->m_stop.cno = 0;
 if (FUNC_5(VAR_2, VAR_3->m_stop.lno, &VAR_3->m_stop.cno))
  return (1);







 if (VAR_3->m_stop.lno == 1 &&
     VAR_3->m_stop.cno == 0 && FUNC_2(VAR_3->rkp, 'd')) {
  if (FUNC_4(VAR_2, &VAR_5))
   return (1);
  if (VAR_5 == 0) {
   FUNC_7(VAR_2);
   return (1);
  }
 }





 VAR_3->m_final =
     FUNC_3(VAR_3) && FUNC_2(VAR_3->rkp, 'y') ? VAR_3->m_start : VAR_3->m_stop;
 return (0);
}
