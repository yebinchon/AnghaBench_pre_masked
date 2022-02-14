
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_4;

 if (!VAR_3) {
  FUNC_1();
  VAR_3 = 1;
 }

 FUNC_2();
 if (!VAR_2)
  return -1;
 for (VAR_4 = 0; VAR_4 < 12*256; VAR_4++)
  (void)FUNC_0();

 VAR_1 = VAR_0;

 return 0;
}
