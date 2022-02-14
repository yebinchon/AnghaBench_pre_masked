
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_19__ {TYPE_1__* gp; } ;
struct TYPE_18__ {scalar_t__ lno; } ;
struct TYPE_17__ {int (* scr_move ) (TYPE_3__*,int,int ) ;} ;
typedef TYPE_2__ SMAP ;
typedef TYPE_3__ SCR ;


 int FUNC_0 (size_t) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(SCR *VAR_3, recno_t VAR_4)
{
 SMAP *VAR_5, *VAR_6;
 size_t VAR_7;





 for (VAR_5 = VAR_0; VAR_5->lno != VAR_4; ++VAR_5);
 if (FUNC_1(VAR_3, VAR_1))
  VAR_7 = 1;
 else
  for (VAR_7 = 1, VAR_6 = VAR_5 + 1;
      VAR_6 <= VAR_2 && VAR_6->lno == VAR_4; ++VAR_7, ++VAR_6);

 FUNC_0(VAR_7);


 (void)VAR_3->gp->scr_move(VAR_3, VAR_5 - VAR_0, 0);
 if (FUNC_4(VAR_3, VAR_7))
  return (1);


 FUNC_2(VAR_5, VAR_5 + VAR_7, (((VAR_2 - VAR_5) - VAR_7) + 1) * sizeof(SMAP));


 for (VAR_6 = VAR_2 - VAR_7; VAR_5 <= VAR_6; ++VAR_5)
  --VAR_5->lno;


 for (VAR_5 = VAR_2 - VAR_7;;) {
  if (VAR_5 < VAR_2 && FUNC_6(VAR_3, VAR_5, VAR_5 + 1))
   return (1);

  if (FUNC_5(VAR_3, ++VAR_5, ((void*)0), ((void*)0)))
   return (1);
  if (VAR_5 == VAR_2)
   break;
 }
 return (0);
}
