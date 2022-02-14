
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {struct roffcol const* cols; } ;
struct termp {scalar_t__ enc; scalar_t__ viscol; int (* endline ) (struct termp*) ;TYPE_5__ tbl; TYPE_4__* tcols; int (* advance ) (struct termp*,scalar_t__) ;} ;
struct tbl_span {scalar_t__ pos; TYPE_2__* layout; TYPE_6__* opts; TYPE_3__* next; struct tbl_dat* first; } ;
struct tbl_dat {int * string; struct tbl_dat* next; struct tbl_cell const* layout; } ;
struct tbl_cell {scalar_t__ pos; int col; int vert; struct tbl_cell* next; } ;
typedef struct roffcol {int width; int spacing; } const roffcol ;
struct TYPE_12__ {int opts; int cols; } ;
struct TYPE_10__ {scalar_t__ offset; } ;
struct TYPE_9__ {struct tbl_dat* first; } ;
struct TYPE_8__ {TYPE_1__* last; struct tbl_cell* first; } ;
struct TYPE_7__ {scalar_t__ pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (struct termp*,scalar_t__) ;
 int FUNC_2 (struct termp*) ;
 int FUNC_3 (struct termp*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct termp *VAR_14, const struct tbl_span *VAR_15,
    const struct tbl_span *VAR_16, const struct tbl_span *VAR_17, int VAR_18)
{
 const struct tbl_cell *VAR_19;
 const struct tbl_cell *VAR_20;
 const struct tbl_cell *VAR_21;
 const struct tbl_dat *VAR_22;
 const struct roffcol *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27, VAR_28;
 int VAR_29, VAR_30;

 VAR_19 = VAR_15 == ((void*)0) ? ((void*)0) : VAR_15->layout->first;
 VAR_20 = VAR_16 == ((void*)0) ? ((void*)0) : VAR_16->layout->first;
 VAR_21 = VAR_17 == ((void*)0) ? ((void*)0) : VAR_17->layout->first;
 VAR_22 = ((void*)0);
 if (VAR_17 != ((void*)0)) {
  if (VAR_17->pos == VAR_10)
   VAR_22 = VAR_17->first;
  else if (VAR_17->next != ((void*)0))
   VAR_22 = VAR_17->next->first;
 }
 VAR_24 = VAR_16->opts->opts;
 VAR_25 = VAR_24 & VAR_9 ? (VAR_14->enc == VAR_13 ? 2 : 1) :
     VAR_24 & (VAR_8 | VAR_7) ? 1 : 0;
 VAR_26 = VAR_18 == VAR_9 || VAR_18 == VAR_8 ? VAR_25 :
     VAR_16->pos == VAR_11 ? 2 : 1;



 if (VAR_14->viscol == 0) {
  (*VAR_14->advance)(VAR_14, VAR_14->tcols->offset);
  VAR_14->viscol = VAR_14->tcols->offset;
 }
 if (VAR_18 != 0)
  FUNC_3(VAR_14,
      (VAR_15 == ((void*)0) ? 0 : VAR_4 * VAR_25) +
      (VAR_17 == ((void*)0) ? 0 : VAR_0 * VAR_25) +
      (VAR_15 == ((void*)0) || VAR_21 == ((void*)0) ||
       VAR_21->pos != VAR_5 ? VAR_3 * VAR_26 : 0), 1);

 VAR_23 = VAR_14->tbl.cols;
 for (;;) {
  if (VAR_20 == ((void*)0))
   VAR_23++;
  else
   VAR_23 = VAR_14->tbl.cols + VAR_20->col;



  VAR_27 = VAR_19 == ((void*)0) || VAR_21 == ((void*)0) ||
      (VAR_21->pos != VAR_5 &&
       (VAR_22 == ((void*)0) || VAR_22->string == ((void*)0) ||
        FUNC_0(VAR_22->string, "\\^") != 0))
      ? VAR_26 : 0;
  FUNC_3(VAR_14, VAR_1 * VAR_27,
      VAR_23->width + VAR_23->spacing / 2);







  VAR_29 = VAR_30 = 0;
  if (VAR_19 != ((void*)0)) {
   if (VAR_18 != VAR_9) {
    VAR_29 = VAR_19->vert;
    if (VAR_29 == 0 && VAR_24 & VAR_7)
     VAR_29 = 1;
   }
   VAR_19 = VAR_19->next;
  } else if (VAR_15 != ((void*)0) && VAR_24 & VAR_7)
   VAR_29 = 1;
  if (VAR_20 != ((void*)0))
   VAR_20 = VAR_20->next;
  if (VAR_21 != ((void*)0)) {
   if (VAR_18 != VAR_9) {
    VAR_30 = VAR_21->vert;
    if (VAR_30 == 0 && VAR_24 & VAR_7)
     VAR_30 = 1;
   }
   VAR_21 = VAR_21->next;
   while (VAR_22 != ((void*)0) && VAR_22->layout != VAR_21)
    VAR_22 = VAR_22->next;
  } else if (VAR_17 != ((void*)0) && VAR_24 & VAR_7)
   VAR_30 = 1;
  if (VAR_23 + 1 == VAR_14->tbl.cols + VAR_16->opts->cols)
   break;



  if (VAR_19 != ((void*)0) && VAR_19->pos == VAR_6)
   VAR_29 = 0;
  if (VAR_21 != ((void*)0) && VAR_21->pos == VAR_6)
   VAR_30 = 0;



  VAR_28 = VAR_19 == ((void*)0) || VAR_21 == ((void*)0) ||
      (VAR_21->pos != VAR_5 &&
       (VAR_22 == ((void*)0) || VAR_22->string == ((void*)0) ||
        FUNC_0(VAR_22->string, "\\^") != 0))
      ? VAR_26 : 0;



  if (VAR_23->spacing)
   FUNC_3(VAR_14, VAR_2 * VAR_27 +
       VAR_3 * VAR_28 + VAR_4 * VAR_29 + VAR_0 * VAR_30, 1);





  if (VAR_14->enc != VAR_12 || (VAR_29 < 2 && VAR_30 < 2))
   VAR_29 = VAR_30 = 0;
  if (VAR_23->spacing > 2)
   FUNC_3(VAR_14,
                            VAR_1 * VAR_28 + VAR_4 * VAR_29 + VAR_0 * VAR_30, 1);



  if (VAR_23->spacing > 4)
   FUNC_3(VAR_14,
       VAR_1 * VAR_28, (VAR_23->spacing - 3) / 2);
 }



 if (VAR_18 != 0) {
  FUNC_3(VAR_14,
      (VAR_15 == ((void*)0) ? 0 : VAR_4 * VAR_25) +
      (VAR_17 == ((void*)0) ? 0 : VAR_0 * VAR_25) +
      (VAR_15 == ((void*)0) || VAR_17 == ((void*)0) ||
       VAR_17->layout->last->pos != VAR_5 ?
       VAR_2 * VAR_26 : 0), 1);
  (*VAR_14->endline)(VAR_14);
  VAR_14->viscol = 0;
 }
}
