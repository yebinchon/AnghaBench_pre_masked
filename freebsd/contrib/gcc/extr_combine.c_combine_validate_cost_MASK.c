
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {scalar_t__ other_insn; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,char*,int,...) ;
 int FUNC_3 (scalar_t__) ;
 size_t VAR_1 ;
 int* VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_4, rtx VAR_5, rtx VAR_6, rtx VAR_7, rtx VAR_8)
{
  int VAR_9, VAR_10, VAR_11;
  int VAR_12, VAR_13;
  int VAR_14, VAR_15;


  VAR_10 = FUNC_0 (VAR_5) <= VAR_1
     ? VAR_2[FUNC_0 (VAR_5)] : 0;
  VAR_11 = FUNC_0 (VAR_6) <= VAR_1
     ? VAR_2[FUNC_0 (VAR_6)] : 0;

  if (VAR_4)
    {
      VAR_9 = FUNC_0 (VAR_4) <= VAR_1
  ? VAR_2[FUNC_0 (VAR_4)] : 0;
      VAR_14 = (VAR_9 > 0 && VAR_10 > 0 && VAR_11 > 0)
   ? VAR_9 + VAR_10 + VAR_11 : 0;
    }
  else
    {
      VAR_14 = (VAR_10 > 0 && VAR_11 > 0) ? VAR_10 + VAR_11 : 0;
      VAR_9 = 0;
    }


  VAR_13 = FUNC_3 (VAR_7);
  if (VAR_8)
    {
      VAR_12 = FUNC_3 (VAR_8);
      VAR_15 = (VAR_12 > 0 && VAR_13 > 0)
   ? VAR_12 + VAR_13 : 0;
    }
  else
    {
      VAR_15 = VAR_13;
      VAR_12 = 0;
    }

  if (VAR_3.other_insn)
    {
      int VAR_16, VAR_17;

      VAR_16 = (FUNC_0 (VAR_3.other_insn) <= VAR_1
   ? VAR_2[FUNC_0 (VAR_3.other_insn)] : 0);
      VAR_17 = FUNC_3 (FUNC_1 (VAR_3.other_insn));
      if (VAR_16 > 0 && VAR_17 > 0)
 {
   VAR_14 += VAR_16;
   VAR_15 += VAR_17;
 }
      else
 VAR_14 = 0;
    }



  if (VAR_14 > 0
      && VAR_15 > VAR_14)
    {
      if (VAR_0)
 {
   if (VAR_4)
     {
       FUNC_2 (VAR_0,
         "rejecting combination of insns %d, %zu and %zu\n",
         FUNC_0 (VAR_4), FUNC_0 (VAR_5), FUNC_0 (VAR_6));
       FUNC_2 (VAR_0, "original costs %d + %d + %d = %d\n",
         VAR_9, VAR_10, VAR_11, VAR_14);
     }
   else
     {
       FUNC_2 (VAR_0,
         "rejecting combination of insns %d and %zu\n",
         FUNC_0 (VAR_5), FUNC_0 (VAR_6));
       FUNC_2 (VAR_0, "original costs %d + %d = %d\n",
         VAR_10, VAR_11, VAR_14);
     }

   if (VAR_8)
     {
       FUNC_2 (VAR_0, "replacement costs %d + %d = %d\n",
         VAR_12, VAR_13, VAR_15);
     }
   else
     FUNC_2 (VAR_0, "replacement cost %d\n", VAR_15);
 }

      return 0;
    }


  VAR_2[FUNC_0 (VAR_5)] = VAR_12;
  VAR_2[FUNC_0 (VAR_6)] = VAR_13;
  if (VAR_4)
    VAR_2[FUNC_0 (VAR_4)] = 0;

  return 1;
}
