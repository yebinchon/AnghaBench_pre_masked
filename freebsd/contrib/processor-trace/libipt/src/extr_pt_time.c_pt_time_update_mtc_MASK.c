
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct pt_time {int have_tsc; int have_tma; int have_mtc; int ctc; unsigned long long fc; int ctc_cyc; int lost_mtc; scalar_t__ base; scalar_t__ tsc; scalar_t__ lost_cyc; } ;
struct pt_packet_mtc {scalar_t__ ctc; } ;
struct pt_config {int mtc_freq; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,int,int,struct pt_config const*) ;
 int FUNC_1 (scalar_t__*,int,struct pt_config const*) ;
 int VAR_3 ;

int FUNC_2(struct pt_time *VAR_4,
         const struct pt_packet_mtc *VAR_5,
         const struct pt_config *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;
 uint64_t VAR_10, VAR_11;
 uint8_t VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 if (!VAR_4 || !VAR_5 || !VAR_6)
  return -VAR_3;

 VAR_14 = VAR_4->have_tsc;
 VAR_15 = VAR_4->have_tma;
 VAR_16 = VAR_4->have_mtc;







 if (VAR_14 && !VAR_15)
  return 0;

 VAR_11 = VAR_4->base;
 VAR_7 = VAR_4->ctc;
 VAR_12 = VAR_6->mtc_freq;

 VAR_8 = (uint32_t) VAR_5->ctc << VAR_12;


 if (VAR_4->fc || VAR_4->lost_cyc || !VAR_16)
  VAR_4->ctc_cyc = VAR_8;


 VAR_4->have_mtc = 1;
 VAR_4->fc = 0ull;
 VAR_4->ctc = VAR_8;


 VAR_4->lost_cyc = 0;




 if (!VAR_16) {
  uint32_t VAR_17, VAR_18;
  if (!VAR_15)
   return 0;




  if (VAR_7 & ~(uint32_t) VAR_2)
   return -VAR_3;




  VAR_17 = VAR_8 & (uint32_t) VAR_2;
  VAR_18 = VAR_8 & ~(uint32_t) VAR_2;
  if (VAR_17 < VAR_7) {
   VAR_18 -= 1u << VAR_1;
   VAR_18 &= (uint32_t) VAR_0 << VAR_12;
  }

  VAR_7 |= VAR_18;
 }

 VAR_13 = FUNC_0(&VAR_9, VAR_8, VAR_7, VAR_6);
 if (VAR_13 < 0) {
  VAR_4->lost_mtc += 1;
  return VAR_13;
 }

 VAR_13 = FUNC_1(&VAR_10, VAR_9, VAR_6);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_11 += VAR_10;
 VAR_4->tsc = VAR_4->base = VAR_11;

 return 0;
}
