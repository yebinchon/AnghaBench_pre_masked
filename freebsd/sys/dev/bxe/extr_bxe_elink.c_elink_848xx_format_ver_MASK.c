
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int elink_status_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int *) ;

__attribute__((used)) static elink_status_t FUNC_1(uint32_t VAR_1, uint8_t *VAR_2, uint16_t *VAR_3)
{
 elink_status_t VAR_4 = VAR_0;
 uint32_t VAR_5;
 VAR_5 = ((VAR_1 & 0xF80) >> 7) << 16 | (VAR_1 & 0x7F);
 VAR_4 = FUNC_0(VAR_5, VAR_2, VAR_3);
 return VAR_4;
}
