
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct value*) ;
 int FUNC_2 (struct value*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 int FUNC_5 (struct cleanup*) ;
 int FUNC_6 (char*,char*,char*,scalar_t__,int ,int ) ;
 int FUNC_7 (char*,char*,int ,int ) ;
 int FUNC_8 (char*,...) ;
 struct cleanup* FUNC_9 (int ,int *) ;
 int VAR_0 ;
 struct value* FUNC_10 (char*) ;
 char* FUNC_11 (char**,int *) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14 (char *VAR_1, char *VAR_2, char *VAR_3)
{
  struct cleanup *VAR_4 = FUNC_9 (VAR_0, ((void*)0));
  struct value *VAR_5;
  char *VAR_6;


  VAR_6 = FUNC_11 (&VAR_1, ((void*)0));


  if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
    FUNC_8 ("No value to %s.", *VAR_2 == 'a' ? "append" : "dump");
  VAR_5 = FUNC_10 (VAR_1);
  if (VAR_5 == ((void*)0))
    FUNC_8 ("Invalid expression.");


  if (VAR_3 == ((void*)0) || FUNC_12 (VAR_3, "binary") == 0)
    {
      FUNC_7 (VAR_6, VAR_2, FUNC_2 (VAR_5),
   FUNC_0 (FUNC_4 (VAR_5)));
    }
  else
    {
      CORE_ADDR VAR_7;

      if (FUNC_3 (VAR_5))
 {
   VAR_7 = FUNC_1 (VAR_5);
 }
      else
 {
   VAR_7 = 0;
   FUNC_13 ("value is not an lval: address assumed to be zero");
 }

      FUNC_6 (VAR_6, VAR_2, VAR_3, VAR_7,
       FUNC_2 (VAR_5),
       FUNC_0 (FUNC_4 (VAR_5)));
    }

  FUNC_5 (VAR_4);
}
