
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ phy_mode; } ;
struct bwi_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct bwi_mac*,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct bwi_mac *VAR_7)
{

 if (VAR_7->mac_phy.phy_mode == VAR_6) {

 } else {
  uint16_t VAR_8;
  int VAR_9;

  VAR_8 = FUNC_1(VAR_4, VAR_5) |
        FUNC_1(VAR_4, VAR_3);

  for (VAR_9 = 0; VAR_9 < 2; ++VAR_9) {
   FUNC_0(VAR_7, VAR_0,
    VAR_1 + (VAR_9 * 2), VAR_8);
  }

  for (VAR_9 = 0; VAR_9 < 2; ++VAR_9) {
   FUNC_0(VAR_7, VAR_0,
    VAR_2 + (VAR_9 * 2), VAR_8);
  }
 }
}
