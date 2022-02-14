
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {int* grouping; int thousands_sep; } ;
struct grouping_state {int* grouping; int thousep_len; int nseps; int nrepeats; int lead; int thousands_sep; } ;
typedef int locale_t ;


 int VAR_0 ;
 struct lconv* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct grouping_state *VAR_1, int VAR_2, locale_t VAR_3)
{
 struct lconv *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 VAR_1->grouping = VAR_4->grouping;
 VAR_1->thousands_sep = VAR_4->thousands_sep;
 VAR_1->thousep_len = FUNC_1(VAR_1->thousands_sep);

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
 return ((VAR_1->nseps + VAR_1->nrepeats) * VAR_1->thousep_len);
}
