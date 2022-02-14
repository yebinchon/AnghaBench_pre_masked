
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_if_managed {int mtx; int flags; int associated; } ;
struct TYPE_4__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_1__* local; TYPE_2__ u; } ;
struct TYPE_3__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_6)
{
 struct ieee80211_if_managed *VAR_7 = &VAR_6->u.mgd;
 u8 VAR_8[VAR_0];

 FUNC_3(&VAR_7->mtx);
 if (!VAR_7->associated) {
  FUNC_4(&VAR_7->mtx);
  return;
 }

 FUNC_1(VAR_6, VAR_4,
          VAR_5,
          1, VAR_8);
 VAR_7->flags &= ~VAR_3;
 FUNC_2(&VAR_6->local->hw,
     VAR_1,
     VAR_2);
 FUNC_4(&VAR_7->mtx);





 FUNC_0(VAR_6->dev, VAR_8, VAR_0);
}
