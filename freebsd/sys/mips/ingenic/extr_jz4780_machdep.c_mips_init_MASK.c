
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mem_region {scalar_t__ mr_start; scalar_t__ mr_size; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_5 (struct mem_region*,int*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int FUNC_13 () ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_14(void)
{
 int VAR_10;







 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  VAR_7[VAR_10] = 0;
 }


 VAR_4[0] = VAR_7[0] = FUNC_2(VAR_5);
 VAR_8 = VAR_9 = FUNC_3(32 * 1024 * 1024);





 __asm(
  "li	$2, 0xa9000000	\n\t"
  "mtc0	$2, $5, 4	\n\t"
  "nop			\n\t"
  ::"r"(2));
 FUNC_6();
 FUNC_7(VAR_8);
 FUNC_10();
 FUNC_13();
 FUNC_11();
 FUNC_12();
 FUNC_9();
 VAR_6[0] = 0x8000;




}
