
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_8__ {TYPE_1__ m_start; TYPE_1__ m_final; TYPE_1__ m_stop; int rkp; } ;
typedef TYPE_2__ VICMD ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ,char) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(VICMD *VAR_2)
{

 VAR_2->m_final = VAR_2->m_stop;
 if (FUNC_3(VAR_2)) {
  FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_2, VAR_1);
 } else
  return;







 if (VAR_2->m_stop.lno < VAR_2->m_start.lno ||
     (VAR_2->m_stop.lno == VAR_2->m_start.lno &&
     VAR_2->m_stop.cno < VAR_2->m_start.cno)) {
  if (FUNC_2(VAR_2->rkp, 'y') && VAR_2->m_stop.lno == VAR_2->m_start.lno)
   VAR_2->m_final = VAR_2->m_start;
 } else
  VAR_2->m_final = VAR_2->m_start;
}
