
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ifnet {struct ieee80211vap* if_softc; } ;
struct ifmedia_entry {int dummy; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct ieee80211vap {scalar_t__ iv_des_mode; int iv_flags; TYPE_1__ iv_media; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifmedia_entry*,int ,scalar_t__*) ;

int
FUNC_1(struct ifnet *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_1->if_softc;
 struct ifmedia_entry *VAR_3 = VAR_2->iv_media.ifm_cur;
 uint16_t VAR_4;

 if (!FUNC_0(VAR_3, VAR_2->iv_flags, &VAR_4))
  return VAR_0;
 if (VAR_2->iv_des_mode != VAR_4) {
  VAR_2->iv_des_mode = VAR_4;

 }
 return 0;
}
