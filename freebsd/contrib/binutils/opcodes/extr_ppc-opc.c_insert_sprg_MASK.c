
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static unsigned long
FUNC_1 (unsigned long VAR_2,
      long VAR_3,
      int VAR_4,
      const char **VAR_5)
{



  if (VAR_3 > 7
      || (VAR_3 > 3
   && (VAR_4 & (VAR_1 | VAR_0)) == 0))
    *VAR_5 = FUNC_0("invalid sprg number");



  if (VAR_3 <= 3 || (VAR_2 & 0x100) != 0)
    VAR_3 |= 0x10;

  return VAR_2 | ((VAR_3 & 0x17) << 16);
}
