
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ia64_insn ;
typedef enum ia64_insn_type { ____Placeholder_ia64_insn_type } ia64_insn_type ;
struct TYPE_2__ {int insn_index; short priority; scalar_t__ next_flag; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int*,unsigned int*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (int,int,int) ;

__attribute__((used)) static int
FUNC_3 (ia64_insn VAR_1, enum ia64_insn_type VAR_2)
{
  int VAR_3[41];
  int VAR_4[41];
  int VAR_5[41];
  int VAR_6 = 0;
  short VAR_7 = -1;
  short VAR_8 = -1;

  VAR_3[VAR_6] = 0;
  VAR_5[VAR_6] = 0;
  VAR_4[VAR_6] = 40;

  while (1)
    {
      int VAR_9 = VAR_5[VAR_6];
      unsigned int VAR_10;
      int VAR_11 = VAR_4[VAR_6];
      int VAR_12;
      int VAR_13[3] = {0};
      int VAR_14;
      int VAR_15;

      VAR_12 = FUNC_1 (VAR_9, VAR_13, &VAR_10);

      VAR_4[VAR_6] = VAR_11;


      if (VAR_10 & 0x40)
 {
   VAR_11 -= VAR_13[0];
 }


      VAR_15 = VAR_1 & (((ia64_insn) 1) << VAR_11) ? 1 : 0;
      VAR_14 = -1;




      switch (VAR_3[VAR_6])
 {
 case 0:
   VAR_3[VAR_6]++;
   if (VAR_15 == 0 && (VAR_10 & 0x80))
     {
       if ((VAR_10 & 0xf8) == 0x80)
  {
    int VAR_16 = VAR_10 & 0x7;
    int VAR_17;

    for (VAR_17 = 0; VAR_17 <= VAR_16; VAR_17++)
      {
        int VAR_18 =
   VAR_1 & (((ia64_insn) 1) << (VAR_11 - VAR_17)) ? 1 : 0;
        if (VAR_18)
   {
     break;
   }
      }
    if (VAR_17 > VAR_16)
      {
        VAR_14 = VAR_9 + ((VAR_12 + 7) / 8);
        VAR_11 -= VAR_16;
        break;
      }
  }
       else if (! VAR_15)
  {
    VAR_14 = VAR_9 + ((VAR_12 + 7) / 8);
    break;
  }
     }

 case 1:


   VAR_3[VAR_6]++;
   if (VAR_15 && (VAR_10 & 0x30) != 0 && ((VAR_10 & 0x30) != 0x30))
     {
       VAR_14 = VAR_13[1];
       break;
     }

 case 2:





   VAR_3[VAR_6]++;
   if ((VAR_10 & 0x08) || ((VAR_10 & 0x30) == 0x30))
     {
       VAR_14 = VAR_13[2];
       break;
     }
 }






      if ((VAR_14 >= 0) && (VAR_14 & 32768))
 {
   short VAR_19 = VAR_14 & 32767;
          short VAR_20 = -1;

   if (VAR_14 > 65535)
     {
       FUNC_0 ();
     }



   while (VAR_19 >= 0)
     {
       int VAR_21 = VAR_0[VAR_19].insn_index;

              VAR_20 = VAR_0[VAR_19].priority;

       if (FUNC_2 (VAR_1, VAR_21, VAR_2)
                  && VAR_20 > VAR_8)
  {
    break;
  }
       if (VAR_0[VAR_19].next_flag)
  {
    VAR_19++;
  }
       else
  {
    VAR_19 = -1;
  }
     }

   if (VAR_19 >= 0)
     {
              VAR_7 = VAR_19;
              VAR_8 = VAR_20;
     }


          VAR_14 = -2;
 }





      if (VAR_14 == -1)
 {
   VAR_6--;
   if (VAR_6 < 0)
     {
              return VAR_7;
     }
 }
      else if (VAR_14 >= 0)
 {
   VAR_6++;
   VAR_4[VAR_6] = VAR_11 - 1;
   VAR_5[VAR_6] = VAR_14;
   VAR_3[VAR_6] = 0;
 }
    }
}
