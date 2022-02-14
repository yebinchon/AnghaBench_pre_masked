
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bwn_mac*,int ,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,scalar_t__) ;
 int FUNC_2 (struct bwn_mac*,int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct bwn_mac *VAR_6, uint16_t VAR_7)
{
 const uint8_t VAR_8 = (VAR_7 != VAR_3);
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 uint32_t VAR_14;

 VAR_14 = FUNC_1(VAR_6, VAR_1, VAR_7);
 VAR_9 = VAR_14 & 0xff;
 VAR_10 = (VAR_14 >> 8) & 0xff;
 VAR_11 = (VAR_14 >> 16) & 0xff;
 VAR_12 = (VAR_14 >> 24) & 0xff;
 if (VAR_9 == 0 || VAR_9 == VAR_4 || VAR_10 == 0 || VAR_10 == VAR_4 ||
     VAR_11 == 0 || VAR_11 == VAR_4 || VAR_12 == 0 || VAR_12 == VAR_4)
  return (VAR_5);
 FUNC_2(VAR_6, VAR_1, VAR_7,
     VAR_4 | (VAR_4 << 8) |
     (VAR_4 << 16) | (VAR_4 << 24));

 if (VAR_8) {
  VAR_9 = (VAR_9 + 32) & 0x3f;
  VAR_10 = (VAR_10 + 32) & 0x3f;
  VAR_11 = (VAR_11 + 32) & 0x3f;
  VAR_12 = (VAR_12 + 32) & 0x3f;
 }

 VAR_13 = (VAR_9 + VAR_10 + VAR_11 + VAR_12 + 2) / 4;
 if (VAR_8) {
  if (FUNC_0(VAR_6, VAR_1, VAR_2)
      & VAR_0)
   VAR_13 = (VAR_13 >= 13) ? (VAR_13 - 13) : 0;
 }
 return (VAR_13);
}
