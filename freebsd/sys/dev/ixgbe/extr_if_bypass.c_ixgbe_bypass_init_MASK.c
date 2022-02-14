
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct TYPE_3__ {int (* bypass_set ) (struct ixgbe_hw*,int ,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct adapter {int feat_cap; int feat_en; int dev; struct ixgbe_hw hw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sysctl_oid* FUNC_0 (int ,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_1 (int ,struct sysctl_oid_list*,int ,char*,int,struct adapter*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (int*,int*) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int,int) ;

void
FUNC_9(struct adapter *VAR_22)
{
 struct ixgbe_hw *VAR_23 = &VAR_22->hw;
 device_t VAR_24 = VAR_22->dev;
 struct sysctl_oid *VAR_25;
 struct sysctl_oid_list *VAR_26;
 u32 VAR_27, VAR_28, VAR_29, VAR_30;

 if (!(VAR_22->feat_cap & VAR_10))
  return;


 FUNC_7(&VAR_30, &VAR_29);

 VAR_27 = VAR_2
      | VAR_4
      | VAR_1;

 VAR_28 = (VAR_29 & VAR_2)
       | VAR_3
       | VAR_0;

 FUNC_6(VAR_22);
 VAR_23->mac.ops.bypass_set(VAR_23, VAR_5, VAR_27, VAR_28);
 FUNC_5(VAR_22);
 FUNC_1(FUNC_3(VAR_24),
     FUNC_2(FUNC_4(VAR_24)),
     VAR_11, "bypass_log", VAR_9 | VAR_7,
     VAR_22, 0, VAR_14, "I", "Bypass Log");


 VAR_25 = FUNC_0(FUNC_3(VAR_24),
     FUNC_2(FUNC_4(VAR_24)),
     VAR_11, "bypass", VAR_6, ((void*)0), "Bypass");

 VAR_26 = FUNC_2(VAR_25);

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "version", VAR_9 | VAR_6,
     VAR_22, 0, VAR_19, "I", "Bypass Version");

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "state", VAR_9 | VAR_7,
     VAR_22, 0, VAR_17, "I", "Bypass State");

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "timeout", VAR_9 | VAR_7,
     VAR_22, 0, VAR_18, "I", "Bypass Timeout");

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "main_on", VAR_9 | VAR_7,
     VAR_22, 0, VAR_16, "I", "Bypass Main On");

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "main_off", VAR_9 | VAR_7,
     VAR_22, 0, VAR_15, "I", "Bypass Main Off");

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "aux_on", VAR_9 | VAR_7,
     VAR_22, 0, VAR_13, "I", "Bypass Aux On");

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "aux_off", VAR_9 | VAR_7,
     VAR_22, 0, VAR_12, "I", "Bypass Aux Off");

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "wd_set", VAR_9 | VAR_7,
     VAR_22, 0, VAR_21, "I", "Set BP Watchdog");

 FUNC_1(FUNC_3(VAR_24), VAR_26,
     VAR_11, "wd_reset", VAR_9 | VAR_8,
     VAR_22, 0, VAR_20, "S", "Bypass WD Reset");

 VAR_22->feat_en |= VAR_10;
}
