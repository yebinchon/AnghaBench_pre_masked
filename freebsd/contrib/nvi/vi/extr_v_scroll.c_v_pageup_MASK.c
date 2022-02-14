
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_9__ {int count; int m_stop; int m_final; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_10__ {int t_maxrows; } ;
typedef TYPE_2__ SCR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int,int ) ;

int
FUNC_5(SCR *VAR_3, VICMD *VAR_4)
{
 recno_t VAR_5;
 VAR_5 = (FUNC_0(VAR_4, VAR_2) ? VAR_4->count : 1) * (FUNC_1(VAR_3) ?
     FUNC_2(VAR_3->t_maxrows, FUNC_3(VAR_3, VAR_1)) : FUNC_3(VAR_3, VAR_1));
 VAR_5 = VAR_5 <= 2 ? 1 : VAR_5 - 2;
 if (FUNC_4(VAR_3, &VAR_4->m_stop, VAR_5, VAR_0))
  return (1);
 VAR_4->m_final = VAR_4->m_stop;
 return (0);
}
