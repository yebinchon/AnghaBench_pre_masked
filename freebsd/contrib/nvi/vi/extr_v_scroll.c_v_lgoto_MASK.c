
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_6__ {int lno; } ;
struct TYPE_7__ {int count; TYPE_1__ m_stop; int m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;

int
FUNC_5(SCR *VAR_1, VICMD *VAR_2)
{
 recno_t VAR_3;

 if (FUNC_0(VAR_2, VAR_0)) {
  if (!FUNC_1(VAR_1, VAR_2->count)) {




   if (VAR_2->count == 1) {
    if (FUNC_2(VAR_1, &VAR_3))
     return (1);
    if (VAR_3 == 0)
     return (0);
   }
   FUNC_4(VAR_1, &VAR_2->m_start);
   return (1);
  }
  VAR_2->m_stop.lno = VAR_2->count;
 } else {
  if (FUNC_2(VAR_1, &VAR_3))
   return (1);
  VAR_2->m_stop.lno = VAR_3 ? VAR_3 : 1;
 }
 FUNC_3(VAR_2);
 return (0);
}
