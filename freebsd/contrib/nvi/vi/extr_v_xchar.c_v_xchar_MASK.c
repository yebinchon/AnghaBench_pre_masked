
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {size_t cno; } ;
struct TYPE_11__ {int cno; int lno; } ;
struct TYPE_9__ {int cno; } ;
struct TYPE_10__ {int count; TYPE_5__ m_stop; TYPE_4__ m_start; int buffer; TYPE_1__ m_final; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_4__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *,size_t*,int*) ;
 int FUNC_3 (int *,TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_4 (int *,int ,char*) ;

int
FUNC_5(SCR *VAR_3, VICMD *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_3, VAR_4->m_start.lno, ((void*)0), &VAR_5, &VAR_6)) {
  if (VAR_6)
   goto nodel;
  return (1);
 }
 if (VAR_5 == 0) {
nodel: FUNC_4(VAR_3, VAR_0, "206|No characters to delete");
  return (1);
 }
 if (FUNC_0(VAR_4, VAR_2))
  VAR_4->m_stop.cno += VAR_4->count - 1;
 if (VAR_4->m_stop.cno >= VAR_5 - 1) {
  VAR_4->m_stop.cno = VAR_5 - 1;
  VAR_4->m_final.cno = VAR_4->m_start.cno ? VAR_4->m_start.cno - 1 : 0;
 } else
  VAR_4->m_final.cno = VAR_4->m_start.cno;

 if (FUNC_1(VAR_3,
     FUNC_0(VAR_4, VAR_1) ? &VAR_4->buffer : ((void*)0),
     &VAR_4->m_start, &VAR_4->m_stop, 0))
  return (1);
 return (FUNC_3(VAR_3, &VAR_4->m_start, &VAR_4->m_stop, 0));
}
