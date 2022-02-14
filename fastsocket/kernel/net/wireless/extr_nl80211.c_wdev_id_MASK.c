
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wireless_dev {int wiphy; scalar_t__ identifier; } ;
struct TYPE_2__ {scalar_t__ wiphy_idx; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline u64 FUNC_1(struct wireless_dev *VAR_0)
{
 return (u64)VAR_0->identifier |
        ((u64)FUNC_0(VAR_0->wiphy)->wiphy_idx << 32);
}
