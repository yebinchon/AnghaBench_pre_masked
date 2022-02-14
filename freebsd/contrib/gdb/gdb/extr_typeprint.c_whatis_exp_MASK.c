
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct type* FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct value*) ;
 struct value* FUNC_3 (int ) ;
 int FUNC_4 (struct cleanup*) ;
 struct value* FUNC_5 (struct expression*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct type* FUNC_6 (struct type*) ;
 struct type* FUNC_7 (struct type*) ;
 struct cleanup* FUNC_8 (int ,struct expression**) ;
 scalar_t__ VAR_5 ;
 struct expression* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct type*,char*,int ,int) ;
 struct type* FUNC_12 (struct value*,int*,int*,int*) ;
 struct type* FUNC_13 (struct value*,int*,int*,int*) ;

__attribute__((used)) static void
FUNC_14 (char *VAR_6, int VAR_7)
{
  struct expression *VAR_8;
  struct value *VAR_9;
  struct cleanup *VAR_10 = ((void*)0);
  struct type *VAR_11 = ((void*)0);
  struct type *VAR_12;
  int VAR_13 = 0;
  int VAR_14 = -1;
  int VAR_15 = 0;

  if (VAR_6)
    {
      VAR_8 = FUNC_9 (VAR_6);
      VAR_10 = FUNC_8 (VAR_3, &VAR_8);
      VAR_9 = FUNC_5 (VAR_8);
    }
  else
    VAR_9 = FUNC_3 (0);

  VAR_12 = FUNC_2 (VAR_9);

  if (VAR_5)
    {
      if (((FUNC_0 (VAR_12) == VAR_1) ||
           (FUNC_0 (VAR_12) == VAR_2))
          &&
          (FUNC_0 (FUNC_1 (VAR_12)) == VAR_0))
        {
          VAR_11 = FUNC_12 (VAR_9, &VAR_13, &VAR_14, &VAR_15);
          if (VAR_11)
            {
              if (FUNC_0 (VAR_12) == VAR_1)
                VAR_11 = FUNC_6 (VAR_11);
              else
                VAR_11 = FUNC_7 (VAR_11);
            }
        }
      else if (FUNC_0 (VAR_12) == VAR_0)
  VAR_11 = FUNC_13 (VAR_9, &VAR_13, &VAR_14, &VAR_15);
    }

  FUNC_10 ("type = ");

  if (VAR_11)
    {
      FUNC_10 ("/* real type = ");
      FUNC_11 (VAR_11, "", VAR_4, -1);
      if (! VAR_13)
        FUNC_10 (" (incomplete object)");
      FUNC_10 (" */\n");
    }

  FUNC_11 (VAR_12, "", VAR_4, VAR_7);
  FUNC_10 ("\n");

  if (VAR_6)
    FUNC_4 (VAR_10);
}
