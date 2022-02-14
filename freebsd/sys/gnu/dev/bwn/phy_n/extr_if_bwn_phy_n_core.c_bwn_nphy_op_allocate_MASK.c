
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_phy_n {int dummy; } ;
struct TYPE_2__ {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bwn_phy_n* FUNC_0 (int,int ,int) ;

int
FUNC_1(struct bwn_mac *VAR_4)
{
 struct bwn_phy_n *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1, VAR_3 | VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->mac_phy.phy_n = VAR_5;

 return 0;
}
