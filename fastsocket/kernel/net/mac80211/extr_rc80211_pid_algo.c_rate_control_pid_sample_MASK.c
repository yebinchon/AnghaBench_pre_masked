
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_pid_sta_info {int last_sample; int sharp_cnt; int tx_num_xmit; int last_pf; int tx_num_failed; size_t txrate_idx; int err_avg_sc; int events; } ;
struct rc_pid_rateinfo {int rev_index; scalar_t__ diff; } ;
struct rc_pid_info {int sharpen_duration; size_t oldrate; int target; int smoothing_shift; int sharpen_factor; int coeff_p; int coeff_i; int coeff_d; int sampling_period; struct rc_pid_rateinfo* rinfo; } ;
struct ieee80211_supported_band {int n_bitrates; } ;
struct ieee80211_sta {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_supported_band*,struct ieee80211_sta*,struct rc_pid_sta_info*,int,struct rc_pid_rateinfo*) ;
 int FUNC_3 (int *,int,int,int,int) ;
 int FUNC_4 (struct rc_pid_info*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct rc_pid_info *VAR_2,
        struct ieee80211_supported_band *VAR_3,
        struct ieee80211_sta *VAR_4,
        struct rc_pid_sta_info *VAR_5)
{
 struct rc_pid_rateinfo *VAR_6 = VAR_2->rinfo;
 u32 VAR_7;
 s32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16;



 VAR_16 = FUNC_1(VAR_2->sampling_period);
 if (VAR_1 - VAR_5->last_sample > 2 * VAR_16)
  VAR_5->sharp_cnt = VAR_2->sharpen_duration;

 VAR_5->last_sample = VAR_1;



 if (FUNC_5(VAR_5->tx_num_xmit == 0))
  VAR_7 = VAR_5->last_pf;
 else
  VAR_7 = VAR_5->tx_num_failed * 100 / VAR_5->tx_num_xmit;

 VAR_5->tx_num_xmit = 0;
 VAR_5->tx_num_failed = 0;


 if (VAR_2->oldrate != VAR_5->txrate_idx) {

  VAR_13 = VAR_6[VAR_2->oldrate].rev_index;
  VAR_14 = VAR_6[VAR_5->txrate_idx].rev_index;

  VAR_15 = (VAR_7 - VAR_5->last_pf);
  VAR_15 = FUNC_0(VAR_15, VAR_0);

  VAR_6[VAR_14].diff = VAR_6[VAR_13].diff + VAR_15;
  VAR_2->oldrate = VAR_5->txrate_idx;
 }
 FUNC_4(VAR_2, VAR_3->n_bitrates);


 VAR_9 = (VAR_2->target - VAR_7) << VAR_0;

 VAR_8 = VAR_5->err_avg_sc >> VAR_2->smoothing_shift;
 VAR_5->err_avg_sc = VAR_5->err_avg_sc - VAR_8 + VAR_9;
 VAR_10 = VAR_5->err_avg_sc >> VAR_2->smoothing_shift;

 VAR_11 = (VAR_7 - VAR_5->last_pf) *
    (1 + VAR_2->sharpen_factor * VAR_5->sharp_cnt);
 VAR_5->last_pf = VAR_7;
 if (VAR_5->sharp_cnt)
   VAR_5->sharp_cnt--;







 VAR_12 = (VAR_9 * VAR_2->coeff_p + VAR_10 * VAR_2->coeff_i
       + VAR_11 * VAR_2->coeff_d);
 VAR_12 = FUNC_0(VAR_12, 2 * VAR_0);


 if (VAR_12)
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_12, VAR_6);
}
