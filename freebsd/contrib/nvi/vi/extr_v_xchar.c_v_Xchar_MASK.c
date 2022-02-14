
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_12__ {int cno; } ;
struct TYPE_11__ {int cno; } ;
struct TYPE_9__ {int cno; } ;
struct TYPE_10__ {int count; TYPE_5__ m_stop; TYPE_4__ m_start; int buffer; TYPE_1__ m_final; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_2 (int *,TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(SCR *VAR_2, VICMD *VAR_3)
{
 u_long VAR_4;

 if (VAR_3->m_start.cno == 0) {
  FUNC_3(VAR_2);
  return (1);
 }

 VAR_4 = FUNC_0(VAR_3, VAR_1) ? VAR_3->count : 1;
 if (VAR_4 >= VAR_3->m_start.cno)
  VAR_3->m_start.cno = 0;
 else
  VAR_3->m_start.cno -= VAR_4;
 --VAR_3->m_stop.cno;
 VAR_3->m_final.cno = VAR_3->m_start.cno;

 if (FUNC_1(VAR_2,
     FUNC_0(VAR_3, VAR_0) ? &VAR_3->buffer : ((void*)0),
     &VAR_3->m_start, &VAR_3->m_stop, 0))
  return (1);
 return (FUNC_2(VAR_2, &VAR_3->m_start, &VAR_3->m_stop, 0));
}
