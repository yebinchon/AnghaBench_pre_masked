
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_3__ {int last_vfgorc; int last_vfgotc; int base_vfgorc; int base_vfgotc; void* last_vfmprc; void* base_vfmprc; void* last_vfgptc; void* base_vfgptc; void* last_vfgprc; void* base_vfgprc; } ;
struct TYPE_4__ {TYPE_1__ vf; } ;
struct adapter {TYPE_2__ stats; struct ixgbe_hw hw; } ;


 void* FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1(struct adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;

 VAR_7->stats.vf.last_vfgprc = FUNC_0(VAR_8, VAR_4);
 VAR_7->stats.vf.last_vfgorc = FUNC_0(VAR_8, VAR_0);
 VAR_7->stats.vf.last_vfgorc |=
     (((u64)(FUNC_0(VAR_8, VAR_1))) << 32);

 VAR_7->stats.vf.last_vfgptc = FUNC_0(VAR_8, VAR_5);
 VAR_7->stats.vf.last_vfgotc = FUNC_0(VAR_8, VAR_2);
 VAR_7->stats.vf.last_vfgotc |=
     (((u64)(FUNC_0(VAR_8, VAR_3))) << 32);

 VAR_7->stats.vf.last_vfmprc = FUNC_0(VAR_8, VAR_6);

 VAR_7->stats.vf.base_vfgprc = VAR_7->stats.vf.last_vfgprc;
 VAR_7->stats.vf.base_vfgorc = VAR_7->stats.vf.last_vfgorc;
 VAR_7->stats.vf.base_vfgptc = VAR_7->stats.vf.last_vfgptc;
 VAR_7->stats.vf.base_vfgotc = VAR_7->stats.vf.last_vfgotc;
 VAR_7->stats.vf.base_vfmprc = VAR_7->stats.vf.last_vfmprc;
}
