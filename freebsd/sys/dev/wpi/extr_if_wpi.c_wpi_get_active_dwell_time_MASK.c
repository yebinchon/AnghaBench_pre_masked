
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct wpi_softc {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static uint16_t
FUNC_1(struct wpi_softc *VAR_4,
    struct ieee80211_channel *VAR_5, uint8_t VAR_6)
{

 if (VAR_5 == ((void*)0) || FUNC_0(VAR_5)) {
  return (VAR_2 +
  VAR_0 * (VAR_6 + 1));
 }


 return (VAR_3 +
     VAR_1 * (VAR_6 + 1));
}
