
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uschar ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1)
{
 static char VAR_2[2][2];

 if ((uschar)VAR_0 == (uschar)VAR_1)
  return 0;
 VAR_2[0][0] = VAR_0;
 VAR_2[1][0] = VAR_1;
 return (FUNC_0(VAR_2[0], VAR_2[1]));
}
