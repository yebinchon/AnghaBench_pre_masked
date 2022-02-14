
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int updated; struct value* value; int error; } ;
struct value {int dummy; } ;
struct expression {int dummy; } ;


 int FUNC_0 (struct expression*,struct value**) ;
 int FUNC_1 (char**,int ,int ,struct expression**) ;
 int FUNC_2 (struct value*,struct value*,struct value**) ;
 int VAR_0 ;
 int FUNC_3 (struct value*,struct value*,int*) ;
 int FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 scalar_t__ FUNC_6 (struct varobj*) ;
 int FUNC_7 (struct expression*) ;

int
FUNC_8 (struct varobj *VAR_1, char *VAR_2)
{
  struct value *VAR_3;
  int VAR_4;
  int VAR_5 = 0;




  struct expression *VAR_6;
  struct value *VAR_7;
  int VAR_8 = VAR_0;

  if (VAR_1->value != ((void*)0) && FUNC_6 (VAR_1) && !VAR_1->error)
    {
      char *VAR_9 = VAR_2;
      int VAR_10;

      VAR_0 = 10;
      if (!FUNC_1 (&VAR_9, 0, 0, &VAR_6))

 return 0;
      if (!FUNC_0 (VAR_6, &VAR_7))
 {

   FUNC_7 (VAR_6);
   return 0;
 }

      if (!FUNC_3 (VAR_1->value, VAR_7, &VAR_4))
        VAR_1->updated = 1;
      if (!FUNC_2 (VAR_1->value, VAR_7, &VAR_3))
 return 0;
      FUNC_5 (VAR_1->value);
      FUNC_4 (VAR_3);
      VAR_1->value = VAR_3;
      VAR_0 = VAR_8;
      return 1;
    }

  return 0;
}
