
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int num ;



__attribute__((used)) static size_t FUNC_0(uint8_t * VAR_0, uint32_t VAR_1)
{
 VAR_0[0] = VAR_1 & 0x000000FF;
 VAR_0[1] = (VAR_1 & 0x0000FF00) >> 8;
 VAR_0[2] = (VAR_1 & 0x00FF0000) >> 16;
 VAR_0[3] = (VAR_1 & 0xFF000000) >> 24;

 return (sizeof(VAR_1));
}
