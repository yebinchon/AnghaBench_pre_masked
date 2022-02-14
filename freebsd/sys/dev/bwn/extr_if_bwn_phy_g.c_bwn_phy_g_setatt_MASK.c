
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int max; int min; } ;
struct TYPE_7__ {int max; int min; } ;
struct bwn_txpwr_loctl {TYPE_4__ bbatt; TYPE_3__ rfatt; } ;
struct TYPE_5__ {struct bwn_txpwr_loctl pg_loctl; } ;
struct TYPE_6__ {TYPE_1__ phy_g; } ;
struct bwn_mac {TYPE_2__ mac_phy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_0, int *VAR_1, int *VAR_2)
{
 struct bwn_txpwr_loctl *VAR_3 = &VAR_0->mac_phy.phy_g.pg_loctl;
 int VAR_4 = *VAR_2;
 int VAR_5 = *VAR_1;

 while (1) {
  if (VAR_4 > VAR_3->rfatt.max && VAR_5 > VAR_3->bbatt.max - 4)
   break;
  if (VAR_4 < VAR_3->rfatt.min && VAR_5 < VAR_3->bbatt.min + 4)
   break;
  if (VAR_5 > VAR_3->bbatt.max && VAR_4 > VAR_3->rfatt.max - 1)
   break;
  if (VAR_5 < VAR_3->bbatt.min && VAR_4 < VAR_3->rfatt.min + 1)
   break;
  if (VAR_5 > VAR_3->bbatt.max) {
   VAR_5 -= 4;
   VAR_4 += 1;
   continue;
  }
  if (VAR_5 < VAR_3->bbatt.min) {
   VAR_5 += 4;
   VAR_4 -= 1;
   continue;
  }
  if (VAR_4 > VAR_3->rfatt.max) {
   VAR_4 -= 1;
   VAR_5 += 4;
   continue;
  }
  if (VAR_4 < VAR_3->rfatt.min) {
   VAR_4 += 1;
   VAR_5 -= 4;
   continue;
  }
  break;
 }

 *VAR_2 = FUNC_1(FUNC_0(VAR_4, VAR_3->rfatt.min), VAR_3->rfatt.max);
 *VAR_1 = FUNC_1(FUNC_0(VAR_5, VAR_3->bbatt.min), VAR_3->bbatt.max);
}
