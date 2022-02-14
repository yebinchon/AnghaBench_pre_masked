
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;


typedef int recno_t ;
typedef int lnop_t ;
struct TYPE_21__ {int totalcount; } ;
typedef TYPE_2__ VI_PRIVATE ;
struct TYPE_23__ {size_t t_rows; int lno; TYPE_1__* gp; } ;
struct TYPE_22__ {int lno; } ;
struct TYPE_20__ {int (* scr_move ) (TYPE_4__*,size_t,size_t) ;int (* scr_cursor ) (TYPE_4__*,size_t*,size_t*) ;} ;
struct TYPE_19__ {int lno; } ;
typedef TYPE_3__ SMAP ;
typedef TYPE_4__ SCR ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_3__* VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 TYPE_15__* VAR_3 ;
 TYPE_2__* FUNC_2 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,size_t*,size_t*) ;
 int FUNC_7 (TYPE_4__*,size_t,size_t) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*,int) ;

int
FUNC_11(SCR *VAR_8, recno_t VAR_9, lnop_t VAR_10)
{
 VI_PRIVATE *VAR_11;
 SMAP *VAR_12;
 size_t VAR_13, VAR_14, VAR_15;

 VAR_11 = FUNC_2(VAR_8);
 if (((VAR_10 == 131 && VAR_9 == 0) ||
     (VAR_10 == 129 && VAR_9 == 1)) &&
     !FUNC_5(VAR_8, 2)) {
  VAR_9 = 1;
  VAR_10 = 128;
 }


 if (VAR_10 == 131) {
  ++VAR_9;
  VAR_10 = 129;
 }


 if (VAR_9 > VAR_3->lno)
  return (0);






 if (VAR_9 < VAR_0->lno) {
  switch (VAR_10) {
  case 131:
   FUNC_4();

  case 130:
   for (VAR_12 = VAR_0, VAR_13 = VAR_8->t_rows; VAR_13--; ++VAR_12)
    --VAR_12->lno;
   if (VAR_8->lno >= VAR_9)
    --VAR_8->lno;
   FUNC_1(VAR_11, VAR_7);
   break;
  case 129:
   for (VAR_12 = VAR_0, VAR_13 = VAR_8->t_rows; VAR_13--; ++VAR_12)
    ++VAR_12->lno;
   if (VAR_8->lno >= VAR_9)
    ++VAR_8->lno;
   FUNC_1(VAR_11, VAR_7);
   break;
  case 128:
   break;
  }
  return (0);
 }

 FUNC_1(VAR_11, VAR_6);





 FUNC_3(VAR_11);
 if (VAR_8->lno == VAR_9)
  FUNC_1(VAR_11, VAR_4);






 if (!FUNC_0(VAR_8, VAR_2) &&
     (FUNC_0(VAR_8, VAR_1) || FUNC_2(VAR_8)->totalcount > 1)) {
  FUNC_1(VAR_11, VAR_5);
  return (0);
 }


 (void)VAR_8->gp->scr_cursor(VAR_8, &VAR_14, &VAR_15);

 switch (VAR_10) {
 case 130:
  if (FUNC_8(VAR_8, VAR_9))
   return (1);
  if (VAR_8->lno > VAR_9)
   --VAR_8->lno;
  FUNC_1(VAR_11, VAR_7);
  break;
 case 129:
  if (FUNC_9(VAR_8, VAR_9))
   return (1);
  if (VAR_8->lno > VAR_9)
   ++VAR_8->lno;
  FUNC_1(VAR_11, VAR_7);
  break;
 case 128:
  if (FUNC_10(VAR_8, VAR_9))
   return (1);
  break;
 default:
  FUNC_4();
 }

 (void)VAR_8->gp->scr_move(VAR_8, VAR_14, VAR_15);
 return (0);
}
