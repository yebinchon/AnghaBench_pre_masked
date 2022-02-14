
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum dram_type { ____Placeholder_dram_type } dram_type ;
typedef int device_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 uint8_t VAR_5;
 uint8_t VAR_6;
 int VAR_7;
 enum dram_type VAR_8;
 device_t VAR_9;

 VAR_9 = FUNC_0(VAR_4);
 VAR_5 = FUNC_3(VAR_4);


 if (((VAR_5 & 0xf0) != VAR_2) ||
     ((VAR_5 & 0x01) != 0)) {
  FUNC_1(VAR_4,
      "invalid \"addr\" hint; address must start with \"0x%x\","
      " and the least-significant bit must be 0\n",
      VAR_2);
  VAR_7 = VAR_1;
  goto out;
 }


 VAR_7 = FUNC_4(VAR_9, VAR_5, VAR_3, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_1(VAR_4, "failed to read dram_type\n");
  goto out;
 }


 VAR_8 = (enum dram_type) VAR_6;
 switch (VAR_8) {
 case 129:
  VAR_7 = VAR_0;
  FUNC_2(VAR_4, "DDR3 DIMM");
  break;
 case 128:
  VAR_7 = VAR_0;
  FUNC_2(VAR_4, "DDR4 DIMM");
  break;
 default:
  VAR_7 = VAR_1;
  break;
 }

out:
 return (VAR_7);
}
