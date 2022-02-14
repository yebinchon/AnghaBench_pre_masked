
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_6__ {scalar_t__ lno; size_t cno; } ;
struct TYPE_7__ {scalar_t__ lno; int cno; } ;
struct TYPE_8__ {TYPE_1__ m_stop; TYPE_2__ m_start; } ;
typedef TYPE_3__ VICMD ;
typedef int SCR ;
typedef int CHAR_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ,int **,size_t*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int *,size_t,int ,size_t) ;

int
FUNC_3(SCR *VAR_2, VICMD *VAR_3)
{
 CHAR_T *VAR_4;
 size_t VAR_5;
 recno_t VAR_6;

 for (VAR_6 = VAR_3->m_start.lno;;) {
  if (FUNC_1(VAR_2, VAR_6, VAR_0, &VAR_4, &VAR_5))
   return (1);
  if (VAR_5 != 0 && FUNC_2(VAR_2, VAR_6, VAR_4, VAR_5,
      VAR_6 == VAR_3->m_start.lno ? VAR_3->m_start.cno : 0,
      !FUNC_0(VAR_3, VAR_1) &&
      VAR_6 == VAR_3->m_stop.lno ? VAR_3->m_stop.cno : VAR_5))
   return (1);

  if (++VAR_6 > VAR_3->m_stop.lno)
   break;
 }
 return (0);
}
