
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cno; } ;
struct TYPE_7__ {TYPE_1__ m_stop; TYPE_1__ m_final; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_8__ {int csearchdir; } ;
typedef int SCR ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;

int
FUNC_2(SCR *VAR_1, VICMD *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2))
  return (1);






 ++VAR_2->m_stop.cno;
 VAR_2->m_final = VAR_2->m_stop;

 FUNC_0(VAR_1)->csearchdir = VAR_0;
 return (0);
}
