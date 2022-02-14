
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint32_t ;
struct ieee80211com {int* ic_macaddr; } ;
struct urtw_softc {struct ieee80211com sc_ic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct urtw_softc*,scalar_t__,int*) ;

__attribute__((used)) static usb_error_t
FUNC_1(struct urtw_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;
 uint32_t VAR_3;
 usb_error_t VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3);
 if (VAR_4 != 0)
  goto fail;
 VAR_2->ic_macaddr[0] = VAR_3 & 0xff;
 VAR_2->ic_macaddr[1] = (VAR_3 & 0xff00) >> 8;
 VAR_4 = FUNC_0(VAR_1, VAR_0 + 1, &VAR_3);
 if (VAR_4 != 0)
  goto fail;
 VAR_2->ic_macaddr[2] = VAR_3 & 0xff;
 VAR_2->ic_macaddr[3] = (VAR_3 & 0xff00) >> 8;
 VAR_4 = FUNC_0(VAR_1, VAR_0 + 2, &VAR_3);
 if (VAR_4 != 0)
  goto fail;
 VAR_2->ic_macaddr[4] = VAR_3 & 0xff;
 VAR_2->ic_macaddr[5] = (VAR_3 & 0xff00) >> 8;
fail:
 return (VAR_4);
}
