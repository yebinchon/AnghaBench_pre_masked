
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_7__* cols; struct termp* arg; int sulen; int slen; int len; } ;
struct termp {int flags; scalar_t__ enc; size_t maxrmargin; int lasttcol; int viscol; int skipvsp; TYPE_4__* tcol; TYPE_5__ tbl; int (* endline ) (struct termp*) ;TYPE_4__* tcols; int (* advance ) (struct termp*,int) ;int col; } ;
struct tbl_span {int pos; struct tbl_span const* next; TYPE_6__* opts; TYPE_3__* layout; TYPE_2__* last; struct tbl_span const* prev; struct tbl_dat* first; } ;
struct tbl_dat {int hspans; scalar_t__ pos; struct tbl_dat* next; } ;
typedef struct tbl_cell {scalar_t__ pos; int vert; int col; struct tbl_cell const* next; } const tbl_cell ;
struct TYPE_16__ {size_t spacing; scalar_t__ width; } ;
struct TYPE_15__ {int opts; int cols; scalar_t__ rvert; scalar_t__ lvert; } ;
struct TYPE_13__ {size_t offset; size_t rmargin; scalar_t__ col; scalar_t__ lastcol; } ;
struct TYPE_12__ {int vert; struct tbl_cell const* last; struct tbl_cell const* first; } ;
struct TYPE_11__ {scalar_t__ pos; TYPE_1__* layout; } ;
struct TYPE_10__ {int col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct tbl_cell const*) ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct termp*,int) ;
 int FUNC_4 (struct termp*,int) ;
 int FUNC_5 (struct termp*) ;
 int FUNC_6 (struct termp*,TYPE_6__*,struct tbl_cell const*,struct tbl_dat const*,TYPE_7__*) ;
 int FUNC_7 (struct termp*,int,int) ;
 int FUNC_8 (struct termp*,struct tbl_span const*,struct tbl_span const*,struct tbl_span const*,int) ;
 int FUNC_9 (TYPE_5__*,struct tbl_span const*,size_t,size_t) ;
 int FUNC_10 (struct termp*) ;
 int FUNC_11 (struct termp*,int) ;
 int FUNC_12 (size_t) ;
 int FUNC_13 (struct termp*,int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

void
FUNC_14(struct termp *VAR_23, const struct tbl_span *VAR_24)
{
 const struct tbl_cell *VAR_25, *VAR_26, *VAR_27, *VAR_28;
 const struct tbl_dat *VAR_29;
 static size_t VAR_30;
 size_t VAR_31;
 size_t VAR_32, VAR_33;
 int VAR_34, VAR_35, VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;



 VAR_23->flags |= VAR_16 | VAR_15;
 VAR_31 = VAR_23->tcol->offset;






 if (VAR_23->tbl.cols == ((void*)0)) {
  VAR_18 = VAR_23->enc == VAR_13 ?
      VAR_19 : VAR_17;

  VAR_23->tbl.len = VAR_20;
  VAR_23->tbl.slen = VAR_21;
  VAR_23->tbl.sulen = VAR_22;
  VAR_23->tbl.arg = VAR_23;

  FUNC_9(&VAR_23->tbl, VAR_24, VAR_23->tcol->offset, VAR_23->tcol->rmargin);



  FUNC_13(VAR_23, ((void*)0));
  VAR_32 = VAR_24->opts->opts & (VAR_9 | VAR_11) ||
      VAR_24->opts->lvert;
  for (VAR_35 = 0; VAR_35 < VAR_24->opts->cols; VAR_35++) {
   VAR_32 += VAR_23->tbl.cols[VAR_35].width;
   FUNC_12(VAR_32);
   VAR_32 += VAR_23->tbl.cols[VAR_35].spacing;
  }



  VAR_30 = VAR_23->tcol->offset;
  if (VAR_24->opts->opts & VAR_10) {
   VAR_33 = VAR_24->opts->opts & (VAR_9 | VAR_11)
       ? 2 : !!VAR_24->opts->lvert + !!VAR_24->opts->rvert;
   for (VAR_35 = 0; VAR_35 + 1 < VAR_24->opts->cols; VAR_35++)
    VAR_33 += VAR_23->tbl.cols[VAR_35].width +
        VAR_23->tbl.cols[VAR_35].spacing;
   if (VAR_24->opts->cols)
    VAR_33 += VAR_23->tbl.cols[VAR_24->opts->cols - 1].width;
   if (VAR_30 + VAR_33 > VAR_23->tcol->rmargin)
    VAR_33 -= 1;
   VAR_30 = VAR_30 + VAR_23->tcol->rmargin > VAR_33 ?
       (VAR_30 + VAR_23->tcol->rmargin - VAR_33) / 2 : 0;
   VAR_23->tcol->offset = VAR_30;
  }



  if (VAR_23->enc == VAR_12 &&
      VAR_24->opts->opts & VAR_11)
   FUNC_8(VAR_23, ((void*)0), VAR_24, VAR_24, VAR_11);
  if (VAR_24->opts->opts & (VAR_11 | VAR_9))
   FUNC_8(VAR_23, ((void*)0), VAR_24, VAR_24, VAR_9);
 }



 VAR_23->flags |= VAR_14;
 VAR_23->tcol->offset = VAR_30;
 VAR_39 = 0;
 switch (VAR_24->pos) {
 case 128:
 case 129:
  VAR_39 = 1;
  FUNC_11(VAR_23, 1);
  break;
 case 130:
  FUNC_11(VAR_23, VAR_24->opts->cols + 2);
  VAR_32 = VAR_23->tcol->offset;



  if (VAR_24->opts->opts & (VAR_9 | VAR_11) ||
      VAR_24->opts->lvert)
   VAR_32++;
  VAR_23->tcol->rmargin = VAR_32;



  VAR_29 = VAR_24->first;
  VAR_34 = 0;
  for (VAR_35 = 0; VAR_35 < VAR_24->opts->cols; VAR_35++) {
   if (VAR_34 == 0) {
    VAR_23->tcol++;
    VAR_23->tcol->offset = VAR_32;
   }
   VAR_32 += VAR_23->tbl.cols[VAR_35].width;
   VAR_23->tcol->rmargin = VAR_32;
   if (VAR_35 + 1 < VAR_24->opts->cols)
    VAR_32 += VAR_23->tbl.cols[VAR_35].spacing;
   if (VAR_34) {
    VAR_34--;
    continue;
   }
   if (VAR_29 == ((void*)0))
    continue;
   VAR_34 = VAR_29->hspans;
   if (VAR_35 || VAR_24->layout->first->pos != VAR_5)
    VAR_29 = VAR_29->next;
  }



  VAR_23->tcol++;
  VAR_23->tcol->offset = VAR_32 + 1;
  VAR_23->tcol->rmargin = VAR_23->maxrmargin;



  VAR_23->lasttcol = VAR_23->tcol - VAR_23->tcols;



  VAR_23->tcol = VAR_23->tcols;
  VAR_25 = VAR_26 = VAR_24->layout->first;
  VAR_29 = VAR_24->first;
  VAR_34 = 0;
  for (VAR_35 = 0; VAR_35 < VAR_24->opts->cols; VAR_35++) {
   if (VAR_26 != ((void*)0)) {
    VAR_25 = VAR_26;
    VAR_26 = VAR_26->next;
   }
   if (VAR_34) {
    VAR_34--;
    continue;
   }
   VAR_23->tcol++;
   VAR_23->col = 0;
   FUNC_6(VAR_23, VAR_24->opts, VAR_25, VAR_29, VAR_23->tbl.cols + VAR_35);
   if (VAR_29 == ((void*)0))
    continue;
   VAR_34 = VAR_29->hspans;
   if (VAR_25->pos != VAR_5)
    VAR_29 = VAR_29->next;
  }
  break;
 }

 do {


  VAR_23->tcol = VAR_23->tcols;
  VAR_42 = VAR_37 = VAR_24->opts->opts & VAR_11 ? 2 :
      VAR_24->opts->opts & VAR_9 ? 1 : 0;
  if (VAR_24->pos == 130 && VAR_42 < VAR_24->layout->vert)
   VAR_42 = VAR_37 = VAR_24->layout->vert;
  if (VAR_24->next != ((void*)0) && VAR_24->next->pos == 130 &&
      VAR_37 < VAR_24->next->layout->vert)
   VAR_37 = VAR_24->next->layout->vert;
  if (VAR_24->prev != ((void*)0) && VAR_42 < VAR_24->prev->layout->vert &&
      (VAR_39 || (FUNC_0(VAR_24->layout->first) &&
        !FUNC_0(VAR_24->prev->layout->first))))
   VAR_42 = VAR_24->prev->layout->vert;
  VAR_41 = VAR_24->pos == 129 ||
      (VAR_24->first != ((void*)0) && VAR_24->first->pos == VAR_6) ||
      VAR_24->layout->first->pos == 132 ? 2 :
      VAR_24->pos == 128 ||
      (VAR_24->first != ((void*)0) && VAR_24->first->pos == VAR_7) ||
      VAR_24->layout->first->pos == 131 ? 1 : 0;
  VAR_38 = VAR_4 * VAR_42 + VAR_0 * VAR_37 + VAR_3 * VAR_41;
  if (VAR_42 > 0 || VAR_37 > 0 || (VAR_39 && VAR_24->opts->lvert)) {
   (*VAR_23->advance)(VAR_23, VAR_23->tcols->offset);
   VAR_23->viscol = VAR_23->tcol->offset;
   FUNC_7(VAR_23, VAR_38, 1);
  }



  VAR_36 = 0;
  if (VAR_39)
   FUNC_8(VAR_23, VAR_24->prev, VAR_24, VAR_24->next, 0);
  else {
   VAR_25 = VAR_24->layout->first;
   VAR_26 = VAR_24->next == ((void*)0) ? ((void*)0) :
       VAR_24->next->layout->first;
   VAR_27 = VAR_24->prev == ((void*)0) ? ((void*)0) :
       VAR_24->prev->layout->first;
   VAR_29 = VAR_24->first;
   VAR_34 = 0;
   for (VAR_35 = 0; VAR_35 < VAR_24->opts->cols; VAR_35++) {







    VAR_42 = VAR_37 = VAR_38 = 0;
    if (VAR_25 != ((void*)0)) {
     VAR_28 = VAR_25;
     while (VAR_28->next != ((void*)0) &&
         VAR_28->next->pos == VAR_5)
      VAR_28 = VAR_28->next;
     if (VAR_24->pos == 130)
      VAR_42 = VAR_37 = VAR_28->vert;
     switch (VAR_25->pos) {
     case 131:
      VAR_38 = VAR_1;
      break;
     case 132:
      VAR_38 = VAR_1 * 2;
      break;
     default:
      break;
     }
    }
    if (VAR_27 != ((void*)0)) {
     if (VAR_42 < VAR_27->vert &&
         VAR_25 != ((void*)0) &&
         ((FUNC_0(VAR_25) &&
           !FUNC_0(VAR_27)) ||
          (VAR_25->next != ((void*)0) &&
           VAR_27->next != ((void*)0) &&
           FUNC_0(VAR_25->next) &&
           !FUNC_0(VAR_27->next))))
      VAR_42 = VAR_27->vert;
     VAR_27 = VAR_27->next;
    }
    if (VAR_24->opts->opts & VAR_8) {
     if (VAR_42 == 0)
      VAR_42 = 1;
     if (VAR_37 == 0)
      VAR_37 = 1;
    }
    if (VAR_26 != ((void*)0)) {
     if (VAR_37 == 0 ||
         (VAR_37 < VAR_26->vert &&
          VAR_23->enc == VAR_13))
      VAR_37 = VAR_26->vert;
     VAR_26 = VAR_26->next;
    }

    VAR_40 = (VAR_25 != ((void*)0) &&
         VAR_25->pos == 132) ||
        (VAR_29 != ((void*)0) &&
         VAR_29->pos == VAR_6) ? 2 :
        (VAR_25 != ((void*)0) &&
         VAR_25->pos == 131) ||
        (VAR_29 != ((void*)0) &&
         VAR_29->pos == VAR_7) ? 1 : 0;







    if (VAR_34) {
     VAR_34--;
     VAR_25 = VAR_25->next;
     continue;
    }
    if (VAR_29 != ((void*)0)) {
     VAR_34 = VAR_29->hspans;
     if (VAR_35 || VAR_24->layout->first->pos
         != VAR_5)
      VAR_29 = VAR_29->next;
    }






    VAR_23->tcol++;
    if (VAR_23->tcol->col < VAR_23->tcol->lastcol)
     FUNC_10(VAR_23);
    if (VAR_23->tcol->col < VAR_23->tcol->lastcol)
     VAR_36 = 1;






    if (VAR_38 == 0 &&
        ((VAR_42 == 0 && VAR_37 == 0 &&
          VAR_25 != ((void*)0) && (VAR_25->next == ((void*)0) ||
          !FUNC_0(VAR_25->next))) ||
         VAR_23->tcol + 1 ==
          VAR_23->tcols + VAR_23->lasttcol)) {
     if (VAR_25 != ((void*)0))
      VAR_25 = VAR_25->next;
     continue;
    }

    if (VAR_23->viscol < VAR_23->tcol->rmargin) {
     (*VAR_23->advance)(VAR_23, VAR_23->tcol->rmargin
        - VAR_23->viscol);
     VAR_23->viscol = VAR_23->tcol->rmargin;
    }
    while (VAR_23->viscol < VAR_23->tcol->rmargin +
        VAR_23->tbl.cols[VAR_35].spacing / 2)
     FUNC_7(VAR_23,
         VAR_1 * VAR_40, 1);

    if (VAR_23->tcol + 1 == VAR_23->tcols + VAR_23->lasttcol)
     continue;

    if (VAR_25 != ((void*)0))
     VAR_25 = VAR_25->next;

    VAR_41 = (VAR_25 != ((void*)0) &&
         VAR_25->pos == 132) ||
        (VAR_29 != ((void*)0) &&
         VAR_29->pos == VAR_6) ? 2 :
        (VAR_25 != ((void*)0) &&
         VAR_25->pos == 131) ||
        (VAR_29 != ((void*)0) &&
         VAR_29->pos == VAR_7) ? 1 : 0;

    if (VAR_23->tbl.cols[VAR_35].spacing)
     FUNC_7(VAR_23,
         VAR_2 * VAR_40 + VAR_3 * VAR_41 +
         VAR_4 * VAR_42 + VAR_0 * VAR_37, 1);

    if (VAR_23->enc == VAR_13)
     VAR_42 = VAR_37 = 0;

    if (VAR_23->tbl.cols[VAR_35].spacing > 2 &&
        (VAR_42 > 1 || VAR_37 > 1 || VAR_41))
     FUNC_7(VAR_23,
         VAR_1 * VAR_41 +
         VAR_4 * (VAR_42 > 1) +
         VAR_0 * (VAR_37 > 1), 1);
   }
  }



  VAR_42 = VAR_37 = VAR_24->opts->opts & VAR_11 ? 2 :
      VAR_24->opts->opts & VAR_9 ? 1 : 0;
  if (VAR_24->pos == 130 &&
      VAR_42 < VAR_24->layout->last->vert &&
      VAR_24->layout->last->col + 1 == VAR_24->opts->cols)
   VAR_42 = VAR_37 = VAR_24->layout->last->vert;
  if (VAR_24->next != ((void*)0) &&
      VAR_37 < VAR_24->next->layout->last->vert &&
      VAR_24->next->layout->last->col + 1 == VAR_24->opts->cols)
   VAR_37 = VAR_24->next->layout->last->vert;
  if (VAR_24->prev != ((void*)0) &&
      VAR_42 < VAR_24->prev->layout->last->vert &&
      VAR_24->prev->layout->last->col + 1 == VAR_24->opts->cols &&
      (VAR_39 || (FUNC_0(VAR_24->layout->last) &&
       !FUNC_0(VAR_24->prev->layout->last))))
   VAR_42 = VAR_24->prev->layout->last->vert;
  VAR_40 = VAR_24->pos == 129 ||
      (VAR_24->last != ((void*)0) &&
       VAR_24->last->pos == VAR_6 &&
       VAR_24->last->layout->col + 1 == VAR_24->opts->cols) ||
      (VAR_24->layout->last->pos == 132 &&
       VAR_24->layout->last->col + 1 == VAR_24->opts->cols) ? 2 :
      VAR_24->pos == 128 ||
      (VAR_24->last != ((void*)0) &&
       VAR_24->last->pos == VAR_7 &&
       VAR_24->last->layout->col + 1 == VAR_24->opts->cols) ||
      (VAR_24->layout->last->pos == 131 &&
       VAR_24->layout->last->col + 1 == VAR_24->opts->cols) ? 1 : 0;
  VAR_38 = VAR_4 * VAR_42 + VAR_0 * VAR_37 + VAR_2 * VAR_40;
  if (VAR_42 > 0 || VAR_37 > 0 || (VAR_39 && VAR_24->opts->rvert)) {
   if (VAR_39 == 0 && (FUNC_0(VAR_24->layout->last) == 0 ||
       VAR_24->layout->last->col + 1 < VAR_24->opts->cols)) {
    VAR_23->tcol++;
    do {
     FUNC_7(VAR_23,
         VAR_1 * VAR_40, 1);
    } while (VAR_23->viscol < VAR_23->tcol->offset);
   }
   FUNC_7(VAR_23, VAR_38, 1);
  }
  (*VAR_23->endline)(VAR_23);
  VAR_23->viscol = 0;
 } while (VAR_36);







 FUNC_11(VAR_23, 1);
 VAR_23->flags &= ~VAR_14;
 VAR_23->tcol->rmargin = VAR_23->maxrmargin;
 if (VAR_24->next == ((void*)0)) {
  if (VAR_24->opts->opts & (VAR_11 | VAR_9)) {
   FUNC_8(VAR_23, VAR_24, VAR_24, ((void*)0), VAR_9);
   VAR_23->skipvsp = 1;
  }
  if (VAR_23->enc == VAR_12 &&
      VAR_24->opts->opts & VAR_11) {
   FUNC_8(VAR_23, VAR_24, VAR_24, ((void*)0), VAR_11);
   VAR_23->skipvsp = 2;
  }
  FUNC_1(VAR_23->tbl.cols);
  FUNC_2(VAR_23->tbl.cols);
  VAR_23->tbl.cols = ((void*)0);
 } else if (VAR_39 == 0 && VAR_24->opts->opts & VAR_8 &&
     (VAR_24->next == ((void*)0) || VAR_24->next->pos == 130 ||
      VAR_24->next->next != ((void*)0)))
  FUNC_8(VAR_23, VAR_24, VAR_24, VAR_24->next, VAR_8);

 VAR_23->tcol->offset = VAR_31;
 VAR_23->flags &= ~VAR_15;
}
