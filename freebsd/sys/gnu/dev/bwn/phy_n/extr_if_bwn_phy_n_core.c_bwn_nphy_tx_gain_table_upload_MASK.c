
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct bwn_phy {int rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
typedef int int16_t ;
struct TYPE_2__ {int gmval; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 int* FUNC_2 (struct bwn_mac*) ;
 int* FUNC_3 (struct bwn_mac*) ;
 int* VAR_1 ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int,int const*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_6(struct bwn_mac *VAR_3)
{
 struct bwn_phy *VAR_4 = &VAR_3->mac_phy;

 const uint32_t *VAR_5 = ((void*)0);
 uint32_t VAR_6;
 uint8_t VAR_7, VAR_8;
 int VAR_9;
 const int16_t *VAR_10 = ((void*)0);

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return;

 FUNC_5(VAR_3, FUNC_0(26, 192), 128, VAR_5);
 FUNC_5(VAR_3, FUNC_0(27, 192), 128, VAR_5);

 if (VAR_4->rev < 3)
  return;





 if (VAR_4->rev >= 19) {
  return;
 } else if (VAR_4->rev >= 7) {
  VAR_10 = FUNC_3(VAR_3);
  if (!VAR_10)
   return;

  return;
 }

 for (VAR_9 = 0; VAR_9 < 128; VAR_9++) {
  if (VAR_4->rev >= 19) {

   return;
  } else if (VAR_4->rev >= 7) {
   VAR_7 = (VAR_5[VAR_9] >> 24) & 0xf;
   VAR_8 = (VAR_5[VAR_9] >> 19) & 0x1f;
   if (FUNC_1(VAR_3) == VAR_0)
    VAR_6 = VAR_10[VAR_8];
   else
    VAR_6 = VAR_10[VAR_7];
  } else {
   VAR_7 = (VAR_5[VAR_9] >> 24) & 0xF;
   if (FUNC_1(VAR_3) == VAR_0)
    VAR_6 = VAR_1[VAR_7];
   else
    VAR_6 = 0;
  }

  FUNC_4(VAR_3, FUNC_0(26, 576 + VAR_9), VAR_6);
  FUNC_4(VAR_3, FUNC_0(27, 576 + VAR_9), VAR_6);
 }
}
