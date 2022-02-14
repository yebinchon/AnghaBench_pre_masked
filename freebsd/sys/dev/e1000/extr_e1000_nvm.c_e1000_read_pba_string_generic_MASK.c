
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ nvm; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int,int,int*) ;

s32 FUNC_7(struct e1000_hw *VAR_9, u8 *VAR_10,
      u32 VAR_11)
{
 s32 VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 u16 VAR_16;

 FUNC_0("e1000_read_pba_string_generic");

 if ((VAR_9->mac.type >= VAR_8) &&
     !FUNC_2(VAR_9)) {
  FUNC_1("Flashless no PBA string\n");
  return -VAR_2;
 }

 if (VAR_10 == ((void*)0)) {
  FUNC_1("PBA string buffer was null\n");
  return -VAR_0;
 }

 VAR_12 = VAR_9->nvm.ops.read(VAR_9, VAR_5, 1, &VAR_13);
 if (VAR_12) {
  FUNC_1("NVM Read Error\n");
  return VAR_12;
 }

 VAR_12 = VAR_9->nvm.ops.read(VAR_9, VAR_6, 1, &VAR_14);
 if (VAR_12) {
  FUNC_1("NVM Read Error\n");
  return VAR_12;
 }





 if (VAR_13 != VAR_7) {
  FUNC_1("NVM PBA number is not stored as string\n");


  if (VAR_11 < VAR_3) {
   FUNC_1("PBA string buffer too small\n");
   return VAR_1;
  }


  VAR_10[0] = (VAR_13 >> 12) & 0xF;
  VAR_10[1] = (VAR_13 >> 8) & 0xF;
  VAR_10[2] = (VAR_13 >> 4) & 0xF;
  VAR_10[3] = VAR_13 & 0xF;
  VAR_10[4] = (VAR_14 >> 12) & 0xF;
  VAR_10[5] = (VAR_14 >> 8) & 0xF;
  VAR_10[6] = '-';
  VAR_10[7] = 0;
  VAR_10[8] = (VAR_14 >> 4) & 0xF;
  VAR_10[9] = VAR_14 & 0xF;


  VAR_10[10] = '\0';


  for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
   if (VAR_10[VAR_15] < 0xA)
    VAR_10[VAR_15] += '0';
   else if (VAR_10[VAR_15] < 0x10)
    VAR_10[VAR_15] += 'A' - 0xA;
  }

  return VAR_4;
 }

 VAR_12 = VAR_9->nvm.ops.read(VAR_9, VAR_14, 1, &VAR_16);
 if (VAR_12) {
  FUNC_1("NVM Read Error\n");
  return VAR_12;
 }

 if (VAR_16 == 0xFFFF || VAR_16 == 0) {
  FUNC_1("NVM PBA number section invalid length\n");
  return -VAR_2;
 }

 if (VAR_11 < (((u32)VAR_16 * 2) - 1)) {
  FUNC_1("PBA string buffer too small\n");
  return -VAR_1;
 }


 VAR_14++;
 VAR_16--;

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_12 = VAR_9->nvm.ops.read(VAR_9, VAR_14 + VAR_15, 1, &VAR_13);
  if (VAR_12) {
   FUNC_1("NVM Read Error\n");
   return VAR_12;
  }
  VAR_10[VAR_15 * 2] = (u8)(VAR_13 >> 8);
  VAR_10[(VAR_15 * 2) + 1] = (u8)(VAR_13 & 0xFF);
 }
 VAR_10[VAR_15 * 2] = '\0';

 return VAR_4;
}
