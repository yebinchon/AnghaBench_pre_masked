
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; } ;
struct TYPE_3__ {int secondary_channel; scalar_t__ channel; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct hostapd_iface *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_0, "ACS: Adjusting VHT center frequency");

 switch (FUNC_0(VAR_2->conf)) {
 case 128:
  VAR_3 = 2 * VAR_2->conf->secondary_channel;
  break;
 case 129:
  VAR_3 = 6;
  break;
 case 130:
  VAR_3 = 14;
  break;
 default:


  FUNC_2(VAR_1,
      "ACS: Only VHT20/40/80/160 is supported now");
  return;
 }

 FUNC_1(VAR_2->conf,
          VAR_2->conf->channel + VAR_3);
}
