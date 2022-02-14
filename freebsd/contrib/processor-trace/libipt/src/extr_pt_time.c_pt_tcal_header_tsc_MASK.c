
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_time_cal {scalar_t__ tsc; scalar_t__ cyc_tsc; scalar_t__ have_mtc; } ;
struct pt_packet_tsc {scalar_t__ tsc; } ;
struct pt_config {int dummy; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (struct pt_time_cal*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(struct pt_time_cal *VAR_4,
        const struct pt_packet_tsc *VAR_5,
        const struct pt_config *VAR_6)
{
 uint64_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 (void) VAR_6;

 if (!VAR_4 || !VAR_5)
  return -VAR_3;

 VAR_8 = VAR_4->tsc;
 VAR_10 = VAR_4->cyc_tsc;

 VAR_7 = VAR_5->tsc;

 VAR_4->tsc = VAR_7;
 VAR_4->cyc_tsc = 0ull;

 if (!VAR_8 || !VAR_10)
  return 0;


 if (VAR_4->have_mtc)
  return 0;


 if (VAR_7 < VAR_8) {
  VAR_7 += 1ull << VAR_0;

  if (VAR_7 < VAR_8)
   return -VAR_2;
 }

 VAR_9 = VAR_7 - VAR_8;






 if (VAR_9 & ~(~0ull >> VAR_1))
  return -VAR_3;

 VAR_11 = (VAR_9 << VAR_1) / VAR_10;

 return FUNC_0(VAR_4, VAR_11);
}
