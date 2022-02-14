
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int MAX_BUCKET; int LOW_MASK; int SSHIFT; int nsegs; int DSIZE; int OVFL_POINT; int HIGH_MASK; int * SPARES; int exsegs; int SGSIZE; int ** dir; } ;
typedef int SEGMENT ;
typedef TYPE_1__ HTAB ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int * FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ***,int,int) ;

int
FUNC_4(HTAB *VAR_1)
{
 u_int32_t VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6;




 VAR_3 = ++VAR_1->MAX_BUCKET;
 VAR_2 = (VAR_1->MAX_BUCKET & VAR_1->LOW_MASK);

 VAR_5 = VAR_3 >> VAR_1->SSHIFT;


 if (VAR_5 >= VAR_1->nsegs) {

  if (VAR_5 >= VAR_1->DSIZE) {

   VAR_4 = VAR_1->DSIZE * sizeof(SEGMENT *);
   if (!FUNC_3(&VAR_1->dir, VAR_4, VAR_4 << 1))
    return (-1);
   VAR_1->DSIZE = VAR_4 << 1;
  }
  if ((VAR_1->dir[VAR_5] =
      FUNC_2(VAR_1->SGSIZE, sizeof(SEGMENT))) == ((void*)0))
   return (-1);
  VAR_1->exsegs++;
  VAR_1->nsegs++;
 }





 VAR_6 = FUNC_0(VAR_1->MAX_BUCKET + 1);
 if (VAR_6 > VAR_1->OVFL_POINT) {
  VAR_1->SPARES[VAR_6] = VAR_1->SPARES[VAR_1->OVFL_POINT];
  VAR_1->OVFL_POINT = VAR_6;
 }

 if (VAR_3 > VAR_1->HIGH_MASK) {

  VAR_1->LOW_MASK = VAR_1->HIGH_MASK;
  VAR_1->HIGH_MASK = VAR_3 | VAR_1->LOW_MASK;
 }

 return (FUNC_1(VAR_1, VAR_2, VAR_3));
}
