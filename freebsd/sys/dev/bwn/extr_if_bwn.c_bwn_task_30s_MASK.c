
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int noi_running; scalar_t__ noi_nsamples; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct bwn_mac {TYPE_2__ mac_noise; TYPE_1__ mac_phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_1)
{

 if (VAR_1->mac_phy.type != VAR_0 || VAR_1->mac_noise.noi_running)
  return;
 VAR_1->mac_noise.noi_running = 1;
 VAR_1->mac_noise.noi_nsamples = 0;

 FUNC_0(VAR_1);
}
