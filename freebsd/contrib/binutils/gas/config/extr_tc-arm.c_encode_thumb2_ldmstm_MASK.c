
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_2__ {int instruction; void* error; } ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (void*,...) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_3 (int VAR_2, unsigned VAR_3, bfd_boolean VAR_4)
{
  bfd_boolean VAR_5;

  VAR_5 = (VAR_1.instruction & (1 << 20)) != 0;

  if (VAR_3 & (1 << 13))
    VAR_1.error = FUNC_0("SP not allowed in register list");
  if (VAR_5)
    {
      if (VAR_3 & (1 << 14)
   && VAR_3 & (1 << 15))
 VAR_1.error = FUNC_0("LR and PC should not both be in register list");

      if ((VAR_3 & (1 << VAR_2)) != 0
   && VAR_4)
 FUNC_1 (FUNC_0("base register should not be in register list "
     "when written back"));
    }
  else
    {
      if (VAR_3 & (1 << 15))
 VAR_1.error = FUNC_0("PC not allowed in register list");

      if (VAR_3 & (1 << VAR_2))
 FUNC_1 (FUNC_0("value stored for r%d is UNPREDICTABLE"), VAR_2);
    }

  if ((VAR_3 & (VAR_3 - 1)) == 0)
    {

      if (VAR_4)
 {
   if (VAR_1.instruction & (1 << 23))
     VAR_1.instruction = 0x00000b04;
   else
     VAR_1.instruction = 0x00000d04;
 }
      else
 {
   if (VAR_1.instruction & (1 << 23))
     VAR_1.instruction = 0x00800000;
   else
     VAR_1.instruction = 0x00000c04;
 }

      VAR_1.instruction |= 0xf8400000;
      if (VAR_5)
 VAR_1.instruction |= 0x00100000;

      VAR_3 = FUNC_2(VAR_3) - 1;
      VAR_3 <<= 12;
    }
  else if (VAR_4)
    VAR_1.instruction |= VAR_0;

  VAR_1.instruction |= VAR_3;
  VAR_1.instruction |= VAR_2 << 16;
}
