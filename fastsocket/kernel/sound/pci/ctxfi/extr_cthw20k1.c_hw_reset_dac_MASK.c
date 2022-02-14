
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hw*,int ) ;
 unsigned int FUNC_1 (struct hw*,int) ;
 int FUNC_2 (struct hw*,int ,int) ;
 int FUNC_3 (struct hw*,int,int) ;
 int FUNC_4 (struct hw*) ;
 scalar_t__ FUNC_5 (struct hw*) ;
 int FUNC_6 (struct hw*,int,int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct hw *VAR_1)
{
 u32 VAR_2;
 u16 VAR_3;
 unsigned int VAR_4;

 if (FUNC_5(VAR_1))
  return -1;

 do {
  VAR_4 = FUNC_1(VAR_1, 0xEC);
 } while (!(VAR_4 & 0x800000));
 FUNC_3(VAR_1, 0xEC, 0x05);


 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {

  FUNC_7(100);
  VAR_3 = (u16)FUNC_0(VAR_1, VAR_0);
  VAR_3 &= 0xfffd;
  FUNC_2(VAR_1, VAR_0, VAR_3);
  FUNC_7(1);
  FUNC_2(VAR_1, VAR_0, VAR_3 | 0x2);
 }

 FUNC_6(VAR_1, 0x00180080, 0x01, 0x80);
 FUNC_6(VAR_1, 0x00180080, 0x02, 0x10);

 FUNC_4(VAR_1);

 return 0;
}
