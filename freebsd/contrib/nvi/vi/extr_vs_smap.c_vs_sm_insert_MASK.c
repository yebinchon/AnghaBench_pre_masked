
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_17__ {TYPE_1__* gp; } ;
struct TYPE_16__ {size_t coff; scalar_t__ lno; size_t soff; } ;
struct TYPE_15__ {int (* scr_move ) (TYPE_3__*,int,int ) ;} ;
typedef TYPE_2__ SMAP ;
typedef TYPE_3__ SCR ;


 int FUNC_0 (size_t) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*,int *,int *) ;
 size_t FUNC_6 (TYPE_3__*,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_7(SCR *VAR_2, recno_t VAR_3)
{
 SMAP *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7, VAR_8;


 VAR_8 = VAR_0->coff;





 for (VAR_4 = VAR_0; VAR_4->lno != VAR_3; ++VAR_4);

 VAR_6 = FUNC_6(VAR_2, VAR_3, ((void*)0));
 FUNC_0(VAR_6);





 VAR_7 = (VAR_1 - VAR_4) + 1;
 if (VAR_6 > VAR_7)
  VAR_6 = VAR_7;


 (void)VAR_2->gp->scr_move(VAR_2, VAR_4 - VAR_0, 0);
 if (FUNC_4(VAR_2, VAR_6))
  return (1);


 FUNC_2(VAR_4 + VAR_6, VAR_4, (((VAR_1 - VAR_4) - VAR_6) + 1) * sizeof(SMAP));


 for (VAR_5 = VAR_4 + VAR_6; VAR_5 <= VAR_1; ++VAR_5)
  ++VAR_5->lno;


 for (VAR_7 = 1, VAR_5 = VAR_4; VAR_7 <= VAR_6; ++VAR_5, ++VAR_7) {
  VAR_5->lno = VAR_3;
  VAR_5->coff = VAR_8;
  VAR_5->soff = VAR_7;
  FUNC_1(VAR_5);
  if (FUNC_5(VAR_2, VAR_5, ((void*)0), ((void*)0)))
   return (1);
 }
 return (0);
}
