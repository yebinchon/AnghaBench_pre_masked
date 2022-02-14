
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {int dot11MeshHWMPRootMode; int element_ttl; int dot11MeshHWMPactivePathToRootTimeout; scalar_t__ dot11MeshGateAnnouncementProtocol; int dot11MeshHWMPRannInterval; } ;
struct ieee80211_if_mesh {int preq_id; TYPE_3__ mshcfg; int sn; } ;
struct TYPE_4__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ,int,int*,int ,scalar_t__,int ,int ,int ,int ,int ,struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_7)
{
 struct ieee80211_if_mesh *VAR_8 = &VAR_7->u.mesh;
 u32 VAR_9 = VAR_8->mshcfg.dot11MeshHWMPRannInterval;
 u8 VAR_10, VAR_11 = 0;

 VAR_10 = (VAR_8->mshcfg.dot11MeshGateAnnouncementProtocol)
   ? VAR_5 : 0;

 switch (VAR_8->mshcfg.dot11MeshHWMPRootMode) {
 case 128:
  FUNC_1(VAR_4, VAR_10, VAR_7->vif.addr,
          FUNC_0(++VAR_8->sn),
          0, ((void*)0), 0, VAR_6,
          0, VAR_8->mshcfg.element_ttl,
          FUNC_0(VAR_9), 0, 0, VAR_7);
  break;
 case 129:
  VAR_10 |= VAR_0;
 case 130:
  VAR_9 = VAR_8->mshcfg.dot11MeshHWMPactivePathToRootTimeout;
  VAR_11 |= VAR_1 |
    VAR_2;
  FUNC_1(VAR_3, VAR_10, VAR_7->vif.addr,
    FUNC_0(++VAR_8->sn), VAR_11,
    (u8 *) VAR_6, 0, VAR_6,
    0, VAR_8->mshcfg.element_ttl,
    FUNC_0(VAR_9),
    0, FUNC_0(VAR_8->preq_id++), VAR_7);
  break;
 default:
  FUNC_2(VAR_7, "Proactive mechanism not supported\n");
  return;
 }
}
