
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_info {int dummy; } ;
struct TYPE_2__ {int integer; } ;
struct continuation_arg {TYPE_1__ data; struct continuation_arg* next; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct continuation_arg*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int*,int*) ;
 scalar_t__ FUNC_4 (int ,char**,int*,int*) ;
 struct frame_info* FUNC_5 () ;
 int FUNC_6 (struct frame_info*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12 (int VAR_12, int VAR_13, int VAR_14)
{
  struct continuation_arg *VAR_15;
  struct continuation_arg *VAR_16;
  struct continuation_arg *VAR_17;
  struct frame_info *VAR_18;

  if (VAR_14 > 0)
    {
      FUNC_1 ();

      VAR_18 = FUNC_5 ();
      if (!VAR_18)
 FUNC_2 ("No current frame");
      VAR_4 = FUNC_6 (VAR_18);
      VAR_9 = FUNC_9 ();

      if (!VAR_13)
 {
   FUNC_3 (VAR_11, &VAR_8, &VAR_7);


   if (VAR_7 == 0 && VAR_10)
     {
       VAR_8 = VAR_7 = 1;
     }
   else if (VAR_7 == 0)
     {
       char *VAR_19;
       if (FUNC_4 (VAR_11, &VAR_19, &VAR_8,
         &VAR_7) == 0)
  FUNC_2 ("Cannot find bounds of current function");

       FUNC_10 ();
       FUNC_7 ("Single stepping until exit from function %s, \nwhich has no line number information.\n", VAR_19);


     }
 }
      else
 {

   VAR_8 = VAR_7 = 1;
   if (!VAR_12)



     VAR_6 = VAR_1;
 }

      if (VAR_12)
 VAR_6 = VAR_0;

      VAR_5 = (VAR_14 > 1);
      VAR_15 =
 (struct continuation_arg *) FUNC_11 (sizeof (struct continuation_arg));
      VAR_16 =
 (struct continuation_arg *) FUNC_11 (sizeof (struct continuation_arg));
      VAR_17 =
 (struct continuation_arg *) FUNC_11 (sizeof (struct continuation_arg));
      VAR_15->next = VAR_16;
      VAR_15->data.integer = VAR_12;
      VAR_16->next = VAR_17;
      VAR_16->data.integer = VAR_13;
      VAR_17->next = ((void*)0);
      VAR_17->data.integer = VAR_14;
      FUNC_0 (VAR_3, VAR_15);
      FUNC_8 ((CORE_ADDR) -1, VAR_2, 1);
    }
}
