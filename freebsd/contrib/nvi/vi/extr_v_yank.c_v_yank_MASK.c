
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {size_t cno; int lno; } ;
struct TYPE_16__ {scalar_t__ lno; } ;
struct TYPE_17__ {scalar_t__ lno; } ;
struct TYPE_14__ {TYPE_1__ m_final; TYPE_8__ m_start; TYPE_9__ m_stop; int buffer; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_15__ {int * rptlines; } ;
typedef TYPE_3__ SCR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,TYPE_8__*,TYPE_9__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,int ,int *,size_t*) ;

int
FUNC_5(SCR *VAR_7, VICMD *VAR_8)
{
 size_t VAR_9;

 if (FUNC_3(VAR_7,
     FUNC_1(VAR_8, VAR_3) ? &VAR_8->buffer : ((void*)0), &VAR_8->m_start,
     &VAR_8->m_stop, FUNC_1(VAR_8, VAR_4) ? VAR_0 : 0))
  return (1);
 VAR_7->rptlines[VAR_2] += (VAR_8->m_stop.lno - VAR_8->m_start.lno) + 1;






 if (FUNC_4(VAR_7, VAR_8->m_final.lno, VAR_1, ((void*)0), &VAR_9))
  return (1);
 if (!FUNC_1(VAR_8, VAR_4)) {
  FUNC_0(VAR_8, VAR_5);
  FUNC_2(VAR_8, VAR_6);


  if (VAR_8->m_final.cno >= VAR_9)
   VAR_8->m_final.cno = VAR_9 ? VAR_9 - 1 : 0;
 }
 return (0);
}
