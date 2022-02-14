
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {struct varobj* parent; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct varobj*) ;
 int FUNC_1 (struct type*) ;


 struct type* FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct varobj*,int) ;
 char* FUNC_5 (struct varobj*,int) ;
 struct type* FUNC_6 (struct varobj*) ;
 struct type* FUNC_7 (struct type*,char*,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static struct type *
FUNC_9 (struct varobj *VAR_0, int VAR_1)
{
  struct type *VAR_2, *VAR_3;

  if (FUNC_0 (VAR_0))
    {

      VAR_3 = FUNC_6 (VAR_0->parent);
    }
  else
    VAR_3 = FUNC_6 (VAR_0);

  VAR_2 = ((void*)0);
  switch (FUNC_1 (VAR_3))
    {
    case 129:
    case 128:
      if (FUNC_0 (VAR_0))
 {
   char *VAR_4 = FUNC_5 (VAR_0, VAR_1);
   VAR_2 = FUNC_7 (VAR_3, VAR_4, 0);
   FUNC_8 (VAR_4);
 }
      else if (VAR_1 < FUNC_3 (VAR_3))
 VAR_2 = FUNC_2 (VAR_3, VAR_1);
      else
 {

   return ((void*)0);
 }
      break;

    default:
      break;
    }

  if (VAR_2 == ((void*)0))
    return FUNC_4 (VAR_0, VAR_1);

  return VAR_2;
}
