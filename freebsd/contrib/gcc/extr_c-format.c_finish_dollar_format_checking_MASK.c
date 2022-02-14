
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number_dollar_extra_args; int number_other; } ;
typedef TYPE_1__ format_check_results ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static void
FUNC_1 (format_check_results *VAR_6, int VAR_7)
{
  int VAR_8;
  bool VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
    {
      if (!VAR_3[VAR_8])
 {
   if (VAR_7 && (VAR_4 == 0
     || VAR_2[VAR_8]))
     VAR_9 = 1;
   else
     FUNC_0 (VAR_0,
       "format argument %d unused before used argument %d in $-style format",
       VAR_8 + 1, VAR_5);
 }
    }
  if (VAR_9
      || (VAR_4
   && VAR_5 < VAR_1))
    {
      VAR_6->number_other--;
      VAR_6->number_dollar_extra_args++;
    }
}
