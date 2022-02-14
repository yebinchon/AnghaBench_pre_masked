
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_chan_def {int width; } ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct cfg80211_chan_def *VAR_0)
{
 int VAR_1;

 switch (VAR_0->width) {
 case 132:
 case 131:
  VAR_1 = 20;
  break;
 case 130:
  VAR_1 = 40;
  break;
 case 128:
 case 129:
  VAR_1 = 80;
  break;
 case 133:
  VAR_1 = 160;
  break;
 default:
  FUNC_0(1);
  return -1;
 }
 return VAR_1;
}
