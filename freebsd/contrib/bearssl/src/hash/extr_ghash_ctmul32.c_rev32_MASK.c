
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t VAR_0)
{





 do { VAR_0 = ((VAR_0 & (uint32_t)(0x55555555)) << (1)) | ((VAR_0 >> (1)) & (uint32_t)(0x55555555)); } while (0);
 do { VAR_0 = ((VAR_0 & (uint32_t)(0x33333333)) << (2)) | ((VAR_0 >> (2)) & (uint32_t)(0x33333333)); } while (0);
 do { VAR_0 = ((VAR_0 & (uint32_t)(0x0F0F0F0F)) << (4)) | ((VAR_0 >> (4)) & (uint32_t)(0x0F0F0F0F)); } while (0);
 do { VAR_0 = ((VAR_0 & (uint32_t)(0x00FF00FF)) << (8)) | ((VAR_0 >> (8)) & (uint32_t)(0x00FF00FF)); } while (0);
 return (VAR_0 << 16) | (VAR_0 >> 16);


}
