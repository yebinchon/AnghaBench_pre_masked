
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 unsigned long FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_1, char *VAR_2)
{
  CORE_ADDR VAR_3 = (VAR_1 & ~(VAR_0 - 1));
  unsigned long VAR_4;

  if (VAR_2)
    return 0;


  VAR_4 = FUNC_0 (VAR_3 + 0xec);
  if (VAR_4 != 0x83e82067)
    return 0;


  VAR_4 = FUNC_0 (VAR_3 + 0xf4);
  if (VAR_4 != 0x91d02000)
    return 0;

  return 1;
}
