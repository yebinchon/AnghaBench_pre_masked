
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sge_params {unsigned int* timer_val; int fl_starve_threshold; int fl_starve_threshold2; int eq_s_qpp; int iq_s_qpp; int page_shift; int sge_control; int spg_len; int pad_boundary; int pack_boundary; void** sge_fl_buffer_size; int fl_pktshift; int * counter_val; } ;
struct TYPE_2__ {struct sge_params sge; } ;
struct adapter {int pf; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 unsigned int FUNC_16 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_17 (struct adapter*) ;
 unsigned int FUNC_18 (struct adapter*,int ) ;
 scalar_t__ FUNC_19 (struct adapter*) ;
 scalar_t__ FUNC_20 (struct adapter*) ;
 void* FUNC_21 (struct adapter*,scalar_t__) ;

int FUNC_22(struct adapter *VAR_24)
{
 u32 VAR_25;
 struct sge_params *VAR_26 = &VAR_24->params.sge;
 unsigned VAR_27, VAR_28 = 1;

 VAR_25 = FUNC_21(VAR_24, VAR_7);
 VAR_26->counter_val[0] = FUNC_6(VAR_25);
 VAR_26->counter_val[1] = FUNC_7(VAR_25);
 VAR_26->counter_val[2] = FUNC_8(VAR_25);
 VAR_26->counter_val[3] = FUNC_9(VAR_25);

 if (FUNC_17(VAR_24) >= VAR_13) {
  VAR_25 = FUNC_21(VAR_24, VAR_8);
  VAR_28 = FUNC_16(VAR_25);
  if (VAR_28 == 0)
   VAR_28 = 1;
  else
   VAR_28 += 2;
 }

 VAR_25 = FUNC_21(VAR_24, VAR_9);
 VAR_26->timer_val[0] = FUNC_18(VAR_24, FUNC_10(VAR_25)) * VAR_28;
 VAR_26->timer_val[1] = FUNC_18(VAR_24, FUNC_11(VAR_25)) * VAR_28;
 VAR_25 = FUNC_21(VAR_24, VAR_10);
 VAR_26->timer_val[2] = FUNC_18(VAR_24, FUNC_12(VAR_25)) * VAR_28;
 VAR_26->timer_val[3] = FUNC_18(VAR_24, FUNC_13(VAR_25)) * VAR_28;
 VAR_25 = FUNC_21(VAR_24, VAR_11);
 VAR_26->timer_val[4] = FUNC_18(VAR_24, FUNC_14(VAR_25)) * VAR_28;
 VAR_26->timer_val[5] = FUNC_18(VAR_24, FUNC_15(VAR_25)) * VAR_28;

 VAR_25 = FUNC_21(VAR_24, VAR_0);
 VAR_26->fl_starve_threshold = FUNC_0(VAR_25) * 2 + 1;
 if (FUNC_19(VAR_24))
  VAR_26->fl_starve_threshold2 = VAR_26->fl_starve_threshold;
 else if (FUNC_20(VAR_24))
  VAR_26->fl_starve_threshold2 = FUNC_1(VAR_25) * 2 + 1;
 else
  VAR_26->fl_starve_threshold2 = FUNC_5(VAR_25) * 2 + 1;


 VAR_25 = FUNC_21(VAR_24, VAR_3);
 VAR_25 >>= VAR_20 +
     (VAR_21 - VAR_20) * VAR_24->pf;
 VAR_26->eq_s_qpp = VAR_25 & VAR_16;


 VAR_25 = FUNC_21(VAR_24, VAR_6);
 VAR_25 >>= VAR_20 +
     (VAR_21 - VAR_20) * VAR_24->pf;
 VAR_26->iq_s_qpp = VAR_25 & VAR_16;

 VAR_25 = FUNC_21(VAR_24, VAR_5);
 VAR_25 >>= VAR_18 +
     (VAR_19 - VAR_18) * VAR_24->pf;
 VAR_26->page_shift = (VAR_25 & VAR_15) + 10;

 VAR_25 = FUNC_21(VAR_24, VAR_1);
 VAR_26->sge_control = VAR_25;
 VAR_26->spg_len = VAR_25 & VAR_14 ? 128 : 64;
 VAR_26->fl_pktshift = FUNC_4(VAR_25);
 if (FUNC_17(VAR_24) <= VAR_12) {
  VAR_26->pad_boundary = 1 << (FUNC_3(VAR_25) +
      VAR_22);
 } else {
  VAR_26->pad_boundary = 1 << (FUNC_3(VAR_25) +
      VAR_23);
 }
 if (FUNC_19(VAR_24))
  VAR_26->pack_boundary = VAR_26->pad_boundary;
 else {
  VAR_25 = FUNC_21(VAR_24, VAR_2);
  if (FUNC_2(VAR_25) == 0)
   VAR_26->pack_boundary = 16;
  else
   VAR_26->pack_boundary = 1 << (FUNC_2(VAR_25) + 5);
 }
 for (VAR_27 = 0; VAR_27 < VAR_17; VAR_27++)
  VAR_26->sge_fl_buffer_size[VAR_27] = FUNC_21(VAR_24,
      VAR_4 + (4 * VAR_27));

 return 0;
}
