
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct bwn_mac {scalar_t__ mac_ktp; } ;


 int FUNC_0 (struct bwn_mac*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bwn_mac*,int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_3, uint8_t VAR_4, uint8_t VAR_5,
    const uint8_t *VAR_6)
{
 unsigned int VAR_7;
 uint32_t VAR_8;
 uint16_t VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_1,
     VAR_2 + (VAR_9 * 2), (VAR_9 << 4) | VAR_5);

 VAR_8 = VAR_3->mac_ktp + (VAR_4 * VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7 += 2) {
  VAR_10 = VAR_6[VAR_7];
  VAR_10 |= (uint16_t)(VAR_6[VAR_7 + 1]) << 8;
  FUNC_1(VAR_3, VAR_1, VAR_8 + VAR_7, VAR_10);
 }
}
