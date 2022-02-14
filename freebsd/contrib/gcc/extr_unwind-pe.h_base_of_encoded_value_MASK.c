
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int dummy; } ;
typedef int _Unwind_Ptr ;






 unsigned char VAR_0 ;


 int FUNC_0 (struct _Unwind_Context*) ;
 int FUNC_1 (struct _Unwind_Context*) ;
 int FUNC_2 (struct _Unwind_Context*) ;
 int FUNC_3 () ;

__attribute__((used)) static _Unwind_Ptr
FUNC_4 (unsigned char VAR_1, struct _Unwind_Context *VAR_2)
{
  if (VAR_1 == VAR_0)
    return 0;

  switch (VAR_1 & 0x70)
    {
    case 133:
    case 129:
    case 132:
      return 0;

    case 128:
      return FUNC_2 (VAR_2);
    case 131:
      return FUNC_0 (VAR_2);
    case 130:
      return FUNC_1 (VAR_2);
    }
  FUNC_3 ();
}
