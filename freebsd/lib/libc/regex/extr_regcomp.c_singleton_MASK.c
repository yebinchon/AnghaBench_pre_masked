
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wint_t ;
struct TYPE_4__ {int nwides; scalar_t__ nranges; scalar_t__ ntypes; scalar_t__ icase; scalar_t__* wides; } ;
typedef TYPE_1__ cset ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static wint_t
FUNC_1(cset *VAR_2)
{
 wint_t VAR_3, VAR_4, VAR_5;

 for (VAR_3 = VAR_5 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(VAR_2, VAR_3)) {
   VAR_5++;
   VAR_4 = VAR_3;
  }
 if (VAR_5 == 1)
  return (VAR_4);
 if (VAR_2->nwides == 1 && VAR_2->nranges == 0 && VAR_2->ntypes == 0 &&
     VAR_2->icase == 0)
  return (VAR_2->wides[0]);

 return (VAR_1);
}
