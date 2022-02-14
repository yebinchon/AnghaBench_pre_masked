
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ throttle; scalar_t__ pause; } ;
typedef TYPE_1__ mxge_softc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void
FUNC_1(mxge_softc_t *VAR_21)
{

 FUNC_0("hw.mxge.max_slices", &VAR_15);
 FUNC_0("hw.mxge.flow_control_enabled",
     &VAR_11);
 FUNC_0("hw.mxge.intr_coal_delay",
     &VAR_14);
 FUNC_0("hw.mxge.nvidia_ecrc_enable",
     &VAR_16);
 FUNC_0("hw.mxge.force_firmware",
     &VAR_12);
 FUNC_0("hw.mxge.deassert_wait",
     &VAR_10);
 FUNC_0("hw.mxge.verbose",
     &VAR_20);
 FUNC_0("hw.mxge.ticks", &VAR_19);
 FUNC_0("hw.mxge.always_promisc", &VAR_9);
 FUNC_0("hw.mxge.rss_hash_type", &VAR_17);
 FUNC_0("hw.mxge.rss_hashtype", &VAR_17);
 FUNC_0("hw.mxge.initial_mtu", &VAR_13);
 FUNC_0("hw.mxge.throttle", &VAR_18);

 if (VAR_7)
  VAR_20 = 1;
 if (VAR_14 < 0 || VAR_14 > 10*1000)
  VAR_14 = 30;
 if (VAR_19 == 0)
  VAR_19 = VAR_8 / 2;
 VAR_21->pause = VAR_11;
 if (VAR_17 < VAR_2
     || VAR_17 > VAR_3) {
  VAR_17 = VAR_4;
 }
 if (VAR_13 > VAR_0 ||
     VAR_13 < VAR_1)
  VAR_13 = VAR_0;

 if (VAR_18 && VAR_18 > VAR_5)
  VAR_18 = VAR_5;
 if (VAR_18 && VAR_18 < VAR_6)
  VAR_18 = VAR_6;
 VAR_21->throttle = VAR_18;
}
