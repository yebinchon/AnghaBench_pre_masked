
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;

s32 FUNC_5(struct e1000_hw *VAR_7, u32 *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 u16 VAR_12;

 FUNC_0("e1000_read_pba_length_generic");

 if (VAR_8 == ((void*)0)) {
  FUNC_1("PBA buffer size was null\n");
  return -VAR_0;
 }

 VAR_9 = VAR_7->nvm.ops.read(VAR_7, VAR_4, 1, &VAR_10);
 if (VAR_9) {
  FUNC_1("NVM Read Error\n");
  return VAR_9;
 }

 VAR_9 = VAR_7->nvm.ops.read(VAR_7, VAR_5, 1, &VAR_11);
 if (VAR_9) {
  FUNC_1("NVM Read Error\n");
  return VAR_9;
 }


 if (VAR_10 != VAR_6) {
  *VAR_8 = VAR_2;
  return VAR_3;
 }

 VAR_9 = VAR_7->nvm.ops.read(VAR_7, VAR_11, 1, &VAR_12);
 if (VAR_9) {
  FUNC_1("NVM Read Error\n");
  return VAR_9;
 }

 if (VAR_12 == 0xFFFF || VAR_12 == 0) {
  FUNC_1("NVM PBA number section invalid length\n");
  return -VAR_1;
 }




 *VAR_8 = ((u32)VAR_12 * 2) - 1;

 return VAR_3;
}
