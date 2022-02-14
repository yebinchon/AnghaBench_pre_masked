
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void
FUNC_1 (FILE *VAR_0, long int VAR_1,
     long int VAR_2)
{
  if (VAR_1 >= 0 && VAR_2 <= 255)
    FUNC_0 (VAR_0, "unsigned char");
  else if (VAR_1 >= -127 && VAR_2 <= 127)
    FUNC_0 (VAR_0, "signed char");
  else if (VAR_1 >= 0 && VAR_2 <= 65535)
    FUNC_0 (VAR_0, "unsigned short");
  else if (VAR_1 >= -32767 && VAR_2 <= 32767)
    FUNC_0 (VAR_0, "short");
  else
    FUNC_0 (VAR_0, "int");
}
