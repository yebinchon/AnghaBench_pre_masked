
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__,int) ;

int
FUNC_9(void)
{
 u_short VAR_4, VAR_5;

 if (!VAR_3) {
  FUNC_8(
 "npxtrap_x87: fpcurthread = %p, curthread = %p, hw_float = %d\n",
         FUNC_2(VAR_1), VAR_0, VAR_3);
  FUNC_7("npxtrap from nowhere");
 }
 FUNC_3();






 if (FUNC_2(VAR_1) != VAR_0) {
  VAR_4 = FUNC_0(VAR_0);
  VAR_5 = FUNC_1(VAR_0);
 } else {
  FUNC_5(&VAR_4);
  FUNC_6(&VAR_5);
 }
 FUNC_4();
 return (VAR_2[VAR_5 & ((~VAR_4 & 0x3f) | 0x40)]);
}
