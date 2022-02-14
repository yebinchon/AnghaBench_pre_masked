
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USItype ;
typedef scalar_t__ SItype ;
typedef int SFtype ;



SFtype
FUNC_0 (USItype VAR_0)
{
  SItype VAR_1 = (SItype) VAR_0;
  if (VAR_1 < 0)
    {


      return (SFtype) 2.0 * (SFtype) (SItype) ((VAR_0 & 1) | (VAR_0 >> 1));
    }
  else
    return (SFtype) VAR_1;
}
