
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct x86emu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct x86emu *VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;
 uint32_t VAR_10;

 if (FUNC_0(VAR_1))
  VAR_9 = VAR_7 - VAR_8 - 1;
 else
  VAR_9 = VAR_7 - VAR_8;
 FUNC_1(VAR_9 & 0x80000000, VAR_4);
 FUNC_1((VAR_9 & 0xffffffff) == 0, VAR_5);
 FUNC_1(FUNC_2(VAR_9 & 0xff), VAR_3);


 VAR_10 = (VAR_9 & (~VAR_7 | VAR_8)) | (~VAR_7 & VAR_8);
 FUNC_1(VAR_10 & 0x80000000, VAR_1);
 FUNC_1(FUNC_3(VAR_10 >> 30), VAR_2);
 FUNC_1(VAR_10 & 0x8, VAR_0);
 return VAR_9;
}
