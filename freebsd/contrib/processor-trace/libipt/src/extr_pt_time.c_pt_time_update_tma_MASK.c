
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef unsigned int uint32_t ;
struct pt_time {int have_tma; int have_mtc; unsigned int ctc; unsigned int ctc_cyc; int fc; int base; int have_tsc; } ;
struct pt_packet_tma {unsigned int ctc; scalar_t__ fc; } ;
struct pt_config {unsigned int mtc_freq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct pt_time *VAR_4,
         const struct pt_packet_tma *VAR_5,
         const struct pt_config *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
 uint64_t VAR_11;

 if (!VAR_4 || !VAR_5 || !VAR_6)
  return -VAR_3;


 if (!VAR_4->have_tsc)
  return -VAR_2;


 if (VAR_4->have_tma)
  return -VAR_2;


 if (VAR_4->have_mtc)
  return -VAR_3;

 VAR_7 = VAR_5->ctc;
 VAR_11 = VAR_5->fc;

 VAR_8 = VAR_6->mtc_freq;
 VAR_9 = VAR_8 + VAR_0;




 VAR_10 = (1u << VAR_9) - 1u;

 VAR_4->have_tma = 1;
 VAR_4->base -= VAR_11;
 VAR_4->fc += VAR_11;
 if (VAR_9 <= VAR_1)
  VAR_4->have_mtc = 1;


 VAR_4->ctc = VAR_4->ctc_cyc = VAR_7 & VAR_10;

 return 0;
}
