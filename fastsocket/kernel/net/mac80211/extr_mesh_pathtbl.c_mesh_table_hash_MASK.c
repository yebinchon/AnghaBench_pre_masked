
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mesh_table {int hash_mask; int hash_rnd; } ;
struct ieee80211_sub_if_data {TYPE_1__* dev; } ;
struct TYPE_2__ {int ifindex; } ;


 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(const u8 *VAR_0, struct ieee80211_sub_if_data *VAR_1,
      struct mesh_table *VAR_2)
{

 return FUNC_0(*(u32 *)(VAR_0+2), VAR_1->dev->ifindex,
       VAR_2->hash_rnd) & VAR_2->hash_mask;
}
