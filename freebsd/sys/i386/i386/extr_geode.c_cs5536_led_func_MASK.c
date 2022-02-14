
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 int VAR_2;
 uint16_t VAR_3;

 VAR_2 = *(int *)VAR_0;
 if (VAR_2 < 0) {
  VAR_2 = -VAR_2;
  VAR_1 = !VAR_1;
 }

 VAR_3 = FUNC_1(0x5140000c);
 if (VAR_2 >= 16) {
  VAR_3 += 0x80;
  VAR_2 -= 16;
 }

 if (VAR_1)
  FUNC_0(VAR_3, 1 << VAR_2);
 else
  FUNC_0(VAR_3, 1 << (VAR_2 + 16));
}
