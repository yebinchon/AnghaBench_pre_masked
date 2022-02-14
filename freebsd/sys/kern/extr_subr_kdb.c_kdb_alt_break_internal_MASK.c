
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(int VAR_2, int *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_1)
  return (0);
 VAR_5 = FUNC_0(VAR_2, VAR_3);
 switch (VAR_5) {
 case 130:
  if (VAR_4)
   FUNC_1("gdb");
  FUNC_2(VAR_0, "Break to debugger");
  break;

 case 129:
  if (VAR_4)
   FUNC_1("gdb");
  FUNC_3("Panic sequence on console");
  break;

 case 128:
  FUNC_4();
  break;
 }
 return (0);
}
