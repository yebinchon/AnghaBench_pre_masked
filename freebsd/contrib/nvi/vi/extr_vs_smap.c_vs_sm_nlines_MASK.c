
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_3__ {scalar_t__ lno; scalar_t__ soff; } ;
typedef TYPE_1__ SMAP ;
typedef int SCR ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__,int *) ;

recno_t
FUNC_2(SCR *VAR_1, SMAP *VAR_2, recno_t VAR_3, size_t VAR_4)
{
 recno_t VAR_5, VAR_6;

 if (FUNC_0(VAR_1, VAR_0))
  return (VAR_2->lno > VAR_3 ?
      VAR_2->lno - VAR_3 : VAR_3 - VAR_2->lno);

 if (VAR_2->lno == VAR_3)
  return (VAR_2->soff - 1);

 if (VAR_2->lno > VAR_3) {
  VAR_6 = VAR_2->soff - 1;
  for (VAR_5 = VAR_2->lno; --VAR_5 >= VAR_3 && VAR_6 <= VAR_4;)
   VAR_6 += FUNC_1(VAR_1, VAR_5, ((void*)0));
 } else {
  VAR_5 = VAR_2->lno;
  VAR_6 = (FUNC_1(VAR_1, VAR_5, ((void*)0)) - VAR_2->soff) + 1;
  for (; ++VAR_5 < VAR_3 && VAR_6 <= VAR_4;)
   VAR_6 += FUNC_1(VAR_1, VAR_5, ((void*)0));
 }
 return (VAR_6);
}
