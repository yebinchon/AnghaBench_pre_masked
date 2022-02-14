
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USItype ;
typedef int UDItype ;
typedef int DItype ;
typedef int DFtype ;



__attribute__((used)) static DItype
FUNC_0 (DFtype VAR_0)
{
  USItype VAR_1, VAR_2;

  VAR_1 = VAR_0 / (((UDItype) 1) << (sizeof (USItype) * 8));
  VAR_2 = VAR_0 - ((DFtype) VAR_1) * (((UDItype) 1) << (sizeof (USItype) * 8));
  return ((UDItype) VAR_1 << (sizeof (USItype) * 8)) | VAR_2;
}
