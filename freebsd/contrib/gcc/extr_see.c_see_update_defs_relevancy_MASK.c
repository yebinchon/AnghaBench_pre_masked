
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct see_entry_extra_info {int relevancy; int local_relevancy; int source_mode; int local_source_mode; int source_mode_signed; int source_mode_unsigned; } ;
typedef int * rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum entry_type { ____Placeholder_entry_type } entry_type ;
struct TYPE_2__ {int * pred; int * reg; struct see_entry_extra_info* extra_info; } ;


 int FUNC_0 (int ,unsigned int) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;

 char* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;


 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (scalar_t__,char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int*,int*) ;
 struct see_entry_extra_info* FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10 (void)
{
  struct see_entry_extra_info *VAR_6;
  unsigned int VAR_7;
  rtx VAR_8 = ((void*)0);
  rtx VAR_9 = ((void*)0);
  enum entry_type VAR_10;
  enum machine_mode VAR_11;
  enum machine_mode VAR_12;

  if (!VAR_4 || !VAR_2)
    return;

  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
      VAR_8 = FUNC_1 (FUNC_0 (VAR_4, VAR_7));
      VAR_9 = FUNC_2 (FUNC_0 (VAR_4, VAR_7));

      VAR_10 = FUNC_8 (VAR_8, &VAR_11, &VAR_12);

      VAR_6 = FUNC_9 (sizeof (struct see_entry_extra_info));
      VAR_6->relevancy = VAR_10;
      VAR_6->local_relevancy = VAR_10;
      if (VAR_10 != 130)
 {
   VAR_6->source_mode = VAR_11;
   VAR_6->local_source_mode = VAR_11;
 }
      else
 {
   VAR_6->source_mode_signed = VAR_11;
   VAR_6->source_mode_unsigned = VAR_12;
 }
      VAR_2[VAR_7].extra_info = VAR_6;
      VAR_2[VAR_7].reg = ((void*)0);
      VAR_2[VAR_7].pred = ((void*)0);

      if (VAR_5)
 {
   if (VAR_10 == VAR_1)
     {
       FUNC_6 (VAR_5, "d%i insn %i reg %i ",
              VAR_7, (VAR_8 ? FUNC_4 (VAR_8) : -1), FUNC_5 (VAR_9));
       FUNC_6 (VAR_5, "NOT RELEVANT \n");
     }
   else
     {
       FUNC_6 (VAR_5, "d%i insn %i reg %i ",
         VAR_7 ,FUNC_4 (VAR_8), FUNC_5 (VAR_9));
       FUNC_6 (VAR_5, "RELEVANT - ");
       switch (VAR_10)
  {
  case 129 :
    FUNC_6 (VAR_5, "SIGN_EXTENDED_DEF, source_mode = %s\n",
      FUNC_3 (VAR_11));
    break;
  case 128 :
    FUNC_6 (VAR_5, "ZERO_EXTENDED_DEF, source_mode = %s\n",
      FUNC_3 (VAR_11));
    break;
  case 130 :
    FUNC_6 (VAR_5, "EXTENDED_DEF, ");
    if (VAR_11 != VAR_0
        && VAR_12 != VAR_0)
      {
        FUNC_6 (VAR_5, "positive const, ");
        FUNC_6 (VAR_5, "source_mode_signed = %s, ",
          FUNC_3 (VAR_11));
        FUNC_6 (VAR_5, "source_mode_unsigned = %s\n",
          FUNC_3 (VAR_12));
      }
    else if (VAR_11 != VAR_0)
      FUNC_6 (VAR_5, "source_mode_signed = %s\n",
        FUNC_3 (VAR_11));
    else
      FUNC_6 (VAR_5, "source_mode_unsigned = %s\n",
        FUNC_3 (VAR_12));
    break;
  default :
    FUNC_7 ();
  }
     }
 }
    }
}
