
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2 = 0;

 if (VAR_1)
  FUNC_1();
 else if (VAR_0)
  FUNC_0();
 else {
  VAR_2 = -1;
  FUNC_2("Unknown type of information\n");
 }

 return VAR_2;
}
