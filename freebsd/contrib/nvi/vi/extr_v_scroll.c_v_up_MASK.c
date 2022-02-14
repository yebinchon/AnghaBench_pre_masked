
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_6__ {int lno; } ;
struct TYPE_8__ {int lno; } ;
struct TYPE_7__ {int count; TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_4__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_4__*) ;

int
FUNC_2(SCR *VAR_1, VICMD *VAR_2)
{
 recno_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0) ? VAR_2->count : 1;
 if (VAR_2->m_start.lno <= VAR_3) {
  FUNC_1(VAR_1, &VAR_2->m_start);
  return (1);
 }
 VAR_2->m_stop.lno = VAR_2->m_start.lno - VAR_3;
 VAR_2->m_final = VAR_2->m_stop;
 return (0);
}
