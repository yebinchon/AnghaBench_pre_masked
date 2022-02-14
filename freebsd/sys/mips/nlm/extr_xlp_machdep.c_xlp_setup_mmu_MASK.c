
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
 uint32_t VAR_0;

 if (FUNC_6() == 0) {
  FUNC_5(0);
  FUNC_3(1);
  FUNC_2(1);
  FUNC_4(0, 0, 0);
 }


 VAR_0 = FUNC_0();
 VAR_0 |= (1U << 31) |
     (1 << 30) |
     (1 << 29);
 FUNC_1(VAR_0);
}
