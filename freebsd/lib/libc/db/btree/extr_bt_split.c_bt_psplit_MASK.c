
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int indx_t ;
struct TYPE_26__ {int flags; int ksize; } ;
struct TYPE_25__ {int flags; } ;
struct TYPE_21__ {scalar_t__ pgno; int index; } ;
struct TYPE_23__ {TYPE_1__ pg; } ;
struct TYPE_24__ {int bt_psize; TYPE_3__ bt_cursor; } ;
struct TYPE_22__ {int flags; int* linp; int upper; int lower; scalar_t__ pgno; } ;
typedef int RLEAF ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ CURSOR ;
typedef TYPE_4__ BTREE ;
typedef TYPE_5__ BLEAF ;
typedef TYPE_6__ BINTERNAL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 TYPE_6__* FUNC_1 (TYPE_2__*,int) ;
 TYPE_5__* FUNC_2 (TYPE_2__*,int) ;
 void* FUNC_3 (TYPE_2__*,int) ;
 int * FUNC_4 (TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int VAR_4 ;




 int VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 (char*,void*,int) ;

__attribute__((used)) static PAGE *
FUNC_11(BTREE *VAR_6, PAGE *VAR_7, PAGE *VAR_8, PAGE *VAR_9, indx_t *VAR_10, size_t VAR_11)
{
 BINTERNAL *VAR_12;
 BLEAF *VAR_13;
 CURSOR *VAR_14;
 RLEAF *VAR_15;
 PAGE *VAR_16;
 void *VAR_17;
 indx_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 u_int32_t VAR_25;
 int VAR_26, VAR_27;







 VAR_26 = 0;
 VAR_22 = *VAR_10;
 VAR_18 = VAR_6->bt_psize - VAR_0;
 VAR_19 = VAR_18 / 2;
 VAR_24 = 0;
 for (VAR_20 = VAR_21 = 0, VAR_23 = FUNC_7(VAR_7); VAR_20 < VAR_23; ++VAR_21) {
  if (VAR_22 == VAR_21) {
   VAR_25 = VAR_11;
   VAR_27 = 0;
  } else
   switch (VAR_7->flags & VAR_5) {
   case 131:
    VAR_17 = VAR_12 = FUNC_1(VAR_7, VAR_20);
    VAR_25 = FUNC_5(VAR_12->ksize);
    VAR_27 = VAR_12->flags & VAR_4;
    break;
   case 130:
    VAR_17 = VAR_13 = FUNC_2(VAR_7, VAR_20);
    VAR_25 = FUNC_6(VAR_13);
    VAR_27 = VAR_13->flags & VAR_4;
    break;
   case 129:
    VAR_17 = FUNC_3(VAR_7, VAR_20);
    VAR_25 = VAR_3;
    VAR_27 = 0;
    break;
   case 128:
    VAR_17 = VAR_15 = FUNC_4(VAR_7, VAR_20);
    VAR_25 = FUNC_8(VAR_15);
    VAR_27 = 0;
    break;
   default:
    FUNC_9();
   }







  if ((VAR_22 <= VAR_21 && VAR_24 + VAR_25 + sizeof(indx_t) >= VAR_18) ||
      VAR_20 == VAR_23 - 1) {
   --VAR_21;
   break;
  }


  if (VAR_22 != VAR_21) {
   ++VAR_20;

   VAR_8->linp[VAR_21] = VAR_8->upper -= VAR_25;
   FUNC_10((char *)VAR_8 + VAR_8->upper, VAR_17, VAR_25);
  }

  VAR_24 += VAR_25 + sizeof(indx_t);
  if (VAR_24 >= VAR_19) {
   if (!VAR_27 || VAR_26 == 3)
    break;
   else
    ++VAR_26;
  }
 }





 VAR_8->lower += (VAR_21 + 1) * sizeof(indx_t);
 VAR_14 = &VAR_6->bt_cursor;
 if (FUNC_0(VAR_14, VAR_1) && VAR_14->pg.pgno == VAR_7->pgno) {
  if (VAR_14->pg.index >= VAR_22)
   ++VAR_14->pg.index;
  if (VAR_14->pg.index < VAR_20)
   VAR_14->pg.pgno = VAR_8->pgno;
  else {
   VAR_14->pg.pgno = VAR_9->pgno;
   VAR_14->pg.index -= VAR_20;
  }
 }






 if (VAR_22 <= VAR_21) {
  VAR_22 = VAR_2;
  VAR_16 = VAR_8;
 } else {
  VAR_16 = VAR_9;
  *VAR_10 -= VAR_20;
 }

 for (VAR_21 = 0; VAR_20 < VAR_23; ++VAR_21) {
  if (VAR_22 == VAR_20) {
   ++VAR_21;
   VAR_22 = VAR_2;
  }
  switch (VAR_7->flags & VAR_5) {
  case 131:
   VAR_17 = VAR_12 = FUNC_1(VAR_7, VAR_20);
   VAR_25 = FUNC_5(VAR_12->ksize);
   break;
  case 130:
   VAR_17 = VAR_13 = FUNC_2(VAR_7, VAR_20);
   VAR_25 = FUNC_6(VAR_13);
   break;
  case 129:
   VAR_17 = FUNC_3(VAR_7, VAR_20);
   VAR_25 = VAR_3;
   break;
  case 128:
   VAR_17 = VAR_15 = FUNC_4(VAR_7, VAR_20);
   VAR_25 = FUNC_8(VAR_15);
   break;
  default:
   FUNC_9();
  }
  ++VAR_20;
  VAR_9->linp[VAR_21] = VAR_9->upper -= VAR_25;
  FUNC_10((char *)VAR_9 + VAR_9->upper, VAR_17, VAR_25);
 }
 VAR_9->lower += VAR_21 * sizeof(indx_t);


 if (VAR_22 == VAR_23)
  VAR_9->lower += sizeof(indx_t);

 return (VAR_16);
}
