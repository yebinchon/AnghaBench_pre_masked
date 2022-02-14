
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_tkip_seq ) (int *,int ,int *,int *) ;} ;


 int FUNC_0 (int *,int ,int *,int *) ;
 int FUNC_1 (struct ieee80211_local*,int ,int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_local *VAR_0,
        u8 VAR_1, u32 *VAR_2, u16 *VAR_3)
{
 if (VAR_0->ops->get_tkip_seq)
  VAR_0->ops->get_tkip_seq(&VAR_0->hw, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
