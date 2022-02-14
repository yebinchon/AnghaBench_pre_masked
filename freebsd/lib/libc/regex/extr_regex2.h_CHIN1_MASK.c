
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wint_t ;
struct TYPE_5__ {int* bmp; int invert; unsigned int nwides; scalar_t__* wides; unsigned int nranges; unsigned int ntypes; int * types; TYPE_1__* ranges; scalar_t__ icase; } ;
typedef TYPE_2__ cset ;
struct TYPE_4__ {scalar_t__ min; scalar_t__ max; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(cset *VAR_1, wint_t VAR_2)
{
 unsigned int VAR_3;

 FUNC_0(VAR_2 >= 0);
 if (VAR_2 < VAR_0)
  return (((VAR_1->bmp[VAR_2 >> 3] & (1 << (VAR_2 & 7))) != 0) ^
      VAR_1->invert);
 for (VAR_3 = 0; VAR_3 < VAR_1->nwides; VAR_3++) {
  if (VAR_1->icase) {
   if (VAR_2 == FUNC_2(VAR_1->wides[VAR_3]) ||
       VAR_2 == FUNC_3(VAR_1->wides[VAR_3]))
    return (!VAR_1->invert);
  } else if (VAR_2 == VAR_1->wides[VAR_3])
   return (!VAR_1->invert);
 }
 for (VAR_3 = 0; VAR_3 < VAR_1->nranges; VAR_3++)
  if (VAR_1->ranges[VAR_3].min <= VAR_2 && VAR_2 <= VAR_1->ranges[VAR_3].max)
   return (!VAR_1->invert);
 for (VAR_3 = 0; VAR_3 < VAR_1->ntypes; VAR_3++)
  if (FUNC_1(VAR_2, VAR_1->types[VAR_3]))
   return (!VAR_1->invert);
 return (VAR_1->invert);
}
