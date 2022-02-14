
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grouping_state {int* grouping; int nseps; int nrepeats; int lead; int thousands_sep; } ;
typedef int locale_t ;
struct TYPE_2__ {int* grouping; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct grouping_state *VAR_1, int VAR_2, locale_t VAR_3)
{

 VAR_1->grouping = FUNC_1(VAR_3)->grouping;
 VAR_1->thousands_sep = FUNC_0(VAR_3);

 VAR_1->nseps = VAR_1->nrepeats = 0;
 VAR_1->lead = VAR_2;
 while (*VAR_1->grouping != VAR_0) {
  if (VAR_1->lead <= *VAR_1->grouping)
   break;
  VAR_1->lead -= *VAR_1->grouping;
  if (*(VAR_1->grouping+1)) {
   VAR_1->nseps++;
   VAR_1->grouping++;
  } else
   VAR_1->nrepeats++;
 }
 return (VAR_1->nseps + VAR_1->nrepeats);
}
