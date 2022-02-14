
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sta_info {struct ieee80211_sub_if_data* sdata; } ;
struct ps_data {int num_sta_ps; } ;
struct TYPE_6__ {struct ps_data ps; } ;
struct TYPE_7__ {TYPE_2__ mesh; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_4__ vif; TYPE_1__* bss; } ;
struct TYPE_5__ {struct ps_data ps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sta_info*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_4)
{
 struct sta_info *VAR_5 = VAR_4;
 struct ieee80211_sub_if_data *VAR_6 = VAR_5->sdata;
 struct ps_data *VAR_7;

 if (VAR_6->vif.type == VAR_0 ||
     VAR_6->vif.type == VAR_1)
  VAR_7 = &VAR_6->bss->ps;
 else if (FUNC_2(&VAR_6->vif))
  VAR_7 = &VAR_6->u.mesh.ps;
 else
  return;

 FUNC_1(VAR_5, VAR_2);
 if (FUNC_3(VAR_5, VAR_3))
  FUNC_0(&VAR_7->num_sta_ps);
}
