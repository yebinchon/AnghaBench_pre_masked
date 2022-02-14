
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lno; int soff; int coff; } ;
typedef TYPE_1__ SMAP ;
typedef int SCR ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__,int *) ;

int
FUNC_3(SCR *VAR_1, SMAP *VAR_2, SMAP *VAR_3)
{
 FUNC_1(VAR_3);
 if (FUNC_0(VAR_1, VAR_0)) {
  VAR_3->lno = VAR_2->lno - 1;
  VAR_3->coff = VAR_2->coff;
 } else {
  if (VAR_2->soff != 1) {
   VAR_3->lno = VAR_2->lno;
   VAR_3->soff = VAR_2->soff - 1;
  } else {
   VAR_3->lno = VAR_2->lno - 1;
   VAR_3->soff = FUNC_2(VAR_1, VAR_3->lno, ((void*)0));
  }
 }
 return (VAR_3->lno == 0);
}
