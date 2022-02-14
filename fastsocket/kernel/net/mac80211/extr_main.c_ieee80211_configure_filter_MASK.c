
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_local {unsigned int filter_flags; int filter_lock; int mc_list; int mc_count; scalar_t__ fif_pspoll; scalar_t__ fif_other_bss; scalar_t__ fif_control; scalar_t__ fif_plcpfail; scalar_t__ fif_fcsfail; scalar_t__ probe_req_reg; scalar_t__ fif_probe_req; int scanning; scalar_t__ monitors; int iff_allmultis; int iff_promiscs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_local*,unsigned int,unsigned int*,int ) ;
 int FUNC_3 (struct ieee80211_local*,int ,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct ieee80211_local *VAR_11)
{
 u64 VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14 = 0;

 if (FUNC_1(&VAR_11->iff_promiscs))
  VAR_14 |= VAR_7;

 if (FUNC_1(&VAR_11->iff_allmultis))
  VAR_14 |= VAR_0;

 if (VAR_11->monitors || FUNC_6(VAR_10, &VAR_11->scanning) ||
     FUNC_6(VAR_9, &VAR_11->scanning))
  VAR_14 |= VAR_1;

 if (VAR_11->fif_probe_req || VAR_11->probe_req_reg)
  VAR_14 |= VAR_6;

 if (VAR_11->fif_fcsfail)
  VAR_14 |= VAR_3;

 if (VAR_11->fif_plcpfail)
  VAR_14 |= VAR_5;

 if (VAR_11->fif_control)
  VAR_14 |= VAR_2;

 if (VAR_11->fif_other_bss)
  VAR_14 |= VAR_4;

 if (VAR_11->fif_pspoll)
  VAR_14 |= VAR_8;

 FUNC_4(&VAR_11->filter_lock);
 VAR_13 = VAR_11->filter_flags ^ VAR_14;




 VAR_12 = FUNC_3(VAR_11, VAR_11->mc_count, VAR_11->mc_list);

 FUNC_5(&VAR_11->filter_lock);


 VAR_14 |= (1<<31);

 FUNC_2(VAR_11, VAR_13, &VAR_14, VAR_12);

 FUNC_0(VAR_14 & (1<<31));

 VAR_11->filter_flags = VAR_14 & ~(1<<31);
}
