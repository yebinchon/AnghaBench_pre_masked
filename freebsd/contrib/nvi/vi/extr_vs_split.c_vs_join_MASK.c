
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jdir_t ;
struct TYPE_9__ {int dq; } ;
struct TYPE_8__ {size_t rows; scalar_t__ coff; size_t cols; scalar_t__ roff; TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(SCR *VAR_5, SCR **VAR_6, jdir_t *VAR_7)
{
 GS *VAR_8;
 SCR **VAR_9, *VAR_10;
 int VAR_11;
 size_t VAR_12;

 VAR_8 = VAR_5->gp;


 for (VAR_9 = VAR_6, VAR_12 = VAR_5->rows,
     VAR_10 = FUNC_0(VAR_8->dq);
     VAR_10 != ((void*)0); VAR_10 = FUNC_1(VAR_10, VAR_4)) {
  if (VAR_5 == VAR_10)
   continue;

  if (VAR_10->coff + VAR_10->cols + 1 != VAR_5->coff)
   continue;




  if (VAR_10->roff > VAR_5->roff + VAR_5->rows)
   continue;
  if (VAR_10->roff < VAR_5->roff) {
   if (VAR_10->roff + VAR_10->rows >= VAR_5->roff)
    break;
   continue;
  }
  if (VAR_10->roff + VAR_10->rows > VAR_5->roff + VAR_5->rows)
   break;




  VAR_12 -= VAR_10->rows;
  *VAR_9++ = VAR_10;
 }
 if (VAR_12 == 0) {
  *VAR_9 = ((void*)0);
  *VAR_7 = VAR_3;
  return (0);
 }


 for (VAR_9 = VAR_6, VAR_12 = VAR_5->rows,
     VAR_10 = FUNC_0(VAR_8->dq);
     VAR_10 != ((void*)0); VAR_10 = FUNC_1(VAR_10, VAR_4)) {
  if (VAR_5 == VAR_10)
   continue;

  if (VAR_10->coff != VAR_5->coff + VAR_5->cols + 1)
   continue;




  if (VAR_10->roff > VAR_5->roff + VAR_5->rows)
   continue;
  if (VAR_10->roff < VAR_5->roff) {
   if (VAR_10->roff + VAR_10->rows >= VAR_5->roff)
    break;
   continue;
  }
  if (VAR_10->roff + VAR_10->rows > VAR_5->roff + VAR_5->rows)
   break;




  VAR_12 -= VAR_10->rows;
  *VAR_9++ = VAR_10;
 }
 if (VAR_12 == 0) {
  *VAR_9 = ((void*)0);
  *VAR_7 = VAR_2;
  return (0);
 }


 for (VAR_11 = 0, VAR_9 = VAR_6, VAR_12 = VAR_5->cols,
     VAR_10 = FUNC_0(VAR_8->dq);
     VAR_10 != ((void*)0); VAR_10 = FUNC_1(VAR_10, VAR_4)) {
  if (VAR_5 == VAR_10)
   continue;

  if (VAR_10->roff + VAR_10->rows != VAR_5->roff)
   continue;




  if (VAR_10->coff > VAR_5->coff + VAR_5->cols)
   continue;
  if (VAR_10->coff < VAR_5->coff) {
   if (VAR_10->coff + VAR_10->cols >= VAR_5->coff)
    break;
   continue;
  }
  if (VAR_10->coff + VAR_10->cols > VAR_5->coff + VAR_5->cols)
   break;




  VAR_12 -= VAR_10->cols + VAR_11;
  VAR_11 = 1;
  *VAR_9++ = VAR_10;
 }
 if (VAR_12 == 0) {
  *VAR_9 = ((void*)0);
  *VAR_7 = VAR_1;
  return (0);
 }


 for (VAR_11 = 0, VAR_9 = VAR_6, VAR_12 = VAR_5->cols,
     VAR_10 = FUNC_0(VAR_8->dq);
     VAR_10 != ((void*)0); VAR_10 = FUNC_1(VAR_10, VAR_4)) {
  if (VAR_5 == VAR_10)
   continue;

  if (VAR_10->roff != VAR_5->roff + VAR_5->rows)
   continue;




  if (VAR_10->coff > VAR_5->coff + VAR_5->cols)
   continue;
  if (VAR_10->coff < VAR_5->coff) {
   if (VAR_10->coff + VAR_10->cols >= VAR_5->coff)
    break;
   continue;
  }
  if (VAR_10->coff + VAR_10->cols > VAR_5->coff + VAR_5->cols)
   break;




  VAR_12 -= VAR_10->cols + VAR_11;
  VAR_11 = 1;
  *VAR_9++ = VAR_10;
 }
 if (VAR_12 == 0) {
  *VAR_9 = ((void*)0);
  *VAR_7 = VAR_0;
  return (0);
 }
 return (1);
}
