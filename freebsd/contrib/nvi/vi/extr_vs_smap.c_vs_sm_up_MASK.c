
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int scroll_t ;
typedef scalar_t__ recno_t ;
struct TYPE_29__ {scalar_t__ lno; int cno; } ;
struct TYPE_28__ {scalar_t__ t_maxrows; scalar_t__ t_rows; int cols; int rcm; } ;
struct TYPE_27__ {scalar_t__ lno; int coff; int c_scoff; int c_sboff; int soff; } ;
typedef TYPE_1__ SMAP ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ MARK ;





 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;

 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__**) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_2__*,TYPE_3__*,int ,int ) ;

__attribute__((used)) static int
FUNC_14(SCR *VAR_6, MARK *VAR_7, recno_t VAR_8, scroll_t VAR_9, SMAP *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 SMAP *VAR_14, VAR_15, VAR_16;
 if (FUNC_12(VAR_6, VAR_5, &VAR_15))
  return (1);
 if (VAR_15 > VAR_5->lno && !FUNC_4(VAR_6, VAR_15)) {
  if (VAR_9 == 130 || VAR_9 == 128 || VAR_10 == VAR_5) {
   FUNC_5(VAR_6, ((void*)0));
   return (1);
  }
  if (FUNC_12(VAR_6, VAR_10, &VAR_15))
   return (1);
  if (VAR_15 > VAR_10->lno && !FUNC_4(VAR_6, VAR_15)) {
   FUNC_5(VAR_6, ((void*)0));
   return (1);
  }
 }
 VAR_11 = 0;
 if (FUNC_0(VAR_6)) {
  if (VAR_8 >= VAR_6->t_maxrows || VAR_9 == 129) {
   VAR_15 = VAR_5[0];
   if (FUNC_10(VAR_6))
    return (1);
   for (; VAR_8--; VAR_15 = VAR_16) {
    if (FUNC_12(VAR_6, &VAR_15, &VAR_16))
     return (1);
    if (VAR_16 != VAR_15 && !FUNC_4(VAR_6, VAR_16))
     break;
   }
   VAR_5[0] = VAR_16;
   if (FUNC_11(VAR_6, VAR_1, VAR_3))
    return (1);
   return (FUNC_13(VAR_6, VAR_7, 0, VAR_4));
  }
  VAR_11 = VAR_9 == 130 || FUNC_9(VAR_6, &VAR_14);
  for (; VAR_8 &&
      VAR_6->t_rows != VAR_6->t_maxrows; --VAR_8, ++VAR_6->t_rows) {
   if (FUNC_12(VAR_6, VAR_5, &VAR_15))
    return (1);
   if (VAR_5->lno != VAR_15 && !FUNC_4(VAR_6, VAR_15))
    break;
   *++VAR_5 = VAR_15;

   if (FUNC_7(VAR_6, VAR_5, ((void*)0), ((void*)0)))
    return (1);

   if (!VAR_11)
    ++VAR_14;
  }
  if (!VAR_11) {
   VAR_7->lno = VAR_14->lno;
   VAR_7->cno = VAR_14->c_sboff;
  }
  if (VAR_8 == 0)
   return (0);
 }

 for (VAR_12 = VAR_13 = 0; VAR_8; --VAR_8) {

  if (FUNC_12(VAR_6, VAR_5, &VAR_15))
   return (1);


  if (VAR_5->lno != VAR_15 && !FUNC_4(VAR_6, VAR_15))
   break;


  if (FUNC_8(VAR_6))
   return (1);
  switch (VAR_9) {
  case 130:
   if (VAR_10 > VAR_0)
    --VAR_10;
   else
    VAR_12 = 1;
   break;
  case 128:
   if (VAR_13) {
    if (VAR_10 > VAR_0)
     --VAR_10;
   } else {
    VAR_10 = VAR_5;
    VAR_13 = 1;
   }

  default:
   break;
  }
 }

 if (VAR_11)
  return(0);

 switch (VAR_9) {
 case 130:






  if (VAR_12) {
   VAR_7->lno = VAR_10->lno;
   VAR_7->cno = FUNC_6(VAR_6, VAR_10->lno,
       (FUNC_1(VAR_6, VAR_2) ?
       VAR_10->coff : (VAR_10->soff - 1) * VAR_6->cols) +
       VAR_6->rcm % VAR_6->cols);
  }
  return (0);
 case 129:




  if (!VAR_8) {
   VAR_10 = VAR_0;
   break;
  }

 case 131:






  for (; VAR_8; --VAR_8, ++VAR_10)
   if (VAR_10 == VAR_5 || !FUNC_4(VAR_6, VAR_10[1].lno))
    break;
  break;
 case 128:

  break;
 default:
  FUNC_3();
 }

 if (!FUNC_2(VAR_10) && FUNC_7(VAR_6, VAR_10, ((void*)0), ((void*)0)))
  return (1);
 VAR_7->lno = VAR_10->lno;
 VAR_7->cno = VAR_10->c_scoff == 255 ? 0 : VAR_10->c_sboff;
 return (0);
}
