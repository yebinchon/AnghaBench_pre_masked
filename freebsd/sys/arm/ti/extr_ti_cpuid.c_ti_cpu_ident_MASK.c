
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 if (!FUNC_4())
  return;
 switch(FUNC_3()) {
 case 128:
  FUNC_1();
  break;
 case 129:
  FUNC_0();
  break;
 default:
  FUNC_2("Unknown chip type, fixme!\n");
 }
}
