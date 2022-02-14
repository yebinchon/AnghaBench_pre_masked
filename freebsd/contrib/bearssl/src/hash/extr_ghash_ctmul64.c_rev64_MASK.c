
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint64_t
FUNC_1(uint64_t VAR_0)
{





 do { VAR_0 = ((VAR_0 & (uint64_t)(0x5555555555555555)) << (1)) | ((VAR_0 >> (1)) & (uint64_t)(0x5555555555555555)); } while (0);
 do { VAR_0 = ((VAR_0 & (uint64_t)(0x3333333333333333)) << (2)) | ((VAR_0 >> (2)) & (uint64_t)(0x3333333333333333)); } while (0);
 do { VAR_0 = ((VAR_0 & (uint64_t)(0x0F0F0F0F0F0F0F0F)) << (4)) | ((VAR_0 >> (4)) & (uint64_t)(0x0F0F0F0F0F0F0F0F)); } while (0);
 do { VAR_0 = ((VAR_0 & (uint64_t)(0x00FF00FF00FF00FF)) << (8)) | ((VAR_0 >> (8)) & (uint64_t)(0x00FF00FF00FF00FF)); } while (0);
 do { VAR_0 = ((VAR_0 & (uint64_t)(0x0000FFFF0000FFFF)) << (16)) | ((VAR_0 >> (16)) & (uint64_t)(0x0000FFFF0000FFFF)); } while (0);
 return (VAR_0 << 32) | (VAR_0 >> 32);


}
