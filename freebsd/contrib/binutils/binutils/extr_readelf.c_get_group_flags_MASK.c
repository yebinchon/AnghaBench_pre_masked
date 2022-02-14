
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;



 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_2 (unsigned int VAR_0)
{
  static char VAR_1[32];
  switch (VAR_0)
    {
    case 128:
      return "COMDAT";

   default:
      FUNC_1 (VAR_1, sizeof (VAR_1), FUNC_0("[<unknown>: 0x%x]"), VAR_0);
      break;
    }
  return VAR_1;
}
