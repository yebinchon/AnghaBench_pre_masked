
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_5__ {int count; int m_final; int m_start; int buffer; } ;
typedef TYPE_1__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int *,int) ;

int
FUNC_4(SCR *VAR_3, VICMD *VAR_4)
{
 u_long VAR_5;

 if (FUNC_0(VAR_4, VAR_2))
  FUNC_2(VAR_3, VAR_4);






 for (VAR_5 = FUNC_0(VAR_4, VAR_1) ? VAR_4->count : 1; VAR_5--;) {
  if (FUNC_3(VAR_3, ((void*)0),
      FUNC_0(VAR_4, VAR_0) ? &VAR_4->buffer : ((void*)0),
      &VAR_4->m_start, &VAR_4->m_final, 1))
   return (1);
  VAR_4->m_start = VAR_4->m_final;
  if (FUNC_1(VAR_3))
   return (1);
 }
 return (0);
}
