
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_23__ {TYPE_1__* gp; } ;
struct TYPE_22__ {scalar_t__ lno; size_t soff; } ;
struct TYPE_21__ {int (* scr_move ) (TYPE_3__*,int,int ) ;} ;
typedef TYPE_2__ SMAP ;
typedef TYPE_3__ SCR ;


 int FUNC_0 (size_t) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_7 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_3__*,TYPE_2__*,int *,int *) ;
 size_t FUNC_9 (TYPE_3__*,scalar_t__,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_11(SCR *VAR_3, recno_t VAR_4)
{
 SMAP *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8, VAR_9, VAR_10;






 for (VAR_5 = VAR_0; VAR_5->lno != VAR_4; ++VAR_5);
 if (FUNC_1(VAR_3, VAR_1)) {
  VAR_6 = VAR_5;
  VAR_7 = VAR_8 = 1;
 } else {
  for (VAR_7 = 0,
      VAR_6 = VAR_5; VAR_6 <= VAR_2 && VAR_6->lno == VAR_4; ++VAR_7, ++VAR_6);
  VAR_8 = FUNC_9(VAR_3, VAR_4, ((void*)0));
 }

 FUNC_0(VAR_7);

 if (VAR_7 == VAR_8) {
  do {
   FUNC_2(VAR_5);
   if (FUNC_8(VAR_3, VAR_5, ((void*)0), ((void*)0)))
    return (1);
  } while (++VAR_5 < VAR_6);
  return (0);
 }

 if (VAR_7 < VAR_8) {

  VAR_10 = VAR_8 - VAR_7;





  VAR_9 = (VAR_2 - VAR_5) + 1;
  if (VAR_10 > VAR_9)
   VAR_10 = VAR_9;


  if (VAR_9 > 1) {
   (void)VAR_3->gp->scr_move(VAR_3, VAR_5 - VAR_0, 0);
   if (FUNC_7(VAR_3, VAR_10))
    return (1);


   FUNC_3(VAR_5 + VAR_10, VAR_5,
       (((VAR_2 - VAR_5) - VAR_10) + 1) * sizeof(SMAP));
  }


  for (VAR_9 = 1, VAR_6 = VAR_5; VAR_8-- && VAR_6 <= VAR_2; ++VAR_6, ++VAR_9) {
   VAR_6->lno = VAR_4;
   VAR_6->soff = VAR_9;
   FUNC_2(VAR_6);
   if (FUNC_8(VAR_3, VAR_6, ((void*)0), ((void*)0)))
    return (1);
  }
 } else {

  VAR_10 = VAR_7 - VAR_8;


  (void)VAR_3->gp->scr_move(VAR_3, VAR_5 - VAR_0, 0);
  if (FUNC_6(VAR_3, VAR_10))
   return (1);


  FUNC_3(VAR_5, VAR_5 + VAR_10, (((VAR_2 - VAR_5) - VAR_10) + 1) * sizeof(SMAP));


  for (VAR_9 = 1, VAR_6 = VAR_5; VAR_8--; ++VAR_6, ++VAR_9) {
   VAR_6->lno = VAR_4;
   VAR_6->soff = VAR_9;
   FUNC_2(VAR_6);
   if (FUNC_8(VAR_3, VAR_6, ((void*)0), ((void*)0)))
    return (1);
  }


  for (VAR_6 = VAR_2 - VAR_10;;) {
   if (VAR_6 < VAR_2 && FUNC_10(VAR_3, VAR_6, VAR_6 + 1))
    return (1);

   if (FUNC_8(VAR_3, ++VAR_6, ((void*)0), ((void*)0)))
    return (1);
   if (VAR_6 == VAR_2)
    break;
  }
 }
 return (0);
}
