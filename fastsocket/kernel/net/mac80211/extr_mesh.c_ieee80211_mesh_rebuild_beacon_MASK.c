
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_if_mesh {int mtx; int beacon; } ;
struct beacon_data {int dummy; } ;


 int FUNC_0 (struct ieee80211_if_mesh*) ;
 int FUNC_1 (struct beacon_data*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct beacon_data* FUNC_5 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_if_mesh *VAR_1)
{
 struct beacon_data *VAR_2;
 int VAR_3;

 FUNC_3(&VAR_1->mtx);

 VAR_2 = FUNC_5(VAR_1->beacon,
         FUNC_2(&VAR_1->mtx));
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)

  goto out;

 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);
out:
 FUNC_4(&VAR_1->mtx);
 return VAR_3;
}
