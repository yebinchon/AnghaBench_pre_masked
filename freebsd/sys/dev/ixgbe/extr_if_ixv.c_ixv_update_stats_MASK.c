
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbevf_hw_stats {int vfmprc; int vfgotc; int vfgorc; int vfgptc; int vfgprc; int last_vfmprc; int last_vfgotc; int last_vfgorc; int last_vfgptc; int last_vfgprc; } ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_2__ {struct ixgbevf_hw_stats vf; } ;
struct adapter {TYPE_1__ stats; struct ixgbe_hw hw; } ;


 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;

void
FUNC_7(struct adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 struct ixgbevf_hw_stats *VAR_9 = &VAR_7->stats.vf;

 FUNC_5(VAR_4, VAR_7->stats.vf.last_vfgprc,
     VAR_7->stats.vf.vfgprc);
 FUNC_5(VAR_5, VAR_7->stats.vf.last_vfgptc,
     VAR_7->stats.vf.vfgptc);
 FUNC_6(VAR_0, VAR_1,
     VAR_7->stats.vf.last_vfgorc, VAR_7->stats.vf.vfgorc);
 FUNC_6(VAR_2, VAR_3,
     VAR_7->stats.vf.last_vfgotc, VAR_7->stats.vf.vfgotc);
 FUNC_5(VAR_6, VAR_7->stats.vf.last_vfmprc,
     VAR_7->stats.vf.vfmprc);


 FUNC_2(VAR_7, VAR_9->vfgprc);
 FUNC_4(VAR_7, VAR_9->vfgptc);
 FUNC_0(VAR_7, VAR_9->vfgorc);
 FUNC_3(VAR_7, VAR_9->vfgotc);
 FUNC_1(VAR_7, VAR_9->vfmprc);
}
