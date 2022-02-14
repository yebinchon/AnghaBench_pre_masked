
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_9__ {int lno; scalar_t__ cno; } ;
struct TYPE_8__ {int lno; scalar_t__ cno; } ;
struct TYPE_10__ {int count; TYPE_2__ m_stop; TYPE_2__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_3__ VICMD ;
typedef int SCR ;
typedef char CHAR_T ;


 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_0 ;
 char* FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int,int ,char**,size_t*) ;
 int FUNC_5 (int *,int *) ;

int
FUNC_6(SCR *VAR_5, VICMD *VAR_6)
{
 size_t VAR_7;
 recno_t VAR_8, VAR_9;
 CHAR_T *VAR_10;
 char *VAR_11, *VAR_12;


 if (VAR_6->m_start.lno <= 1) {
  FUNC_5(VAR_5, ((void*)0));
  return (1);
 }


 if ((VAR_11 = FUNC_3(VAR_5, VAR_0)) == ((void*)0))
  return (1);

 VAR_8 = FUNC_1(VAR_6, VAR_1) ? VAR_6->count : 1;
 for (VAR_9 = VAR_6->m_start.lno; !FUNC_4(VAR_5, --VAR_9, 0, &VAR_10, &VAR_7);) {
  if (VAR_7 == 0)
   continue;
  if (VAR_10[0] == '{') {
   if (!--VAR_8)
    goto adjust1;
   continue;
  }







  if (VAR_10[0] == '\014') {
   if (!--VAR_8)
    goto adjust1;
   continue;
  }
  if (VAR_10[0] != '.' || VAR_7 < 2)
   continue;
  for (VAR_12 = VAR_11; *VAR_12 != '\0'; VAR_12 += 2 * sizeof(*VAR_12))
   if (VAR_12[0] == VAR_10[1] &&
       ((VAR_12[1] == ' ' && VAR_7 == 2) || VAR_12[1] == VAR_10[2]) &&
       !--VAR_8) {
adjust1: VAR_6->m_stop.lno = VAR_9;
    VAR_6->m_stop.cno = 0;
    goto ret1;
   }
 }





 VAR_6->m_stop.lno = 1;
 VAR_6->m_stop.cno = 0;
ret1: if (VAR_6->m_start.cno == 0) {
  FUNC_0(VAR_6, VAR_3);
  FUNC_2(VAR_6, VAR_4);

  --VAR_6->m_start.lno;
  FUNC_2(VAR_6, VAR_2);
 } else
  --VAR_6->m_start.cno;

 VAR_6->m_final = VAR_6->m_stop;
 return (0);
}
