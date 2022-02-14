
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct bwn_phy_n {scalar_t__ txcal_bbmult; } ;
struct TYPE_4__ {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
struct TYPE_6__ {scalar_t__ percent; scalar_t__ g_env; } ;
struct TYPE_5__ {scalar_t__ percent; scalar_t__ g_env; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,scalar_t__) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bwn_mac *VAR_2, uint16_t VAR_3)
{
 struct bwn_phy_n *VAR_4 = VAR_2->mac_phy.phy_n;
 int VAR_5;
 uint16_t VAR_6, VAR_7;

 uint16_t VAR_8 = VAR_4->txcal_bbmult;
 if (VAR_3 == 0)
  VAR_8 >>= 8;
 VAR_8 &= 0xff;

 for (VAR_5 = 0; VAR_5 < 18; VAR_5++) {
  VAR_6 = (VAR_1[VAR_5].percent * VAR_8) / 100;
  VAR_7 = ((VAR_6 & 0xFF) << 8) | VAR_1[VAR_5].g_env;
  FUNC_1(VAR_2, FUNC_0(15, VAR_5), VAR_7);

  VAR_6 = (VAR_0[VAR_5].percent * VAR_8) / 100;
  VAR_7 = ((VAR_6 & 0xFF) << 8) | VAR_0[VAR_5].g_env;
  FUNC_1(VAR_2, FUNC_0(15, VAR_5 + 32), VAR_7);
 }
}
