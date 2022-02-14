
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wkey ;
typedef int u_int16_t ;
struct wi_softc {int sc_firmware_type; int sc_encryption; int sc_sta_firmware_ver; } ;
struct wi_key {int wi_keydat; int wi_keylen; } ;
struct ieee80211vap {int iv_flags; int iv_def_txkey; TYPE_2__* iv_bss; TYPE_1__* iv_nw_keys; } ;
struct TYPE_4__ {int ni_authmode; } ;
struct TYPE_3__ {int wk_keylen; int wk_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct wi_key*,int ,int) ;
 int FUNC_3 (struct wi_softc*,int ,struct wi_key*,int) ;
 int FUNC_4 (struct wi_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct wi_softc *VAR_13, struct ieee80211vap *VAR_14)
{
 int VAR_15 = 0;
 int VAR_16, VAR_17;
 u_int16_t VAR_18;
 struct wi_key VAR_19[VAR_4];

 switch (VAR_13->sc_firmware_type) {
 case 128:
  VAR_18 = (VAR_14->iv_flags & VAR_3) ? 1 : 0;
  VAR_15 = FUNC_4(VAR_13, VAR_8, VAR_18);
  if (VAR_15)
   break;
  if ((VAR_14->iv_flags & VAR_3) == 0)
   break;
  VAR_15 = FUNC_4(VAR_13, VAR_12, VAR_14->iv_def_txkey);
  if (VAR_15)
   break;
  FUNC_2(VAR_19, 0, sizeof(VAR_19));
  for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
   VAR_17 = VAR_14->iv_nw_keys[VAR_16].wk_keylen;
   VAR_19[VAR_16].wi_keylen = FUNC_0(VAR_17);
   FUNC_1(VAR_19[VAR_16].wi_keydat, VAR_14->iv_nw_keys[VAR_16].wk_key,
       VAR_17);
  }
  VAR_15 = FUNC_3(VAR_13, VAR_7,
      VAR_19, sizeof(VAR_19));
  VAR_13->sc_encryption = 0;
  break;

 case 129:
  VAR_18 = VAR_1 | VAR_0;
  if (VAR_14->iv_flags & VAR_3) {
   if (VAR_13->sc_sta_firmware_ver < 802 ) {

    FUNC_4(VAR_13, VAR_11, 1);
   }
   FUNC_4(VAR_13, VAR_6,
       VAR_14->iv_bss->ni_authmode);
   VAR_18 |= VAR_5;
  } else {
   FUNC_4(VAR_13, VAR_6, VAR_2);
  }
  VAR_15 = FUNC_4(VAR_13, VAR_9, VAR_18);
  if (VAR_15)
   break;
  VAR_13->sc_encryption = VAR_18;
  if ((VAR_18 & VAR_5) == 0)
   break;
  VAR_15 = FUNC_4(VAR_13, VAR_10, VAR_14->iv_def_txkey);
  break;
 }
 return VAR_15;
}
