
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_7__ {int cno; } ;
struct TYPE_8__ {int cno; } ;
struct TYPE_9__ {int count; TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_2__ m_start; } ;
typedef TYPE_3__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

int
FUNC_3(SCR *VAR_1, VICMD *VAR_2)
{
 recno_t VAR_3;





 if (VAR_2->m_start.cno == 0) {
  FUNC_2(VAR_1);
  return (1);
 }


 VAR_3 = FUNC_0(VAR_2, VAR_0) ? VAR_2->count : 1;
 if (VAR_2->m_start.cno > VAR_3)
  VAR_2->m_stop.cno = VAR_2->m_start.cno - VAR_3;
 else
  VAR_2->m_stop.cno = 0;






 if (FUNC_1(VAR_2))
  --VAR_2->m_start.cno;
 VAR_2->m_final = VAR_2->m_stop;
 return (0);
}
