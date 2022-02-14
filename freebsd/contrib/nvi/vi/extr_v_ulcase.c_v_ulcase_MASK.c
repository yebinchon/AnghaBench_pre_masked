
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_long ;
typedef int recno_t ;
struct TYPE_7__ {size_t cno; int lno; } ;
struct TYPE_6__ {int lno; size_t cno; } ;
struct TYPE_8__ {int count; TYPE_2__ m_final; TYPE_1__ m_start; } ;
typedef TYPE_3__ VICMD ;
typedef int SCR ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_2 (int *,int,int *,size_t,size_t,size_t) ;
 int FUNC_3 (int *,int *,int ) ;

int
FUNC_4(SCR *VAR_2, VICMD *VAR_3)
{
 recno_t VAR_4;
 size_t VAR_5, VAR_6, VAR_7;
 u_long VAR_8;
 CHAR_T *VAR_9;

 VAR_4 = VAR_3->m_start.lno;
 VAR_5 = VAR_3->m_start.cno;

 for (VAR_8 = FUNC_0(VAR_3, VAR_0) ? VAR_3->count : 1; VAR_8 > 0; VAR_5 = 0) {

  if (FUNC_1(VAR_2, VAR_4, 0, &VAR_9, &VAR_7)) {
   if (VAR_4 == 1) {
    FUNC_3(VAR_2, ((void*)0), VAR_1);
    return (1);
   }
   --VAR_4;
   break;
  }


  if (VAR_7 == 0) {
   --VAR_8;
   VAR_3->m_final.cno = 0;
   continue;
  }

  if (VAR_5 + VAR_8 >= VAR_7) {
   VAR_6 = VAR_7 - 1;
   VAR_8 -= VAR_7 - VAR_5;

   VAR_3->m_final.cno = VAR_7 - 1;
  } else {
   VAR_6 = VAR_5 + VAR_8 - 1;
   VAR_8 = 0;

   VAR_3->m_final.cno = VAR_6 + 1;
  }

  if (FUNC_2(VAR_2, VAR_4, VAR_9, VAR_7, VAR_5, VAR_6))
   return (1);

  if (VAR_8 > 0)
   ++VAR_4;
 }

 VAR_3->m_final.lno = VAR_4;
 return (0);
}
