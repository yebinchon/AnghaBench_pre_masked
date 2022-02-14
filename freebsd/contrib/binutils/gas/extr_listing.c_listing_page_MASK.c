
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ edict; char* edict_arg; struct TYPE_3__* next; } ;
typedef TYPE_1__ list_info_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;

__attribute__((used)) static void
FUNC_1 (list_info_type *VAR_11)
{


  if ((VAR_3 || (VAR_6 >= (unsigned int) VAR_8))
      && VAR_8 != 0)
    {
      unsigned int VAR_12 = 10;
      int VAR_13 = 0;
      int VAR_14 = 0;

      VAR_7++;

      while (VAR_12 != 0 && VAR_11)
 {
   if (VAR_11->edict == VAR_0 && !VAR_14)
     {
       VAR_14 = 1;
       VAR_9 = VAR_11->edict_arg;
     }
   if (VAR_11->edict == VAR_1 && !VAR_13)
     {
       VAR_13 = 1;
       VAR_10 = VAR_11->edict_arg;
     }
   VAR_11 = VAR_11->next;
   VAR_12--;
 }

      if (VAR_7 > 1)
 {
   FUNC_0 (VAR_5, "\f");
 }

      FUNC_0 (VAR_5, "%s %s \t\t\tpage %d\n", VAR_2, VAR_4, VAR_7);
      FUNC_0 (VAR_5, "%s\n", VAR_10);
      FUNC_0 (VAR_5, "%s\n", VAR_9);
      VAR_6 = 3;
      VAR_3 = 0;
    }
}
