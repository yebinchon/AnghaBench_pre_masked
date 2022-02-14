
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {struct value* value; struct varobj* parent; } ;
struct value {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct varobj*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct value*) ;
 struct value* FUNC_5 (struct varobj*,int) ;
 int FUNC_6 (struct value*,struct value**) ;
 int FUNC_7 (int *,struct value**,struct value**,int *,char*,int *,char*) ;
 struct type* FUNC_8 (struct varobj*) ;
 char* FUNC_9 (struct varobj*,int) ;
 int FUNC_10 (struct value*) ;
 struct value* FUNC_11 (int ,struct value*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static struct value *
FUNC_13 (struct varobj *VAR_4, int VAR_5)
{
  struct type *VAR_6;
  struct value *VAR_7;

  if (FUNC_0 (VAR_4))
    VAR_6 = FUNC_8 (VAR_4->parent);
  else
    VAR_6 = FUNC_8 (VAR_4);

  VAR_7 = ((void*)0);

  if (((FUNC_1 (VAR_6)) == VAR_2) ||
      ((FUNC_1 (VAR_6)) == VAR_3))
    {
      if (FUNC_0 (VAR_4))
 {
   char *VAR_8;
   struct value *VAR_9 = VAR_4->parent->value;

   if (VAR_9 == ((void*)0))
     return ((void*)0);

   VAR_8 = FUNC_9 (VAR_4, VAR_5);
   FUNC_7 (((void*)0), &VAR_7, &VAR_9, ((void*)0), VAR_8, ((void*)0),
    "cplus_structure");
   if (VAR_7 != ((void*)0))
     FUNC_10 (VAR_7);

   FUNC_12 (VAR_8);
 }
      else if (VAR_5 >= FUNC_3 (VAR_6))
 {

   return ((void*)0);
 }
      else
 {

   if (VAR_4->value != ((void*)0))
     {
       struct value *VAR_10 = ((void*)0);

       if (FUNC_1 (FUNC_4 (VAR_4->value)) == VAR_0
    || FUNC_1 (FUNC_4 (VAR_4->value)) == VAR_1)
  {
    if (!FUNC_6 (VAR_4->value, &VAR_10))
      return ((void*)0);
  }
       else
  VAR_10 = VAR_4->value;

       if (VAR_10 != ((void*)0))
  {
    VAR_7 = FUNC_11 (FUNC_2 (VAR_6, VAR_5), VAR_10);
    FUNC_10 (VAR_7);
  }
       else
  {


    return ((void*)0);
  }
     }
 }
    }

  if (VAR_7 == ((void*)0))
    return FUNC_5 (VAR_4, VAR_5);

  return VAR_7;
}
