
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dbase; int tbase; } ;
typedef int _Unwind_Ptr ;





 unsigned char VAR_0 ;


 int FUNC_0 () ;

__attribute__((used)) static _Unwind_Ptr
FUNC_1 (unsigned char VAR_1, struct object *VAR_2)
{
  if (VAR_1 == VAR_0)
    return 0;

  switch (VAR_1 & 0x70)
    {
    case 132:
    case 129:
    case 131:
      return 0;

    case 128:
      return (_Unwind_Ptr) VAR_2->tbase;
    case 130:
      return (_Unwind_Ptr) VAR_2->dbase;
    default:
      FUNC_0 ();
    }
}
