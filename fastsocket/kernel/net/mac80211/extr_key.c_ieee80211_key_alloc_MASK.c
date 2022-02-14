
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_mmie {int dummy; } ;
struct TYPE_12__ {int cipher; int keyidx; size_t keylen; int icv_len; int key; int iv_len; scalar_t__ flags; } ;
struct TYPE_10__ {int tfm; int * rx_pn; } ;
struct TYPE_9__ {int tfm; int ** rx_pn; } ;
struct TYPE_8__ {int txlock; TYPE_1__* rx; } ;
struct TYPE_11__ {TYPE_4__ aes_cmac; TYPE_3__ ccmp; TYPE_2__ tkip; } ;
struct ieee80211_key {int list; TYPE_6__ conf; TYPE_5__ u; scalar_t__ flags; } ;
struct TYPE_7__ {int iv16; int iv32; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_key* FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (struct ieee80211_key*) ;
 struct ieee80211_key* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int const*,size_t) ;
 int FUNC_12 (int *) ;

struct ieee80211_key *FUNC_13(u32 VAR_13, int VAR_14, size_t VAR_15,
       const u8 *VAR_16,
       size_t VAR_17, const u8 *VAR_18)
{
 struct ieee80211_key *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 FUNC_0(VAR_14 < 0 || VAR_14 >= VAR_7 + VAR_8);

 VAR_19 = FUNC_10(sizeof(struct ieee80211_key) + VAR_15, VAR_5);
 if (!VAR_19)
  return FUNC_1(-VAR_4);





 VAR_19->conf.flags = 0;
 VAR_19->flags = 0;

 VAR_19->conf.cipher = VAR_13;
 VAR_19->conf.keyidx = VAR_14;
 VAR_19->conf.keylen = VAR_15;
 switch (VAR_13) {
 case 128:
 case 129:
  VAR_19->conf.iv_len = VAR_12;
  VAR_19->conf.icv_len = VAR_11;
  break;
 case 130:
  VAR_19->conf.iv_len = VAR_10;
  VAR_19->conf.icv_len = VAR_9;
  if (VAR_18) {
   for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
    VAR_19->u.tkip.rx[VAR_20].iv32 =
     FUNC_6(&VAR_18[2]);
    VAR_19->u.tkip.rx[VAR_20].iv16 =
     FUNC_5(VAR_18);
   }
  }
  FUNC_12(&VAR_19->u.tkip.txlock);
  break;
 case 131:
  VAR_19->conf.iv_len = VAR_0;
  VAR_19->conf.icv_len = VAR_1;
  if (VAR_18) {
   for (VAR_20 = 0; VAR_20 < VAR_6 + 1; VAR_20++)
    for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++)
     VAR_19->u.ccmp.rx_pn[VAR_20][VAR_21] =
      VAR_18[VAR_2 - VAR_21 - 1];
  }




  VAR_19->u.ccmp.tfm = FUNC_8(VAR_16);
  if (FUNC_3(VAR_19->u.ccmp.tfm)) {
   VAR_22 = FUNC_4(VAR_19->u.ccmp.tfm);
   FUNC_9(VAR_19);
   return FUNC_1(VAR_22);
  }
  break;
 case 132:
  VAR_19->conf.iv_len = 0;
  VAR_19->conf.icv_len = sizeof(struct ieee80211_mmie);
  if (VAR_18)
   for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++)
    VAR_19->u.aes_cmac.rx_pn[VAR_21] =
     VAR_18[VAR_3 - VAR_21 - 1];




  VAR_19->u.aes_cmac.tfm =
   FUNC_7(VAR_16);
  if (FUNC_3(VAR_19->u.aes_cmac.tfm)) {
   VAR_22 = FUNC_4(VAR_19->u.aes_cmac.tfm);
   FUNC_9(VAR_19);
   return FUNC_1(VAR_22);
  }
  break;
 }
 FUNC_11(VAR_19->conf.key, VAR_16, VAR_15);
 FUNC_2(&VAR_19->list);

 return VAR_19;
}
