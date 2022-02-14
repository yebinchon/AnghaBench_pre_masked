
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct ttinfo {size_t tt_isdst; size_t tt_abbrind; int tt_gmtoff; } ;
struct tm {scalar_t__ tm_year; size_t tm_isdst; int * TM_ZONE; } ;
struct state {scalar_t__ const* ats; int timecnt; int typecnt; int * chars; struct ttinfo* ttis; scalar_t__* types; scalar_t__ goahead; scalar_t__ goback; } ;
typedef scalar_t__ int_fast64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tm* FUNC_0 (scalar_t__ const* const,long const,struct tm* const) ;
 struct state* VAR_2 ;
 struct tm* FUNC_1 (scalar_t__ const*,int ,struct state*,struct tm* const) ;
 int ** VAR_3 ;

__attribute__((used)) static struct tm *
FUNC_2(const time_t *const VAR_4, const long VAR_5, struct tm *const VAR_6)
{
 struct state * VAR_7;
 const struct ttinfo * VAR_8;
 int VAR_9;
 struct tm * VAR_10;
 const time_t VAR_11 = *VAR_4;

 VAR_7 = VAR_2;




 if ((VAR_7->goback && VAR_11 < VAR_7->ats[0]) ||
  (VAR_7->goahead && VAR_11 > VAR_7->ats[VAR_7->timecnt - 1])) {
   time_t VAR_12 = VAR_11;
   register time_t VAR_13;
   register time_t VAR_14;
   register int_fast64_t VAR_15;

   if (VAR_11 < VAR_7->ats[0])
    VAR_13 = VAR_7->ats[0] - VAR_11;
   else VAR_13 = VAR_11 - VAR_7->ats[VAR_7->timecnt - 1];
   --VAR_13;
   VAR_14 = VAR_13 / VAR_1 / VAR_0;
   ++VAR_14;
   VAR_15 = VAR_14;
   if (VAR_14 - VAR_15 >= 1 || VAR_15 - VAR_14 >= 1)
    return ((void*)0);
   VAR_13 = VAR_15;
   VAR_13 *= VAR_1;
   VAR_13 *= VAR_0;
   if (VAR_11 < VAR_7->ats[0])
    VAR_12 += VAR_13;
   else VAR_12 -= VAR_13;
   if (VAR_12 < VAR_7->ats[0] ||
    VAR_12 > VAR_7->ats[VAR_7->timecnt - 1])
     return ((void*)0);
   VAR_10 = FUNC_2(&VAR_12, VAR_5, VAR_6);
   if (VAR_10 == VAR_6) {
    register time_t VAR_16;

    VAR_16 = VAR_6->tm_year;
    if (VAR_11 < VAR_7->ats[0])
     VAR_16 -= VAR_15 * VAR_1;
    else VAR_16 += VAR_15 * VAR_1;
    VAR_6->tm_year = VAR_16;
    if (VAR_6->tm_year != VAR_16)
     return ((void*)0);
   }
   return VAR_10;
 }
 if (VAR_7->timecnt == 0 || VAR_11 < VAR_7->ats[0]) {
  VAR_9 = 0;
  while (VAR_7->ttis[VAR_9].tt_isdst)
   if (++VAR_9 >= VAR_7->typecnt) {
    VAR_9 = 0;
    break;
   }
 } else {
  register int VAR_17 = 1;
  register int VAR_18 = VAR_7->timecnt;

  while (VAR_17 < VAR_18) {
   register int VAR_19 = (VAR_17 + VAR_18) >> 1;

   if (VAR_11 < VAR_7->ats[VAR_19])
    VAR_18 = VAR_19;
   else VAR_17 = VAR_19 + 1;
  }
  VAR_9 = (int) VAR_7->types[VAR_17 - 1];
 }
 VAR_8 = &VAR_7->ttis[VAR_9];






 VAR_10 = FUNC_1(&VAR_11, VAR_8->tt_gmtoff, VAR_7, VAR_6);
 VAR_6->tm_isdst = VAR_8->tt_isdst;
 VAR_3[VAR_6->tm_isdst] = &VAR_7->chars[VAR_8->tt_abbrind];



 return VAR_10;
}
