
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_if_mesh {int wrkq_flags; } ;
struct TYPE_3__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {int work; TYPE_2__* local; TYPE_1__ u; } ;
struct TYPE_4__ {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 =
  (struct ieee80211_sub_if_data *) VAR_1;
 struct ieee80211_if_mesh *VAR_3 = &VAR_2->u.mesh;

 FUNC_1(VAR_0, &VAR_3->wrkq_flags);

 FUNC_0(&VAR_2->local->hw, &VAR_2->work);
}
