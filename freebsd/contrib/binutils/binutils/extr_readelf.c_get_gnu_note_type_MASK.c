
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;




 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_2 (unsigned VAR_0)
{
  static char VAR_1[64];

  switch (VAR_0)
    {
    case 129:
      return FUNC_0("NT_GNU_ABI_TAG");
    case 128:
      return FUNC_0("NT_GNU_BUILD_ID");
    }

  FUNC_1 (VAR_1, sizeof(VAR_1), FUNC_0("Unknown GNU note type: (0x%08x)"), VAR_0);
  return VAR_1;
}
