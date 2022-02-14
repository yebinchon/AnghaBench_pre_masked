
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {TYPE_2__* conf; int * bss; TYPE_1__* current_mode; } ;
struct TYPE_4__ {scalar_t__ secondary_channel; int channel; } ;
struct TYPE_3__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct hostapd_iface *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6, VAR_7;
 int VAR_8 = 2407 + 5 * VAR_3;

 if (VAR_2->current_mode->mode != VAR_0)
  return 1;

 VAR_4 = FUNC_0(VAR_2->bss[0], VAR_2->conf->channel);

 if (VAR_2->conf->secondary_channel > 0)
  VAR_5 = VAR_4 + 20;
 else
  VAR_5 = VAR_4 - 20;

 VAR_6 = (VAR_4 + VAR_5) / 2 - 25;
 VAR_7 = (VAR_4 + VAR_5) / 2 + 25;
 if ((VAR_8 < VAR_6 || VAR_8 > VAR_7))
  return 1;

 FUNC_1(VAR_1, "40 MHz affected channel range: [%d,%d] MHz",
     VAR_6, VAR_7);
 FUNC_1(VAR_1, "Neighboring BSS: freq=%d", VAR_8);
 return 0;
}
