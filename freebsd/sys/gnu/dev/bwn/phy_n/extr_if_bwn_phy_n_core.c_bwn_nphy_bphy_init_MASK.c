
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bwn_mac *VAR_0)
{
 unsigned int VAR_1;
 uint16_t VAR_2;

 VAR_2 = 0x1E1F;
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  FUNC_1(VAR_0, FUNC_0(0x88 + VAR_1), VAR_2);
  VAR_2 -= 0x202;
 }
 VAR_2 = 0x3E3F;
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  FUNC_1(VAR_0, FUNC_0(0x98 + VAR_1), VAR_2);
  VAR_2 -= 0x202;
 }
 FUNC_1(VAR_0, FUNC_0(0x38), 0x668);
}
