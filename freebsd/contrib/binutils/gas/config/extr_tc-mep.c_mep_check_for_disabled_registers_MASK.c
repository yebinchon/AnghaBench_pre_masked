
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buffer; } ;
typedef TYPE_1__ mep_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_1 (mep_insn *VAR_7)
{
  static int VAR_8 = 0;
  static int VAR_9 = 0;
  static int VAR_10 = 0;
  static int VAR_11 = 0;
  unsigned int VAR_12, VAR_13;

  if (VAR_5)
    return;


  if (VAR_6)
    VAR_12 = VAR_7->buffer[0] * 256 + VAR_7->buffer[1];
  else
    VAR_12 = VAR_7->buffer[1] * 256 + VAR_7->buffer[0];




  if ((VAR_12 & 0xfffff00e) == 0x7008
      || (VAR_12 & 0xfffff00e) == 0x700a )
    {
      if (!VAR_8)
 {
   VAR_8 = 1;
   if ((VAR_4 & (1 << VAR_3))
       || (VAR_4 & (1 << VAR_2)))
     VAR_9 = 1;
   if (VAR_4 & (1 << VAR_1))
     VAR_11 = 1;
   if (VAR_4 & (1 << VAR_0))
     VAR_10 = 1;
 }

      VAR_13 = ((VAR_12 & 0x00f0) >> 4) | ((VAR_12 & 0x0001) << 4);
      switch (VAR_13)
 {
 case 7:
 case 8:
   if (!VAR_9)
     FUNC_0 ("$hi and $lo are disabled when MUL and DIV are off");
   break;
 case 12:
 case 13:
 case 14:
 case 15:
   if (!VAR_10)
     FUNC_0 ("$mb0, $me0, $mb1, and $me1 are disabled when COP is off");
   break;
 case 24:
 case 25:
   if (!VAR_11)
     FUNC_0 ("$dbg and $depc are disabled when DEBUG is off");
   break;
 }
    }
}
