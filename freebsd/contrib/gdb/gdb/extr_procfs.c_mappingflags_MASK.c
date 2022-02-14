
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char *
FUNC_1 (long VAR_7)
{
  static char VAR_8[8];

  FUNC_0 (VAR_8, "-------");




  if (VAR_7 & VAR_5)
    VAR_8[1] = 's';
  if (VAR_7 & VAR_0)
    VAR_8[2] = 'b';
  if (VAR_7 & VAR_4)
    VAR_8[3] = 's';
  if (VAR_7 & VAR_3)
    VAR_8[4] = 'r';
  if (VAR_7 & VAR_6)
    VAR_8[5] = 'w';
  if (VAR_7 & VAR_1)
    VAR_8[6] = 'x';
  return (VAR_8);
}
