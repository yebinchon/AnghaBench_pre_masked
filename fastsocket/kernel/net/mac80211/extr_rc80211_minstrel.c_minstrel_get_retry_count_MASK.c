
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_rate {unsigned int adjusted_retry_count; int retry_count_cts; int retry_count_rtscts; } ;
struct TYPE_2__ {scalar_t__ use_cts_prot; scalar_t__ use_rts; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static inline unsigned int
FUNC_2(struct minstrel_rate *VAR_0,
                         struct ieee80211_tx_info *VAR_1)
{
 unsigned int VAR_2 = VAR_0->adjusted_retry_count;

 if (VAR_1->control.use_rts)
  VAR_2 = FUNC_0(2U, FUNC_1(VAR_0->retry_count_rtscts, VAR_2));
 else if (VAR_1->control.use_cts_prot)
  VAR_2 = FUNC_0(2U, FUNC_1(VAR_0->retry_count_cts, VAR_2));
 return VAR_2;
}
