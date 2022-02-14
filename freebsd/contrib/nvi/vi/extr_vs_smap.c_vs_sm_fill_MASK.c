
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef void* recno_t ;
typedef int pos_t ;
struct TYPE_20__ {size_t t_rows; } ;
struct TYPE_19__ {int lno; int soff; scalar_t__ coff; } ;
typedef TYPE_1__ SMAP ;
typedef TYPE_2__ SCR ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 void* VAR_1 ;




 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int*) ;
 void* FUNC_5 (TYPE_2__*,void*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,void*,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;

int
FUNC_9(SCR *VAR_4, recno_t VAR_5, pos_t VAR_6)
{
 SMAP *VAR_7, VAR_8;
 size_t VAR_9;


 for (VAR_7 = VAR_0, VAR_9 = VAR_4->t_rows; VAR_9--; ++VAR_7)
  FUNC_2(VAR_7);
 FUNC_0(VAR_4, VAR_2);

 switch (VAR_6) {
 case 130:
  VAR_8.lno = 1;
  VAR_8.coff = 0;
  VAR_8.soff = 1;


  if (FUNC_7(VAR_4,
      &VAR_8, VAR_5, FUNC_1(VAR_4)) <= FUNC_1(VAR_4)) {
   VAR_5 = 1;
   goto top;
  }


  if (FUNC_4(VAR_4, &VAR_8.lno))
   return (1);
  VAR_8.coff = 0;
  VAR_8.soff = FUNC_5(VAR_4, VAR_8.lno, ((void*)0));
  if (FUNC_7(VAR_4,
      &VAR_8, VAR_5, FUNC_1(VAR_4)) <= FUNC_1(VAR_4)) {
   VAR_3->lno = VAR_8.lno;
   VAR_3->coff = VAR_8.coff;
   VAR_3->soff = VAR_8.soff;
   goto bottom;
  }
  goto middle;
 case 128:
  if (VAR_5 != VAR_1) {
top: VAR_0->lno = VAR_5;
   VAR_0->coff = 0;
   VAR_0->soff = 1;
  } else {






   VAR_9 = FUNC_5(VAR_4, VAR_0->lno, ((void*)0));
   if (VAR_9 < VAR_0->soff)
    VAR_0->soff = 1;
  }

  for (VAR_7 = VAR_0, VAR_9 = VAR_4->t_rows; --VAR_9; ++VAR_7)
   if (FUNC_6(VAR_4, VAR_7, VAR_7 + 1))
    goto err;
  break;
 case 129:

middle: VAR_7 = VAR_0 + VAR_4->t_rows / 2;
  VAR_7->lno = VAR_5;
  VAR_7->coff = 0;
  VAR_7->soff = 1;
  for (; VAR_7 > VAR_0; --VAR_7)
   if (FUNC_8(VAR_4, VAR_7, VAR_7 - 1)) {
    VAR_5 = 1;
    goto top;
   }


  VAR_7 = VAR_0 + VAR_4->t_rows / 2;
  for (; VAR_7 < VAR_3; ++VAR_7)
   if (FUNC_6(VAR_4, VAR_7, VAR_7 + 1))
    goto err;
  break;
 case 131:
  if (VAR_5 != VAR_1) {
   VAR_3->lno = VAR_5;
   VAR_3->coff = 0;
   VAR_3->soff = FUNC_5(VAR_4, VAR_5, ((void*)0));
  }

bottom: for (VAR_7 = VAR_3; VAR_7 > VAR_0; --VAR_7)
   if (FUNC_8(VAR_4, VAR_7, VAR_7 - 1)) {
    VAR_5 = 1;
    goto top;
   }
  break;
 default:
  FUNC_3();
 }
 return (0);





err: VAR_0->lno = 1;
 VAR_0->coff = 0;
 VAR_0->soff = 1;
 for (VAR_7 = VAR_0; VAR_7 < VAR_3; ++VAR_7)
  if (FUNC_6(VAR_4, VAR_7, VAR_7 + 1))
   return (1);
 return (0);
}
