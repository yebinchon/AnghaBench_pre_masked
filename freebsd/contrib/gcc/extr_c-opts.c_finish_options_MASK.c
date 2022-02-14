
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct deferred_opt {scalar_t__ code; char* arg; } ;
struct TYPE_2__ {int warn_dollars; scalar_t__ directives_only; int c99; scalar_t__ pedantic; int preprocessed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;
 size_t VAR_6 ;
 struct deferred_opt* VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int *,int ,int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_12 () ;

__attribute__((used)) static void
FUNC_13 (void)
{
  if (!VAR_5->preprocessed)
    {
      size_t VAR_12;

      FUNC_2 (VAR_11,
        FUNC_11 (&VAR_10, VAR_0, 0,
       FUNC_0("<built-in>"), 0));

      FUNC_5 (VAR_11, VAR_8);
      FUNC_1 (VAR_11);
      VAR_5->warn_dollars = (VAR_5->pedantic && !VAR_5->c99);

      FUNC_2 (VAR_11,
        FUNC_11 (&VAR_10, VAR_0, 0,
       FUNC_0("<command-line>"), 0));

      for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
 {
   struct deferred_opt *VAR_13 = &VAR_7[VAR_12];

   if (VAR_13->code == VAR_2)
     FUNC_4 (VAR_11, VAR_13->arg);
   else if (VAR_13->code == VAR_3)
     FUNC_10 (VAR_11, VAR_13->arg);
   else if (VAR_13->code == VAR_1)
     {
       if (VAR_13->arg[0] == '-')
  FUNC_9 (VAR_11, VAR_13->arg + 1);
       else
  FUNC_3 (VAR_11, VAR_13->arg);
     }
 }


      for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
 {
   struct deferred_opt *VAR_14 = &VAR_7[VAR_12];

   if (VAR_14->code == VAR_4
       && FUNC_7 (VAR_11, VAR_14->arg))
     {

       VAR_9 = VAR_6 + 1;
       FUNC_8 (VAR_11);
     }
 }
    }
  else if (VAR_5->directives_only)
    FUNC_6 (VAR_11);

  VAR_9 = 0;
  FUNC_12 ();
}
