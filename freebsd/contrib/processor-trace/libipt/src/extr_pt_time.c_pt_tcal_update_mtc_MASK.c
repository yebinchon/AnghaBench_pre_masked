
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned int uint32_t ;
struct pt_time_cal {unsigned int ctc; unsigned int have_mtc; unsigned long long cyc_mtc; unsigned int check_skl168; unsigned long long fcr; scalar_t__ lost_mtc; } ;
struct pt_packet_mtc {scalar_t__ ctc; } ;
struct pt_config {unsigned int mtc_freq; } ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_time_cal*) ;
 int FUNC_1 (struct pt_time_cal*,unsigned long long) ;
 int FUNC_2 (unsigned int*,unsigned int,unsigned int,struct pt_config const*) ;
 int FUNC_3 (unsigned long long*,unsigned int,struct pt_config const*) ;
 int VAR_1 ;

int FUNC_4(struct pt_time_cal *VAR_2,
        const struct pt_packet_mtc *VAR_3,
        const struct pt_config *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 uint64_t VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (!VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_1;

 VAR_5 = VAR_2->ctc;
 VAR_8 = VAR_2->have_mtc;
 VAR_10 = VAR_2->cyc_mtc;
 VAR_9 = VAR_2->check_skl168;


 VAR_2->check_skl168 = 0;

 VAR_6 = (uint32_t) VAR_3->ctc << VAR_4->mtc_freq;


 if (!VAR_8) {
  VAR_2->cyc_mtc = 0ull;
  VAR_2->ctc = VAR_6;
  VAR_2->have_mtc = 1;

  return 0;
 }




 if (!VAR_10)
  return 0;


 VAR_2->have_mtc = 1;
 VAR_2->cyc_mtc = 0ull;
 VAR_2->ctc = VAR_6;


 VAR_2->lost_mtc += 1;

 VAR_13 = FUNC_2(&VAR_7, VAR_6, VAR_5, VAR_4);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_3(&VAR_11, VAR_7, VAR_4);
 if (VAR_13 < 0)
  return VAR_13;






 if (VAR_11 & ~(~0ull >> VAR_0))
  return -VAR_1;

 VAR_12 = (VAR_11 << VAR_0) / VAR_10;
 if (VAR_9) {

  if ((1u << VAR_4->mtc_freq) < VAR_7)
   return 0;
  if ((VAR_4->mtc_freq < 10) && FUNC_0(VAR_2)) {
   uint64_t VAR_14;




   VAR_14 = (VAR_2->fcr * (VAR_10 + 0xf00)) >> VAR_0;





   if (VAR_14 < VAR_11)
    return 0;
  }
 }

 VAR_13 = FUNC_1(VAR_2, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_2->lost_mtc = 0;

 return 0;
}
