
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;


 unsigned int FUNC_0 (struct hw*,int) ;
 int FUNC_1 (struct hw*,int,int) ;

__attribute__((used)) static void FUNC_2(struct hw *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned int VAR_4;

 do {
  VAR_4 = FUNC_0(VAR_0, 0xEC);
 } while (!(VAR_4 & 0x800000));
 FUNC_1(VAR_0, 0xE0, VAR_1);
 FUNC_1(VAR_0, 0xE4, (VAR_3 << 8) | (VAR_2 & 0xff));
}
