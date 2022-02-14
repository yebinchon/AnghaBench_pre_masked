
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wint_t ;
struct parse {int dummy; } ;
struct TYPE_3__ {int* bmp; int* wides; scalar_t__ icase; scalar_t__ nwides; } ;
typedef TYPE_1__ cset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int* FUNC_2 (int*,scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct parse *VAR_2, cset *VAR_3, wint_t VAR_4)
{
 wint_t VAR_5, *VAR_6;
 FUNC_1(VAR_4 >= 0);
 if (VAR_4 < VAR_0)
  VAR_3->bmp[VAR_4 >> 3] |= 1 << (VAR_4 & 7);
 else {
  VAR_6 = FUNC_2(VAR_3->wides, VAR_3->nwides + 1,
      sizeof(*VAR_3->wides));
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_1);
   return;
  }
  VAR_3->wides = VAR_6;
  VAR_3->wides[VAR_3->nwides++] = VAR_4;
 }
 if (VAR_3->icase) {
  if ((VAR_5 = FUNC_3(VAR_4)) < VAR_0)
   VAR_3->bmp[VAR_5 >> 3] |= 1 << (VAR_5 & 7);
  if ((VAR_5 = FUNC_4(VAR_4)) < VAR_0)
   VAR_3->bmp[VAR_5 >> 3] |= 1 << (VAR_5 & 7);
 }
}
