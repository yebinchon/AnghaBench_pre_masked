
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_txgain_entry {int dummy; } ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*,int,struct bwn_txgain_entry) ;
 int FUNC_1 (struct bwn_mac*,int,struct bwn_txgain_entry) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_0, int VAR_1,
    struct bwn_txgain_entry VAR_2)
{

 if (VAR_0->mac_phy.rev >= 2)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
