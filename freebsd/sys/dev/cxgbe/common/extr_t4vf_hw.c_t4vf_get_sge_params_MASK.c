
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sge_params {unsigned int sge_control; int fl_starve_threshold; int fl_starve_threshold2; unsigned int page_shift; unsigned int* sge_fl_buffer_size; int spg_len; int pad_boundary; int pack_boundary; unsigned int eq_s_qpp; unsigned int iq_s_qpp; int fl_pktshift; void** timer_val; int * counter_val; } ;
struct TYPE_2__ {struct sge_params sge; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct adapter*,char*) ;
 int FUNC_1 (struct adapter*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int) ;
 int FUNC_16 (unsigned int) ;
 int FUNC_17 (unsigned int) ;
 int FUNC_18 (unsigned int) ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int FUNC_19 (int ) ;
 unsigned int FUNC_20 (int ) ;
 unsigned int FUNC_21 (scalar_t__) ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_22 (struct adapter*) ;
 void* FUNC_23 (struct adapter*,int ) ;
 scalar_t__ FUNC_24 (struct adapter*) ;
 scalar_t__ FUNC_25 (struct adapter*) ;
 unsigned int FUNC_26 (struct adapter*,int ) ;
 int FUNC_27 (struct adapter*,int,unsigned int*,unsigned int*) ;

int FUNC_28(struct adapter *VAR_25)
{
 struct sge_params *VAR_26 = &VAR_25->params.sge;
 u32 VAR_27[7], VAR_28[7];
 u32 VAR_29;
 unsigned int VAR_30, VAR_31;
 int VAR_32, VAR_33;

 VAR_27[0] = (FUNC_20(VAR_13) |
       FUNC_21(VAR_2));
 VAR_27[1] = (FUNC_20(VAR_13) |
       FUNC_21(VAR_6));
 VAR_27[2] = (FUNC_20(VAR_13) |
       FUNC_21(VAR_9));
 VAR_27[3] = (FUNC_20(VAR_13) |
       FUNC_21(VAR_10));
 VAR_27[4] = (FUNC_20(VAR_13) |
       FUNC_21(VAR_11));
 VAR_27[5] = (FUNC_20(VAR_13) |
       FUNC_21(VAR_1));
 VAR_27[6] = (FUNC_20(VAR_13) |
       FUNC_21(VAR_8));
 VAR_33 = FUNC_27(VAR_25, 7, VAR_27, VAR_28);
 if (VAR_33 != VAR_14)
  return VAR_33;

 VAR_26->sge_control = VAR_28[0];
 VAR_26->counter_val[0] = FUNC_9(VAR_28[6]);
 VAR_26->counter_val[1] = FUNC_10(VAR_28[6]);
 VAR_26->counter_val[2] = FUNC_11(VAR_28[6]);
 VAR_26->counter_val[3] = FUNC_12(VAR_28[6]);
 VAR_26->timer_val[0] = FUNC_23(VAR_25, FUNC_13(VAR_28[2]));
 VAR_26->timer_val[1] = FUNC_23(VAR_25, FUNC_14(VAR_28[2]));
 VAR_26->timer_val[2] = FUNC_23(VAR_25, FUNC_15(VAR_28[3]));
 VAR_26->timer_val[3] = FUNC_23(VAR_25, FUNC_16(VAR_28[3]));
 VAR_26->timer_val[4] = FUNC_23(VAR_25, FUNC_17(VAR_28[4]));
 VAR_26->timer_val[5] = FUNC_23(VAR_25, FUNC_18(VAR_28[4]));

 VAR_26->fl_starve_threshold = FUNC_2(VAR_28[5]) * 2 + 1;
 if (FUNC_24(VAR_25))
  VAR_26->fl_starve_threshold2 = VAR_26->fl_starve_threshold;
 else if (FUNC_25(VAR_25))
  VAR_26->fl_starve_threshold2 = FUNC_3(VAR_28[5]) * 2 + 1;
 else
  VAR_26->fl_starve_threshold2 = FUNC_8(VAR_28[5]) * 2 + 1;





 VAR_29 = FUNC_26(VAR_25, FUNC_19(VAR_0));
 VAR_30 = FUNC_7(VAR_29);

 VAR_31 = (VAR_19 +
     (VAR_20 - VAR_19) * VAR_30);
 VAR_26->page_shift = ((VAR_28[1] >> VAR_31) & VAR_16) + 10;

 for (VAR_32 = 0; VAR_32 < VAR_18; VAR_32++) {
  VAR_27[0] = (FUNC_20(VAR_13) |
      FUNC_21(VAR_5 + (4 * VAR_32)));
  VAR_33 = FUNC_27(VAR_25, 1, VAR_27, VAR_28);
  if (VAR_33 != VAR_14)
   return VAR_33;

  VAR_26->sge_fl_buffer_size[VAR_32] = VAR_28[0];
 }
 VAR_26->spg_len = VAR_26->sge_control & VAR_15 ? 128 : 64;
 VAR_26->fl_pktshift = FUNC_6(VAR_26->sge_control);
 if (FUNC_22(VAR_25) <= VAR_12) {
  VAR_26->pad_boundary = 1 << (FUNC_5(VAR_26->sge_control) +
      VAR_23);
 } else {
  VAR_26->pad_boundary = 1 << (FUNC_5(VAR_26->sge_control) +
      VAR_24);
 }
 if (FUNC_24(VAR_25))
  VAR_26->pack_boundary = VAR_26->pad_boundary;
 else {
  VAR_27[0] = (FUNC_20(VAR_13) |
        FUNC_21(VAR_3));
  VAR_33 = FUNC_27(VAR_25, 1, VAR_27, VAR_28);
  if (VAR_33 != VAR_14) {
   FUNC_0(VAR_25, "Unable to get SGE Control2; "
          "probably old firmware.\n");
   return VAR_33;
  }
  if (FUNC_4(VAR_28[0]) == 0)
   VAR_26->pack_boundary = 16;
  else
   VAR_26->pack_boundary = 1 << (FUNC_4(VAR_28[0]) +
       5);
 }






 if (!FUNC_24(VAR_25)) {
  unsigned int VAR_34;

  VAR_27[0] = (FUNC_20(VAR_13) |
        FUNC_21(VAR_4));
  VAR_27[1] = (FUNC_20(VAR_13) |
        FUNC_21(VAR_7));
  VAR_33 = FUNC_27(VAR_25, 2, VAR_27, VAR_28);
  if (VAR_33 != VAR_14) {
   FUNC_1(VAR_25, "Unable to get VF SGE Queues/Page; "
    "probably old firmware.\n");
   return VAR_33;
  }

  VAR_34 = (VAR_21 +
    (VAR_22 - VAR_21) * VAR_30);
  VAR_26->eq_s_qpp = ((VAR_28[0] >> VAR_34) & VAR_17);
  VAR_26->iq_s_qpp = ((VAR_28[1] >> VAR_34) & VAR_17);
 }

 return 0;
}
