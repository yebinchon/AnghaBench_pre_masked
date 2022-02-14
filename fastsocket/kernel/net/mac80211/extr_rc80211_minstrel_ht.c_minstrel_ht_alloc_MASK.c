
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {void* (* alloc ) (struct ieee80211_hw*,struct dentry*) ;} ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (struct ieee80211_hw*,struct dentry*) ;

__attribute__((used)) static void *
FUNC_1(struct ieee80211_hw *VAR_1, struct dentry *VAR_2)
{
 return VAR_0.alloc(VAR_1, VAR_2);
}
