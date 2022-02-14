
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {scalar_t__ ic_nonerpsta; int ic_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static uint8_t *
FUNC_0(uint8_t *VAR_6, struct ieee80211com *VAR_7)
{
 uint8_t VAR_8;

 *VAR_6++ = VAR_0;
 *VAR_6++ = 1;
 VAR_8 = 0;
 if (VAR_7->ic_nonerpsta != 0)
  VAR_8 |= VAR_2;
 if (VAR_7->ic_flags & VAR_5)
  VAR_8 |= VAR_3;
 if (VAR_7->ic_flags & VAR_4)
  VAR_8 |= VAR_1;
 *VAR_6++ = VAR_8;
 return VAR_6;
}
