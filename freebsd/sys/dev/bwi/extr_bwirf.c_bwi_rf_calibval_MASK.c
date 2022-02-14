
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bwi_mac*,int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int const*) ;

__attribute__((used)) static uint16_t
FUNC_4(struct bwi_mac *VAR_3)
{

 static const uint16_t VAR_4[] = {
  0x2, 0x3, 0x1, 0xf, 0x6, 0x7, 0x5, 0xf,
  0xa, 0xb, 0x9, 0xf, 0xe, 0xf, 0xd, 0xf
 };
 uint16_t VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_7 = FUNC_2(VAR_5, VAR_2);
 FUNC_0(VAR_7 < (int)FUNC_3(VAR_4), ("idx %d", VAR_7));

 VAR_6 = VAR_4[VAR_7] << 1;
 if (VAR_5 & VAR_1)
  VAR_6 |= 0x1;
 VAR_6 |= 0x20;

 return VAR_6;
}
