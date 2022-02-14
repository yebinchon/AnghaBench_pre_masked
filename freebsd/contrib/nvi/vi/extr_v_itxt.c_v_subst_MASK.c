
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int u_int32_t ;
struct TYPE_18__ {size_t cno; int lno; } ;
struct TYPE_15__ {size_t cno; int lno; } ;
struct TYPE_16__ {int count; TYPE_5__ m_stop; TYPE_12__ m_start; int buffer; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_17__ {int showmode; } ;
typedef TYPE_2__ SCR ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,TYPE_12__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int **,size_t*,int*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,TYPE_5__*,int *,size_t,int ,int ,int,int ) ;

int
FUNC_6(SCR *VAR_7, VICMD *VAR_8)
{
 size_t VAR_9;
 u_int32_t VAR_10;
 int VAR_11;
 CHAR_T *VAR_12;

 VAR_10 = FUNC_4(VAR_7, VAR_8, 0);
 VAR_7->showmode = VAR_1;

 if (FUNC_3(VAR_7, VAR_8->m_start.lno, &VAR_12, &VAR_9, &VAR_11)) {
  if (!VAR_11)
   return (1);
  VAR_9 = 0;
  FUNC_1(VAR_2);
 } else {
  if (VAR_9 == 0)
   FUNC_1(VAR_2);
  FUNC_1(VAR_3 | VAR_4);
 }

 VAR_8->m_stop.lno = VAR_8->m_start.lno;
 VAR_8->m_stop.cno =
     VAR_8->m_start.cno + (FUNC_0(VAR_8, VAR_6) ? VAR_8->count - 1 : 0);
 if (VAR_8->m_stop.cno > VAR_9 - 1)
  VAR_8->m_stop.cno = VAR_9 - 1;

 if (VAR_12 != ((void*)0) && FUNC_2(VAR_7,
     FUNC_0(VAR_8, VAR_5) ? &VAR_8->buffer : ((void*)0),
     &VAR_8->m_start, &VAR_8->m_stop, 0))
  return (1);

 return (FUNC_5(VAR_7, VAR_8, &VAR_8->m_stop, VAR_12, VAR_9, 0, VAR_0, 1, VAR_10));
}
