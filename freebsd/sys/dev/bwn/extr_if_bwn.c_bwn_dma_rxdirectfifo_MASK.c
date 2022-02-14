
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct bwn_mac {scalar_t__ mac_dmatype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bwn_mac*,scalar_t__) ;
 int FUNC_1 (struct bwn_mac*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_5, int VAR_6, uint8_t VAR_7)
{
 uint32_t VAR_8;
 uint16_t VAR_9;

 VAR_9 = FUNC_2(VAR_5->mac_dmatype, VAR_6);
 if (VAR_5->mac_dmatype == VAR_0) {
  VAR_8 = FUNC_0(VAR_5, VAR_9 + VAR_3);
  VAR_8 &= ~VAR_4;
  if (VAR_7)
   VAR_8 |= VAR_4;
  FUNC_1(VAR_5, VAR_9 + VAR_3, VAR_8);
 } else {
  VAR_8 = FUNC_0(VAR_5, VAR_9 + VAR_1);
  VAR_8 &= ~VAR_2;
  if (VAR_7)
   VAR_8 |= VAR_2;
  FUNC_1(VAR_5, VAR_9 + VAR_1, VAR_8);
 }
}
