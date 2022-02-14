
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ cs_nffree; int cs_nbfree; } ;
struct ufs_sb_private_info {int s_dsize; TYPE_1__ cs_total; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline u64
FUNC_1(struct ufs_sb_private_info *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->cs_total.cs_nbfree) +
  VAR_0->cs_total.cs_nffree -
  (VAR_0->s_dsize * (VAR_1) / 100);
}
