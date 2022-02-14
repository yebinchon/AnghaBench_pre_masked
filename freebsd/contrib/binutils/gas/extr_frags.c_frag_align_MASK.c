
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
typedef int relax_substateT ;
typedef int offsetT ;
typedef int addressT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int ,int,int,int ,int *,int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void
FUNC_1 (int VAR_4, int VAR_5, int VAR_6)
{
  if (VAR_2 == VAR_1)
    {
      addressT VAR_7;
      addressT VAR_8;

      VAR_8 = (~(addressT) 0) << VAR_4;
      VAR_7 = (VAR_0 + ~VAR_8) & VAR_8;
      if (VAR_6 == 0 || VAR_7 - VAR_0 <= (addressT) VAR_6)
 VAR_0 = VAR_7;
    }
  else
    {
      char *VAR_9;

      VAR_9 = FUNC_0 (VAR_3, 1, 1, (relax_substateT) VAR_6,
      (symbolS *) 0, (offsetT) VAR_4, (char *) 0);
      *VAR_9 = VAR_5;
    }
}
