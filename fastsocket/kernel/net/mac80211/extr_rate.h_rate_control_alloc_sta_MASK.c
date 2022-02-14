
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rate_control_ref {int priv; TYPE_1__* ops; } ;
struct ieee80211_sta {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {void* (* alloc_sta ) (int ,struct ieee80211_sta*,int ) ;} ;


 void* FUNC_0 (int ,struct ieee80211_sta*,int ) ;

__attribute__((used)) static inline void *FUNC_1(struct rate_control_ref *VAR_0,
        struct ieee80211_sta *VAR_1,
        gfp_t VAR_2)
{
 return VAR_0->ops->alloc_sta(VAR_0->priv, VAR_1, VAR_2);
}
