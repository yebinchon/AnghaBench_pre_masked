
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int cno; int lno; } ;
struct TYPE_8__ {scalar_t__ character; int count; TYPE_1__ m_stop; TYPE_1__ m_start; TYPE_1__ m_final; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_9__ {int csearchdir; scalar_t__ lastckey; } ;
typedef int SCR ;
typedef scalar_t__ CHAR_T ;
typedef scalar_t__ ARG_CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__**,size_t*,int*) ;
 int VAR_2 ;
 int FUNC_4 (int *,scalar_t__) ;

int
FUNC_5(SCR *VAR_3, VICMD *VAR_4)
{
 size_t VAR_5;
 u_long VAR_6;
 int VAR_7;
 ARG_CHAR_T VAR_8;
 CHAR_T *VAR_9, *VAR_10, *VAR_11;






 VAR_8 = VAR_4->character;
 if (!FUNC_0(VAR_4, VAR_1))
  FUNC_2(VAR_3)->lastckey = VAR_8;
 FUNC_2(VAR_3)->csearchdir = VAR_2;

 if (FUNC_3(VAR_3, VAR_4->m_start.lno, &VAR_10, &VAR_5, &VAR_7)) {
  if (VAR_7)
   goto empty;
  return (1);
 }

 if (VAR_5 == 0) {
empty: FUNC_4(VAR_3, VAR_8);
  return (1);
 }

 VAR_9 = (VAR_11 = VAR_10) + VAR_5;
 VAR_10 += VAR_4->m_start.cno;
 for (VAR_6 = FUNC_0(VAR_4, VAR_0) ? VAR_4->count : 1; VAR_6--;) {
  while (++VAR_10 < VAR_9 && *VAR_10 != VAR_8);
  if (VAR_10 == VAR_9) {
   FUNC_4(VAR_3, VAR_8);
   return (1);
  }
 }

 VAR_4->m_stop.cno = VAR_10 - VAR_11;





 VAR_4->m_final = FUNC_1(VAR_4) ? VAR_4->m_start : VAR_4->m_stop;
 return (0);
}
