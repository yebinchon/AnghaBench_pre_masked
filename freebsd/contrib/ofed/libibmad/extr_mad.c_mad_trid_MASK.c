
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;

uint64_t FUNC_5(void)
{
 static uint64_t VAR_0;
 uint64_t VAR_1;

 if (!VAR_0) {
  FUNC_3((int)FUNC_4(0) * FUNC_1());
  VAR_0 = FUNC_2();
 }
 VAR_1 = ++VAR_0;
 VAR_1 = FUNC_0(VAR_1);
 return VAR_1;
}
