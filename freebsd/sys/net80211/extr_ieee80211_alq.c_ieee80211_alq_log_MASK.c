
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct ieee80211vap {TYPE_1__* iv_ifp; } ;
struct ieee80211com {int dummy; } ;
struct ieee80211_alq_rec {int r_wlan; void* r_threadid; void* r_len; void* r_op; void* r_flags; void* r_src; int r_timestamp; } ;
struct ale {scalar_t__ ae_data; } ;
struct TYPE_4__ {scalar_t__ td_tid; } ;
struct TYPE_3__ {int if_dunit; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct ale*) ;
 TYPE_2__* VAR_2 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 int * VAR_3 ;
 struct ale* FUNC_4 (size_t) ;
 int FUNC_5 (char*,int const*,size_t) ;
 int VAR_4 ;

int
FUNC_6(struct ieee80211com *VAR_5, struct ieee80211vap *VAR_6,
    uint32_t VAR_7, uint32_t VAR_8, uint16_t VAR_9, const uint8_t *VAR_10,
    size_t VAR_11)
{
 struct ale *VAR_12;
 struct ieee80211_alq_rec *VAR_13;
 char *VAR_14;


 if (VAR_3 == ((void*)0))
  return (0);

 if (VAR_11 > VAR_1)
  return (VAR_0);

 VAR_12 = FUNC_4(VAR_11);
 if (! VAR_12)
  return (VAR_0);

 VAR_13 = (struct ieee80211_alq_rec *) VAR_12->ae_data;
 VAR_14 = ((char *) VAR_13) + sizeof(struct ieee80211_alq_rec);
 VAR_13->r_timestamp = FUNC_3(VAR_4);
 if (VAR_6 != ((void*)0)) {
  VAR_13->r_wlan = FUNC_1(VAR_6->iv_ifp->if_dunit);
 } else {
  VAR_13->r_wlan = 0xffff;
 }
 VAR_13->r_src = FUNC_1(VAR_9);
 VAR_13->r_flags = FUNC_2(VAR_8);
 VAR_13->r_op = FUNC_2(VAR_7);
 VAR_13->r_len = FUNC_2(VAR_11 + sizeof(struct ieee80211_alq_rec));
 VAR_13->r_threadid = FUNC_2((uint32_t) VAR_2->td_tid);

 if (VAR_10 != ((void*)0))
  FUNC_5(VAR_14, VAR_10, VAR_11);

 FUNC_0(VAR_3, VAR_12);

 return (0);
}
