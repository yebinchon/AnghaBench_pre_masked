
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(void)
{
 uint32_t VAR_2;

 FUNC_0();

 if (VAR_1)
  return (1);
 VAR_2 = FUNC_1();
 if (VAR_2 != 0) {
  VAR_1 = 1;
  VAR_0 = VAR_2;
  return (1);
 }
 return (0);
}
