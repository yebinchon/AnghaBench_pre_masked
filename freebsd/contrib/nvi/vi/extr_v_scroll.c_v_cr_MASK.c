
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lno; } ;
struct TYPE_6__ {TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(SCR *VAR_2, VICMD *VAR_3)
{

 if (FUNC_0(VAR_2, VAR_0))
  return (FUNC_3(VAR_2));


 if (FUNC_0(VAR_2, VAR_1))
  return (FUNC_1(VAR_2, VAR_3->m_start.lno));


 return (FUNC_2(VAR_2, VAR_3));
}
