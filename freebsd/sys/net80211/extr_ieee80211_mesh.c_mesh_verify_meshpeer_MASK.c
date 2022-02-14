
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_meshpeer_ie {scalar_t__ peer_len; scalar_t__ peer_proto; int peer_rcode; int peer_linkid; } ;





 int FUNC_0 (struct ieee80211vap*,int,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_5, uint8_t VAR_6,
    const uint8_t *VAR_7)
{
 const struct ieee80211_meshpeer_ie *VAR_8 =
     (const struct ieee80211_meshpeer_ie *) VAR_7;

 if (VAR_8 == ((void*)0) ||
     VAR_8->peer_len < VAR_0 ||
     VAR_8->peer_len > VAR_1)
  return 1;
 if (VAR_8->peer_proto != VAR_2) {
  FUNC_0(VAR_5,
      VAR_3 | VAR_4,
      "Only MPM protocol is supported (proto: 0x%02X)",
      VAR_8->peer_proto);
  return 1;
 }
 switch (VAR_6) {
 case 128:
  if (VAR_8->peer_len != VAR_0)
   return 1;
  break;
 case 129:
  if (VAR_8->peer_len != VAR_0 + 2)
   return 1;
  break;
 case 130:
  if (VAR_8->peer_len < VAR_0 + 2)
   return 1;
  if (VAR_8->peer_len == (VAR_0 + 2) &&
      VAR_8->peer_linkid != 0)
   return 1;
  if (VAR_8->peer_rcode == 0)
   return 1;
  break;
 }
 return 0;
}
