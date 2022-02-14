
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ count; int m_stop; } ;
typedef TYPE_1__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__,int ) ;

int
FUNC_3(SCR *VAR_2, VICMD *VAR_3)
{
 if (FUNC_2(VAR_2, &VAR_3->m_stop,
     FUNC_0(VAR_3, VAR_1) ? VAR_3->count - 1 : 0, VAR_0))
  return (1);
 FUNC_1(VAR_3);
 return (0);
}
