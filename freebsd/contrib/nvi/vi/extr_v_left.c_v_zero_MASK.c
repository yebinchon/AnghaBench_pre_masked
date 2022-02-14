
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cno; } ;
struct TYPE_6__ {scalar_t__ cno; } ;
struct TYPE_8__ {TYPE_2__ m_stop; TYPE_2__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_3__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

int
FUNC_2(SCR *VAR_0, VICMD *VAR_1)
{





 if (FUNC_0(VAR_1) && VAR_1->m_start.cno == 0) {
  FUNC_1(VAR_0);
  return (1);
 }






 VAR_1->m_stop.cno = 0;
 if (FUNC_0(VAR_1))
  --VAR_1->m_start.cno;
 VAR_1->m_final = VAR_1->m_stop;
 return (0);
}
