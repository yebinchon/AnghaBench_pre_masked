
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct wpi_softc {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct wpi_softc*,scalar_t__) ;

__attribute__((used)) static uint16_t
FUNC_2(struct wpi_softc *VAR_3, struct ieee80211_channel *VAR_4)
{
 uint16_t VAR_5;

 if (VAR_4 == ((void*)0) || FUNC_0(VAR_4))
  VAR_5 = VAR_0 + VAR_1;
 else
  VAR_5 = VAR_0 + VAR_2;


 return (FUNC_1(VAR_3, VAR_5));
}
