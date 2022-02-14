
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_info {int dummy; } ;
struct arm_prologue_cache {scalar_t__ framereg; int framesize; int frameoffset; TYPE_1__* saved_regs; } ;
struct TYPE_2__ {int addr; } ;
typedef int LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct frame_info*) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (struct frame_info*,scalar_t__) ;
 unsigned int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int,int *) ;
 int FUNC_8 (scalar_t__,struct arm_prologue_cache*) ;

__attribute__((used)) static void
FUNC_9 (struct frame_info *VAR_5, struct arm_prologue_cache *VAR_6)
{
  int VAR_7, VAR_8, VAR_9, VAR_10;
  CORE_ADDR VAR_11, VAR_12, VAR_13;
  CORE_ADDR VAR_14 = FUNC_3 (VAR_5);


  VAR_6->framereg = VAR_4;
  VAR_6->framesize = 0;
  VAR_6->frameoffset = 0;

  if (&FUNC_4)
   FUNC_4(&VAR_14);


  if (FUNC_1 (VAR_14))
    {
      FUNC_8 (VAR_14, VAR_6);
      return;
    }



  if (FUNC_2 (VAR_14, ((void*)0), &VAR_11, &VAR_12))
    {
      if (VAR_12 > VAR_11 + 64)
 {
   VAR_12 = VAR_11 + 64;
 }
    }
  else
    {





      CORE_ADDR VAR_15;
      LONGEST VAR_16;

      VAR_15 = FUNC_5 (VAR_5, VAR_1);
      if (!FUNC_7 (VAR_15, 4, &VAR_16))
        return;
      else
        {
          VAR_11 = FUNC_0 (VAR_16) - 8;
          VAR_12 = VAR_11 + 64;
        }
    }

  if (VAR_14 < VAR_12)
    VAR_12 = VAR_14;
  VAR_8 = VAR_9 = VAR_10 = 0;

  for (VAR_13 = VAR_11;
       VAR_13 < VAR_12;
       VAR_13 += 4)
    {
      unsigned int VAR_17 = FUNC_6 (VAR_13, 4);

      if (VAR_17 == 0xe1a0c00d)
 {
   VAR_10 = 0;
   continue;
 }
      else if ((VAR_17 & 0xfffff000) == 0xe28dc000)
 {
   unsigned VAR_18 = VAR_17 & 0xff;
   unsigned VAR_19 = (VAR_17 & 0xf00) >> 7;
   VAR_18 = (VAR_18 >> VAR_19) | (VAR_18 << (32 - VAR_19));
   VAR_10 = VAR_18;
   continue;
 }
      else if ((VAR_17 & 0xfffff000) == 0xe24dc000)
 {
   unsigned VAR_20 = VAR_17 & 0xff;
   unsigned VAR_21 = (VAR_17 & 0xf00) >> 7;
   VAR_20 = (VAR_20 >> VAR_21) | (VAR_20 << (32 - VAR_21));
   VAR_10 = -VAR_20;
   continue;
 }
      else if (VAR_17 == 0xe52de004)
 {
   VAR_8 -= 4;
   VAR_6->saved_regs[VAR_2].addr = VAR_8;
   continue;
 }
      else if ((VAR_17 & 0xffff0000) == 0xe92d0000)



 {
   int VAR_22 = VAR_17 & 0xffff;


   for (VAR_7 = VAR_3; VAR_7 >= 0; VAR_7--)
     if (VAR_22 & (1 << VAR_7))
       {
  VAR_8 -= 4;
  VAR_6->saved_regs[VAR_7].addr = VAR_8;
       }
 }
      else if ((VAR_17 & 0xffffc000) == 0xe54b0000 ||
        (VAR_17 & 0xffffc0f0) == 0xe14b00b0 ||
        (VAR_17 & 0xffffc000) == 0xe50b0000)
 {

   continue;
 }
      else if ((VAR_17 & 0xffffc000) == 0xe5cd0000 ||
        (VAR_17 & 0xffffc0f0) == 0xe1cd00b0 ||
        (VAR_17 & 0xffffc000) == 0xe58d0000)
 {

   continue;
 }
      else if ((VAR_17 & 0xfffff000) == 0xe24cb000)
 {
   unsigned VAR_23 = VAR_17 & 0xff;
   unsigned VAR_24 = (VAR_17 & 0xf00) >> 7;
   VAR_23 = (VAR_23 >> VAR_24) | (VAR_23 << (32 - VAR_24));
   VAR_9 = -VAR_23 + VAR_10;
   VAR_6->framereg = VAR_1;
 }
      else if ((VAR_17 & 0xfffff000) == 0xe24dd000)
 {
   unsigned VAR_25 = VAR_17 & 0xff;
   unsigned VAR_26 = (VAR_17 & 0xf00) >> 7;
   VAR_25 = (VAR_25 >> VAR_26) | (VAR_25 << (32 - VAR_26));
   VAR_8 -= VAR_25;
 }
      else if ((VAR_17 & 0xffff7fff) == 0xed6d0103)
 {
   VAR_8 -= 12;
   VAR_7 = VAR_0 + ((VAR_17 >> 12) & 0x07);
   VAR_6->saved_regs[VAR_7].addr = VAR_8;
 }
      else if ((VAR_17 & 0xffbf0fff) == 0xec2d0200)
 {
   int VAR_27;
   unsigned int VAR_28, VAR_29;

   if ((VAR_17 & 0x800) == 0x800)
     {
       if ((VAR_17 & 0x40000) == 0x40000)
  VAR_27 = 3;
       else
  VAR_27 = 1;
     }
   else
     {
       if ((VAR_17 & 0x40000) == 0x40000)
  VAR_27 = 2;
       else
  VAR_27 = 4;
     }

   VAR_28 = VAR_0 + ((VAR_17 >> 12) & 0x7);
   VAR_29 = VAR_28 + VAR_27;
   for (; VAR_28 < VAR_29; VAR_28++)
     {
       VAR_8 -= 12;
       VAR_6->saved_regs[VAR_28++].addr = VAR_8;
     }
 }
      else if ((VAR_17 & 0xf0000000) != 0xe0000000)
 break;
      else if ((VAR_17 & 0xfe200000) == 0xe8200000)
 break;
      else


 continue;
    }




  VAR_6->framesize = -VAR_8;
  if (VAR_6->framereg == VAR_1)
    VAR_6->frameoffset = VAR_9 - VAR_8;
  else
    VAR_6->frameoffset = 0;
}
