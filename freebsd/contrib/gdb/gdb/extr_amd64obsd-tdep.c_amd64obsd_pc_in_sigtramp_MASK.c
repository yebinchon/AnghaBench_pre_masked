
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 char* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (int,char*,int) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_1, char *VAR_2)
{
  CORE_ADDR VAR_3 = (VAR_1 & ~(VAR_0 - 1));
  const char VAR_4[] =
  {
    0x48, 0xc7, 0xc0,
    0x67, 0x00, 0x00, 0x00,
    0xcd, 0x80
  };
  char *VAR_5;

  if (VAR_2)
    return 0;


  VAR_5 = FUNC_0 (sizeof VAR_4);
  if (FUNC_2 (VAR_3 + 0x7, VAR_5, sizeof VAR_4))
    return 0;


  if (FUNC_1 (VAR_5, VAR_4, sizeof VAR_4))
    return 0;

  return 1;
}
