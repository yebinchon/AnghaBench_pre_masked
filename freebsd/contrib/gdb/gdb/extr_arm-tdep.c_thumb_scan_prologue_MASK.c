
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {scalar_t__ line; scalar_t__ end; } ;
struct arm_prologue_cache {int framesize; int frameoffset; size_t framereg; TYPE_1__* saved_regs; } ;
struct TYPE_2__ {int addr; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct symtab_and_line FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 unsigned short FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4 (CORE_ADDR VAR_3, struct arm_prologue_cache *VAR_4)
{
  CORE_ADDR VAR_5;
  CORE_ADDR VAR_6;
  CORE_ADDR VAR_7;

  int VAR_8[16];





  int VAR_9 = 0;
  int VAR_10;

  if (FUNC_1 (VAR_3, ((void*)0), &VAR_5, &VAR_6))
    {
      struct symtab_and_line VAR_11 = FUNC_0 (VAR_5, 0);

      if (VAR_11.line == 0)
 VAR_6 = VAR_3;
      else if (VAR_11.end < VAR_6)
 VAR_6 = VAR_11.end;
    }
  else


    VAR_6 = VAR_5 + 40;

  VAR_6 = FUNC_2 (VAR_6, VAR_3);



  for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
    VAR_8[VAR_10] = VAR_10;





  VAR_4->framesize = 0;
  for (VAR_7 = VAR_5;
       (VAR_7 < VAR_6) && ((VAR_9 & 7) != 7);
       VAR_7 += 2)
    {
      unsigned short VAR_12;
      int VAR_13;
      int VAR_14;

      VAR_12 = FUNC_3 (VAR_7, 2);

      if ((VAR_12 & 0xfe00) == 0xb400)
 {
   int VAR_15;
   VAR_9 |= 1;


   VAR_15 = (VAR_12 & 0xff) | ((VAR_12 & 0x100) << 6);


   for (VAR_13 = VAR_0; VAR_13 >= 0; VAR_13--)
     if (VAR_15 & (1 << VAR_13))
       {
  VAR_4->framesize += 4;
  VAR_4->saved_regs[VAR_8[VAR_13]].addr = -VAR_4->framesize;

  VAR_8[VAR_13] = VAR_13;
       }
 }
      else if ((VAR_12 & 0xff00) == 0xb000)

 {
   if ((VAR_9 & 1) == 0)
     continue;
   else
     VAR_9 |= 4;

   VAR_14 = (VAR_12 & 0x7f) << 2;
   if (VAR_12 & 0x80)
     {
       VAR_4->frameoffset += VAR_14;
       VAR_14 = -VAR_14;
     }
   VAR_4->framesize -= VAR_14;
 }
      else if ((VAR_12 & 0xff00) == 0xaf00)
 {
   VAR_9 |= 2;
   VAR_4->framereg = VAR_2;

   VAR_4->frameoffset = (VAR_12 & 0xff) << 2;
 }
      else if (VAR_12 == 0x466f)
 {
   VAR_9 |= 2;
   VAR_4->framereg = VAR_2;
   VAR_4->frameoffset = 0;
   VAR_8[VAR_2] = VAR_1;
 }
      else if ((VAR_12 & 0xffc0) == 0x4640)
 {
   int VAR_16 = VAR_12 & 7;
   int VAR_17 = ((VAR_12 >> 3) & 7) + 8;
   VAR_8[VAR_16] = VAR_17;
 }
      else



 continue;
    }
}
