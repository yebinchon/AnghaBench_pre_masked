
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_7__ {scalar_t__ lno; } ;
struct TYPE_6__ {int count; TYPE_2__ m_stop; TYPE_2__ m_start; TYPE_2__ m_final; } ;
typedef TYPE_1__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*) ;

int
FUNC_4(SCR *VAR_1, VICMD *VAR_2)
{
 recno_t VAR_3;

 VAR_3 = VAR_2->m_start.lno + (FUNC_0(VAR_2, VAR_0) ? VAR_2->count : 1);
 if (!FUNC_2(VAR_1, VAR_3)) {
  FUNC_3(VAR_1, &VAR_2->m_start);
  return (1);
 }
 VAR_2->m_stop.lno = VAR_3;
 VAR_2->m_final = FUNC_1(VAR_2) ? VAR_2->m_start : VAR_2->m_stop;
 return (0);
}
