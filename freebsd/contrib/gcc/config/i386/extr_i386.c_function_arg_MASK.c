
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {int sse_regno; int nregs; size_t regno; int float_in_sse; int mmx_regno; int words; int mmx_nregs; int warn_mmx; int sse_nregs; int warn_sse; int fastcall; scalar_t__ maybe_vaarg; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

 scalar_t__ VAR_2 ;



 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 scalar_t__ FUNC_4 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (int,int,int ,int ,int,int ,int *,int) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (int,int,int) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int VAR_12 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int * VAR_13 ;

rtx
FUNC_13 (CUMULATIVE_ARGS *VAR_14, enum machine_mode VAR_15,
       tree VAR_16, int VAR_17)
{
  enum machine_mode VAR_18 = VAR_15;
  rtx VAR_19 = VAR_2;
  int VAR_20 =
    (VAR_18 == 145) ? FUNC_9 (VAR_16) : (int) FUNC_3 (VAR_18);
  int VAR_21 = (VAR_20 + VAR_8 - 1) / VAR_8;
  static bool VAR_22, VAR_23;



  if (VAR_16 && FUNC_4 (VAR_16) == VAR_9)
    VAR_18 = FUNC_11 (VAR_16);




  if (VAR_18 == VAR_10)
    {
      if (VAR_4)
 return FUNC_1 (VAR_14->maybe_vaarg
   ? (VAR_14->sse_nregs < 0
      ? VAR_3
      : VAR_14->sse_regno)
   : -1);
      else
 return VAR_11;
    }
  if (VAR_4)
    VAR_19 = FUNC_5 (VAR_18, VAR_15, VAR_16, 0, VAR_14->nregs,
          VAR_14->sse_nregs,
          &VAR_13 [VAR_14->regno],
          VAR_14->sse_regno);
  else
    switch (VAR_18)
      {

      default:
 break;

      case 145:
 if (VAR_20 < 0)
   break;

      case 143:
      case 139:
      case 142:
      case 141:
 if (VAR_21 <= VAR_14->nregs)
   {
     int VAR_24 = VAR_14->regno;



     if (VAR_14->fastcall)
       {
         if (VAR_18 == 145 || VAR_18 == 143)
           break;


         if (VAR_24 == 0)
    VAR_24 = 2;
       }
     VAR_19 = FUNC_8 (VAR_18, VAR_24);
   }
 break;
      case 144:
 if (VAR_14->float_in_sse < 2)
   break;
      case 140:
 if (VAR_14->float_in_sse < 1)
   break;

      case 138:
      case 137:
      case 129:
      case 130:
      case 135:
      case 131:
      case 136:
 if (!VAR_16 || !FUNC_0 (VAR_16))
   {
     if (!VAR_7 && !VAR_22 && VAR_14->warn_sse)
       {
  VAR_22 = 1;
  FUNC_12 (0, "SSE vector argument without SSE enabled "
    "changes the ABI");
       }
     if (VAR_14->sse_nregs)
       VAR_19 = FUNC_7 (VAR_18, VAR_15,
      VAR_14->sse_regno + VAR_1);
   }
 break;
      case 128:
      case 132:
      case 133:
      case 134:
 if (!VAR_16 || !FUNC_0 (VAR_16))
   {
     if (!VAR_6 && !VAR_23 && VAR_14->warn_mmx)
       {
  VAR_23 = 1;
  FUNC_12 (0, "MMX vector argument without MMX enabled "
    "changes the ABI");
       }
     if (VAR_14->mmx_nregs)
       VAR_19 = FUNC_7 (VAR_18, VAR_15,
      VAR_14->mmx_regno + VAR_0);
   }
 break;
      }

  if (VAR_5)
    {
      FUNC_6 (VAR_12,
        "function_arg (size=%d, wds=%2d, nregs=%d, mode=%4s, named=%d, ",
        VAR_21, VAR_14->words, VAR_14->nregs, FUNC_2 (VAR_18), VAR_17);

      if (VAR_19)
 FUNC_10 (VAR_12, VAR_19);
      else
 FUNC_6 (VAR_12, ", stack");

      FUNC_6 (VAR_12, " )\n");
    }

  return VAR_19;
}
