
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int offsetT ;
typedef int addressT ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static offsetT
FUNC_4 (offsetT VAR_1, int VAR_2)
{
  addressT VAR_3;

  switch (VAR_2)
    {
    case 1: VAR_3 = ((addressT) 1 << 8) - 1; break;
    case 2: VAR_3 = ((addressT) 1 << 16) - 1; break;
    case 4: VAR_3 = ((addressT) 2 << 31) - 1; break;



    default: FUNC_1 ();
    }


  if (!VAR_0)
    if ((VAR_1 & ~(((addressT) 2 << 31) - 1)) == 0)
      VAR_1 = (VAR_1 ^ ((addressT) 1 << 31)) - ((addressT) 1 << 31);

  if ((VAR_1 & ~VAR_3) != 0 && (VAR_1 & ~VAR_3) != ~VAR_3)
    {
      char VAR_4[40], VAR_5[40];

      FUNC_3 (VAR_4, VAR_1);
      FUNC_3 (VAR_5, VAR_1 & VAR_3);
      FUNC_2 (FUNC_0("%s shortened to %s"), VAR_4, VAR_5);
    }
  return VAR_1 & VAR_3;
}
