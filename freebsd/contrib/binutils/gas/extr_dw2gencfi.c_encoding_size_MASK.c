
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int offsetT ;


 unsigned char VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static offsetT
FUNC_2 (unsigned char VAR_2)
{
  if (VAR_2 == VAR_0)
    return 0;
  switch (VAR_2 & 0x7)
    {
    case 0:
      return FUNC_1 (VAR_1) == 64 ? 8 : 4;
    case 130:
      return 2;
    case 129:
      return 4;
    case 128:
      return 8;
    default:
      FUNC_0 ();
    }
}
