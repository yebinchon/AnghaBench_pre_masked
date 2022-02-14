
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1);
 if (VAR_2 != 0) {
  if (VAR_2 == VAR_0)
   FUNC_1("audit requires root privileges");
  else
   FUNC_1("Error sending trigger");
  return (-1);
 }

 return (0);
}
