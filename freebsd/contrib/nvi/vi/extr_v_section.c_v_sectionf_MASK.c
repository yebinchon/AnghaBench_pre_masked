
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_7__ {scalar_t__ cno; int lno; } ;
struct TYPE_8__ {int count; TYPE_1__ m_stop; TYPE_1__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;
typedef char CHAR_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 char* FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int,int ,char**,size_t*) ;
 scalar_t__ FUNC_5 (int *,int,scalar_t__*) ;
 int FUNC_6 (int *,int *) ;

int
FUNC_7(SCR *VAR_4, VICMD *VAR_5)
{
 recno_t VAR_6, VAR_7;
 size_t VAR_8;
 CHAR_T *VAR_9;
 char *VAR_10, *VAR_11;


 if ((VAR_10 = FUNC_3(VAR_4, VAR_1)) == ((void*)0))
  return (1);
 if (FUNC_2(VAR_5))
  if (VAR_5->m_start.cno == 0)
   FUNC_1(VAR_5, VAR_3);
  else {
   VAR_5->m_stop = VAR_5->m_start;
   VAR_5->m_stop.cno = 0;
   if (FUNC_5(VAR_4, VAR_5->m_stop.lno, &VAR_5->m_stop.cno))
    return (1);
   if (VAR_5->m_start.cno <= VAR_5->m_stop.cno)
    FUNC_1(VAR_5, VAR_3);
  }

 VAR_6 = FUNC_0(VAR_5, VAR_2) ? VAR_5->count : 1;
 for (VAR_7 = VAR_5->m_start.lno; !FUNC_4(VAR_4, ++VAR_7, 0, &VAR_9, &VAR_8);) {
  if (VAR_8 == 0)
   continue;
  if (VAR_9[0] == '{' || (FUNC_2(VAR_5) && VAR_9[0] == '}')) {
   if (!--VAR_6) {
    if (VAR_9[0] == '{')
     goto adjust1;
    goto adjust2;
   }
   continue;
  }







  if (VAR_9[0] == '\014') {
   if (!--VAR_6)
    goto adjust1;
   continue;
  }
  if (VAR_9[0] != '.' || VAR_8 < 2)
   continue;
  for (VAR_11 = VAR_10; *VAR_11 != '\0'; VAR_11 += 2 * sizeof(*VAR_11))
   if (VAR_11[0] == VAR_9[1] &&
       ((VAR_11[1] == ' ' && VAR_8 == 2) || VAR_11[1] == VAR_9[2]) &&
       !--VAR_6) {






adjust1: if (FUNC_2(VAR_5))
     goto ret1;

adjust2: VAR_5->m_stop.lno = VAR_7;
    VAR_5->m_stop.cno = 0;
    goto ret2;
   }
 }


 if (VAR_5->m_start.lno == VAR_7 - 1) {
  FUNC_6(VAR_4, ((void*)0));
  return (1);
 }

ret1: if (FUNC_4(VAR_4, --VAR_7, VAR_0, ((void*)0), &VAR_8))
  return (1);
 VAR_5->m_stop.lno = VAR_7;
 VAR_5->m_stop.cno = VAR_8 ? VAR_8 - 1 : 0;





ret2: if (FUNC_2(VAR_5)) {
  VAR_5->m_final = VAR_5->m_start;
  if (FUNC_0(VAR_5, VAR_3))
   VAR_5->m_final.cno = 0;
 } else
  VAR_5->m_final = VAR_5->m_stop;
 return (0);
}
