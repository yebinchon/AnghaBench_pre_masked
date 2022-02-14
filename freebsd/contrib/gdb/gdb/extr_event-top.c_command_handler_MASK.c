
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long longint; } ;
struct continuation_arg {TYPE_1__ data; struct continuation_arg* next; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct continuation_arg*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (char*,int) ;
 long FUNC_5 () ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 struct cleanup* FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (char*,long,char,...) ;
 int FUNC_8 (char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_8)
{
  struct cleanup *VAR_9;
  int VAR_10 = FUNC_0 (VAR_5);
  struct continuation_arg *VAR_11;
  struct continuation_arg *VAR_12;
  long VAR_13;



  extern int VAR_14;
  extern int VAR_15;

  VAR_4 = 0;
  if (VAR_1 == VAR_5 && VAR_10)
    FUNC_9 ();
  VAR_9 = FUNC_6 (VAR_3, 0);






  if (VAR_8 == 0)
    FUNC_8 ((char *) 0, VAR_5 == VAR_1);

  VAR_13 = FUNC_5 ();

  if (VAR_15)
    {




    }

  FUNC_4 (VAR_8, VAR_1 == VAR_5);




  if (FUNC_11 () && VAR_7)
    {
      VAR_11 =
 (struct continuation_arg *) FUNC_12 (sizeof (struct continuation_arg));
      VAR_12 =
 (struct continuation_arg *) FUNC_12 (sizeof (struct continuation_arg));
      VAR_11->next = VAR_12;
      VAR_12->next = ((void*)0);
      VAR_11->data.longint = VAR_13;



      FUNC_1 (VAR_0, VAR_11);
    }




  if (!FUNC_11 () || !VAR_7)
    {
      FUNC_2 (&VAR_6);
      FUNC_3 (VAR_9);

      if (VAR_14)
 {
   long VAR_16 = FUNC_5 () - VAR_13;

   FUNC_7 ("Command execution time: %ld.%06ld\n",
        VAR_16 / 1000000, VAR_16 % 1000000);
 }

      if (VAR_15)
 {
 }
    }
}
