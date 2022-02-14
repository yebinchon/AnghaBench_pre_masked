
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {int words; int nregs; int sse_nregs; int regno; int sse_regno; int float_in_sse; int sse_words; int mmx_words; int mmx_nregs; int mmx_regno; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int FUNC_0 (scalar_t__) ;



 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int FUNC_3 (int,scalar_t__,int ,int*,int*) ;
 int FUNC_4 (int ,char*,int,int,int,int,char*,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7 (CUMULATIVE_ARGS *VAR_4, enum machine_mode VAR_5,
        tree VAR_6, int VAR_7)
{
  int VAR_8 =
    (VAR_5 == 145) ? FUNC_5 (VAR_6) : (int) FUNC_2 (VAR_5);
  int VAR_9 = (VAR_8 + VAR_2 - 1) / VAR_2;

  if (VAR_6)
    VAR_5 = FUNC_6 (VAR_6);

  if (VAR_1)
    FUNC_4 (VAR_3, "function_adv (sz=%d, wds=%2d, nregs=%d, ssenregs=%d, "
      "mode=%s, named=%d)\n\n",
      VAR_9, VAR_4->words, VAR_4->nregs, VAR_4->sse_nregs,
      FUNC_1 (VAR_5), VAR_7);

  if (VAR_0)
    {
      int VAR_10, VAR_11;
      if (!FUNC_3 (VAR_5, VAR_6, 0, &VAR_10, &VAR_11))
 VAR_4->words += VAR_9;
      else if (VAR_11 <= VAR_4->sse_nregs && VAR_10 <= VAR_4->nregs)
 {
   VAR_4->nregs -= VAR_10;
   VAR_4->sse_nregs -= VAR_11;
   VAR_4->regno += VAR_10;
   VAR_4->sse_regno += VAR_11;
 }
      else
 VAR_4->words += VAR_9;
    }
  else
    {
      switch (VAR_5)
 {
 default:
   break;

 case 145:
   if (VAR_8 < 0)
     break;


 case 143:
 case 139:
 case 142:
 case 141:
   VAR_4->words += VAR_9;
   VAR_4->nregs -= VAR_9;
   VAR_4->regno += VAR_9;

   if (VAR_4->nregs <= 0)
     {
       VAR_4->nregs = 0;
       VAR_4->regno = 0;
     }
   break;

 case 144:
   if (VAR_4->float_in_sse < 2)
     break;
 case 140:
   if (VAR_4->float_in_sse < 1)
     break;


 case 138:
 case 137:
 case 129:
 case 130:
 case 135:
 case 131:
 case 136:
   if (!VAR_6 || !FUNC_0 (VAR_6))
     {
       VAR_4->sse_words += VAR_9;
       VAR_4->sse_nregs -= 1;
       VAR_4->sse_regno += 1;
       if (VAR_4->sse_nregs <= 0)
  {
    VAR_4->sse_nregs = 0;
    VAR_4->sse_regno = 0;
  }
     }
   break;

 case 128:
 case 132:
 case 133:
 case 134:
   if (!VAR_6 || !FUNC_0 (VAR_6))
     {
       VAR_4->mmx_words += VAR_9;
       VAR_4->mmx_nregs -= 1;
       VAR_4->mmx_regno += 1;
       if (VAR_4->mmx_nregs <= 0)
  {
    VAR_4->mmx_nregs = 0;
    VAR_4->mmx_regno = 0;
  }
     }
   break;
 }
    }
}
