
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ FreqBand; int ChnlWidth; int ExtChnlOffset; } ;
struct TYPE_5__ {TYPE_1__ channelFlags; } ;
typedef TYPE_2__ MWL_HAL_CHANNEL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static uint32_t
FUNC_1(const MWL_HAL_CHANNEL *VAR_9)
{
 uint32_t VAR_10;





 VAR_10 = (VAR_9->channelFlags.FreqBand == VAR_8) ?
  VAR_6 : VAR_7;
 switch (VAR_9->channelFlags.ChnlWidth) {
 case 133:
  VAR_10 |= VAR_0;
  break;
 case 132:
  VAR_10 |= VAR_1;
  break;
 case 131:
 default:
  VAR_10 |= VAR_2;
  break;
 }
 switch (VAR_9->channelFlags.ExtChnlOffset) {
 case 128:
  VAR_10 |= VAR_5;
  break;
 case 130:
  VAR_10 |= VAR_3;
  break;
 case 129:
  VAR_10 |= VAR_4;
  break;
 }
 return FUNC_0(VAR_10);
}
