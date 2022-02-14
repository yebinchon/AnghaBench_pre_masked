
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int m_stop; int m_final; int count; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_8__ {int defscroll; } ;
typedef TYPE_2__ SCR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int ,int ) ;

int
FUNC_2(SCR *VAR_2, VICMD *VAR_3)
{







 if (FUNC_0(VAR_3, VAR_1))
  VAR_2->defscroll = VAR_3->count;
 if (FUNC_1(VAR_2, &VAR_3->m_stop, VAR_2->defscroll, VAR_0))
  return (1);
 VAR_3->m_final = VAR_3->m_stop;
 return (0);
}
