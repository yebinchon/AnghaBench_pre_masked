
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211s_hdr {int flags; } ;


 int VAR_0 ;



unsigned int FUNC_0(struct ieee80211s_hdr *VAR_1)
{
 int VAR_2 = VAR_1->flags & VAR_0;

 switch (VAR_2) {
 default:
 case 0:
  return 6;
 case 129:
  return 12;
 case 128:
  return 18;
 }
}
