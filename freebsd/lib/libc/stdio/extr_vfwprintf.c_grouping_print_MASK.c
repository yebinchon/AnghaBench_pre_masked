
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_state {int dummy; } ;
struct grouping_state {scalar_t__ nseps; scalar_t__ nrepeats; int * grouping; int thousands_sep; int lead; } ;
typedef int locale_t ;
typedef int CHAR ;


 scalar_t__ FUNC_0 (struct io_state*,int *,int,int ) ;
 scalar_t__ FUNC_1 (struct io_state*,int const*,int const*,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct grouping_state *VAR_1, struct io_state *VAR_2,
        const CHAR *VAR_3, const CHAR *VAR_4, locale_t VAR_5)
{
 const CHAR *VAR_6 = VAR_3;

 if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1->lead, VAR_0, VAR_5))
  return (-1);
 VAR_3 += VAR_1->lead;
 while (VAR_1->nseps > 0 || VAR_1->nrepeats > 0) {
  if (VAR_1->nrepeats > 0)
   VAR_1->nrepeats--;
  else {
   VAR_1->grouping--;
   VAR_1->nseps--;
  }
  if (FUNC_0(VAR_2, &VAR_1->thousands_sep, 1, VAR_5))
   return (-1);
  if (FUNC_1(VAR_2, VAR_3, VAR_4, *VAR_1->grouping, VAR_0, VAR_5))
   return (-1);
  VAR_3 += *VAR_1->grouping;
 }
 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;
 return (VAR_3 - VAR_6);
}
