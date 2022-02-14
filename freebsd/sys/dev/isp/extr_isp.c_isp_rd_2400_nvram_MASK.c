
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int ispsoftc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ispsoftc_t *VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6 = 0x7ffe0000;
 uint32_t VAR_7 = 0;

 if (FUNC_5(VAR_2)) {
  VAR_6 = 0x7fe7c000;
 } else if (FUNC_4(VAR_2)) {
  VAR_6 = 0x7ff00000 | 0x48000;
 }
 FUNC_3(VAR_2, VAR_0, VAR_6 | VAR_3);
 for (VAR_5 = 0; VAR_5 < 5000; VAR_5++) {
  FUNC_0(10);
  VAR_7 = FUNC_1(VAR_2, VAR_0);
  if ((VAR_7 & (1U << 31)) != 0) {
   break;
  }
 }
 if (VAR_7 & (1U << 31)) {
  *VAR_4 = FUNC_1(VAR_2, VAR_1);
  FUNC_2(VAR_2, VAR_4);
 } else {
  *VAR_4 = 0xffffffff;
 }
}
