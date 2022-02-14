
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum which { ____Placeholder_which } which ;
typedef int dir_t ;
struct TYPE_8__ {scalar_t__ lno; size_t cno; } ;
struct TYPE_7__ {TYPE_2__ m_stop; TYPE_2__ m_start; TYPE_2__ m_final; int character; } ;
typedef TYPE_1__ VICMD ;
typedef int SCR ;
typedef TYPE_2__ MARK ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ,int *,size_t*) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,size_t*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(SCR *VAR_5, VICMD *VAR_6, int VAR_7, enum which VAR_8)
{
 dir_t VAR_9;
 MARK VAR_10;
 size_t VAR_11;

 if (VAR_7 && FUNC_4(VAR_5, VAR_6->character, &VAR_6->m_stop, VAR_3))
  return (1);
 switch (VAR_8) {
 case 129:
  if (FUNC_3(VAR_5, VAR_6->m_stop.lno, VAR_1, ((void*)0), &VAR_11))
   return (1);
  if (VAR_6->m_stop.cno < VAR_11 ||
      (VAR_6->m_stop.cno == VAR_11 && VAR_11 == 0))
   break;

  if (FUNC_1(VAR_6))
   FUNC_0(VAR_6, VAR_4);
  VAR_8 = 128;

 case 128:
  VAR_6->m_stop.cno = 0;
  if (FUNC_5(VAR_5, VAR_6->m_stop.lno, &VAR_6->m_stop.cno))
   return (1);
  break;
 default:
  FUNC_2();
 }


 if (!FUNC_1(VAR_6)) {
  VAR_6->m_final = VAR_6->m_stop;
  return (0);
 }





 if (VAR_8 == 129 &&
     VAR_6->m_stop.lno == VAR_6->m_start.lno &&
     VAR_6->m_stop.cno == VAR_6->m_start.cno) {
  FUNC_6(VAR_5);
  return (1);
 }
 if (VAR_6->m_start.lno > VAR_6->m_stop.lno ||
     (VAR_6->m_start.lno == VAR_6->m_stop.lno &&
     VAR_6->m_start.cno > VAR_6->m_stop.cno)) {
  VAR_10 = VAR_6->m_start;
  VAR_6->m_start = VAR_6->m_stop;
  VAR_6->m_stop = VAR_10;
  VAR_9 = VAR_0;
 } else
  VAR_9 = VAR_2;
 VAR_6->m_final = VAR_6->m_start;





 if (VAR_8 == 128)
  return (0);
 if (VAR_6->m_start.lno < VAR_6->m_stop.lno && VAR_6->m_stop.cno == 0) {
  if (FUNC_3(VAR_5, --VAR_6->m_stop.lno, VAR_1, ((void*)0), &VAR_11))
   return (1);
  VAR_6->m_stop.cno = VAR_11 ? VAR_11 - 1 : 0;
  VAR_11 = 0;
  if (FUNC_5(VAR_5, VAR_6->m_start.lno, &VAR_11))
   return (1);
  if (VAR_6->m_start.cno <= VAR_11)
   FUNC_0(VAR_6, VAR_4);
 } else
  --VAR_6->m_stop.cno;

 return (0);
}
