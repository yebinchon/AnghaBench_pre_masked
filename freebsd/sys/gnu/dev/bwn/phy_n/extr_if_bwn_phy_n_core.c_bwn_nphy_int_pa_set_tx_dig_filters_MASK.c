
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (struct bwn_mac*) ;
 scalar_t__ FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*,int const,int const*) ;
 int const** VAR_1 ;

__attribute__((used)) static void FUNC_4(struct bwn_mac *VAR_2)
{

 static const uint16_t VAR_3[] = { 0x186, 0x195, 0x2C5 };
 static const int16_t VAR_4[] = {
  -375, 136, -407, 208, -1527,
  956, 93, 186, 93, 230,
  -44, 230, 201, -191, 201,
 };
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
  FUNC_3(VAR_2, VAR_3[VAR_5],
           VAR_1[VAR_5]);


 if (VAR_2->mac_phy.rev == 16)
  FUNC_3(VAR_2, 0x186, VAR_4);


 if (VAR_2->mac_phy.rev == 17) {
  FUNC_3(VAR_2, 0x186, VAR_4);
  FUNC_3(VAR_2, 0x195,
           VAR_1[1]);
 }

 if (FUNC_2(VAR_2)) {
  FUNC_3(VAR_2, 0x186,
           VAR_1[3]);
 } else {
  if (FUNC_0(VAR_2) == VAR_0)
   FUNC_3(VAR_2, 0x186,
            VAR_1[5]);
  if (FUNC_1(VAR_2) == 14)
   FUNC_3(VAR_2, 0x186,
            VAR_1[6]);
 }
}
