
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int elink_status_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static elink_status_t FUNC_0(uint32_t VAR_2, uint8_t *VAR_3, uint16_t *VAR_4)
{
 if (*VAR_4 < 5)
  return VAR_0;
 VAR_3[0] = (VAR_2 & 0xFF);
 VAR_3[1] = (VAR_2 & 0xFF00) >> 8;
 VAR_3[2] = (VAR_2 & 0xFF0000) >> 16;
 VAR_3[3] = (VAR_2 & 0xFF000000) >> 24;
 VAR_3[4] = '\0';
 *VAR_4 -= 5;
 return VAR_1;
}
