
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minimal_symbol {int dummy; } ;
struct TYPE_2__ {int wordsize; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct minimal_symbol*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (int ) ;
 struct minimal_symbol* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;
 unsigned int FUNC_5 (scalar_t__,int) ;
 unsigned int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;

CORE_ADDR
FUNC_8 (CORE_ADDR VAR_1)
{
  unsigned int VAR_2, VAR_3;
  int VAR_4;
  CORE_ADDR VAR_5;
  struct minimal_symbol *VAR_6;

  static unsigned VAR_7[] =
  {
    0x800b0000,
    0x90410014,
    0x7c0903a6,
    0x804b0004,
    0x816b0008,
    0x4e800420,
    0x4e800020,
    0
  };


  VAR_6 = FUNC_3 (VAR_1);
  if (VAR_6 && FUNC_7 (VAR_1, FUNC_0 (VAR_6)))
    {

      VAR_3 = FUNC_5 (VAR_1 + 8, 4);
      if ((VAR_3 & 0xfc000003) == 0x48000000)
 {


   VAR_4 = ((int)(VAR_3 << 6) >> 6);
   return VAR_1 + 8 + VAR_4;
 }
    }


  VAR_5 = FUNC_1 (VAR_1);
  if (VAR_5)
    return VAR_5;

  for (VAR_2 = 0; VAR_7[VAR_2]; ++VAR_2)
    {
      VAR_3 = FUNC_5 (VAR_1 + (VAR_2 * 4), 4);
      if (VAR_3 != VAR_7[VAR_2])
 return 0;
    }
  VAR_2 = FUNC_6 (11);
  VAR_1 = FUNC_4 (VAR_2, FUNC_2 (VAR_0)->wordsize);
  return VAR_1;
}
