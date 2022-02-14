
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bktr_ptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(bktr_ptr_t VAR_0)
{
 int VAR_1, VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < 10; VAR_1++) {
  VAR_2 = FUNC_1(0x0e) & 0x06;
  if (VAR_2 == 6) {
   break;
  }
  FUNC_0(1000);
 }
 return VAR_2;
}
