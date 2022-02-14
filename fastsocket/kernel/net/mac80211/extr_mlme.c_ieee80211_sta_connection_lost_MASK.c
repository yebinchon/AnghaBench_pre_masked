
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_if_managed {int mtx; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_sub_if_data *VAR_2,
       u8 *VAR_3, u8 VAR_4, bool VAR_5)
{
 struct ieee80211_if_managed *VAR_6 = &VAR_2->u.mgd;
 u8 VAR_7[VAR_0];

 FUNC_1(VAR_2, VAR_1, VAR_4,
          VAR_5, VAR_7);
 FUNC_3(&VAR_6->mtx);





 FUNC_0(VAR_2->dev, VAR_7, VAR_0);

 FUNC_2(&VAR_6->mtx);
}
