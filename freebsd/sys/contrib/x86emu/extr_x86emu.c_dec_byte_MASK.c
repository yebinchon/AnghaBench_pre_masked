
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint8_t
FUNC_3(struct x86emu *VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;

 VAR_7 = VAR_6 - 1;
 FUNC_0(VAR_7 & 0x80, VAR_3);
 FUNC_0((VAR_7 & 0xff) == 0, VAR_4);
 FUNC_0(FUNC_1(VAR_7 & 0xff), VAR_2);



 VAR_8 = (VAR_7 & (~VAR_6 | 1)) | (~VAR_6 & 1);

 FUNC_0(FUNC_2(VAR_8 >> 6), VAR_1);
 FUNC_0(VAR_8 & 0x8, VAR_0);
 return (uint8_t) VAR_7;
}
