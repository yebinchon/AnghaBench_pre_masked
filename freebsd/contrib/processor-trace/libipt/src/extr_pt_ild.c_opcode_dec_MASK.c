
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_ild {int nominal_opcode; int max_bytes; int imm1_bytes; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (struct pt_ild*,int) ;
 int FUNC_2 (struct pt_ild*,int) ;
 int FUNC_3 (struct pt_ild*,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct pt_ild *VAR_8, uint8_t VAR_9)
{
 uint8_t VAR_10, VAR_11;

 if (!VAR_8)
  return -VAR_7;


 VAR_10 = FUNC_1(VAR_8, VAR_9);
 if (VAR_10 != 0x0F) {
  VAR_8->map = VAR_0;
  VAR_8->nominal_opcode = VAR_10;

  return FUNC_3(VAR_8, VAR_9 + 1);
 }

 VAR_9++;

 if (VAR_8->max_bytes <= VAR_9)
  return -VAR_6;


 VAR_11 = FUNC_1(VAR_8, VAR_9);
 if (VAR_11 == 0x38) {
  VAR_8->map = VAR_2;

  return FUNC_2(VAR_8, VAR_9 + 1);
 } else if (VAR_11 == 0x3A) {
  VAR_8->map = VAR_3;
  VAR_8->imm1_bytes = 1;

  return FUNC_2(VAR_8, VAR_9 + 1);
 } else if (FUNC_0(VAR_11, 0xf8, 0x38)) {
  VAR_8->map = VAR_5;

  return FUNC_2(VAR_8, VAR_9 + 1);
 } else if (VAR_11 == 0x0F) {
  VAR_8->map = VAR_4;
  VAR_8->imm1_bytes = 1;


  VAR_8->nominal_opcode = 0x0F;

  return FUNC_3(VAR_8, VAR_9 + 1);
 } else {
  VAR_8->nominal_opcode = VAR_11;
  VAR_8->map = VAR_1;

  return FUNC_3(VAR_8, VAR_9 + 1);
 }
}
