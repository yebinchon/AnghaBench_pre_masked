
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 struct cleanup* FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_5 (struct varobj*) ;
 char* FUNC_6 (struct varobj*) ;
 char* FUNC_7 (struct varobj*) ;
 int FUNC_8 (struct varobj**,struct varobj***) ;
 int FUNC_9 (struct varobj**) ;

__attribute__((used)) static int
FUNC_10 (struct varobj *VAR_1)
{
  struct varobj **VAR_2;
  struct varobj **VAR_3;
  struct cleanup *VAR_4 = ((void*)0);
  int VAR_5;

  VAR_5 = FUNC_8 (&VAR_1, &VAR_2);





  if (VAR_5 == 0)
    return 1;
  else if (VAR_5 == -1)
    {
      if (FUNC_2 (VAR_0) > 1)
        VAR_4 = FUNC_1 (VAR_0, ((void*)0));
      FUNC_4 (VAR_0, "name", FUNC_6(VAR_1));
      FUNC_4 (VAR_0, "in_scope", "false");
      if (FUNC_2 (VAR_0) > 1)
        FUNC_0 (VAR_4);
      return -1;
    }
  else if (VAR_5 == -2)
    {
      if (FUNC_2 (VAR_0) > 1)
        VAR_4 = FUNC_1 (VAR_0, ((void*)0));
      FUNC_4 (VAR_0, "name", FUNC_6 (VAR_1));
      FUNC_4 (VAR_0, "in_scope", "true");
      FUNC_4 (VAR_0, "new_type", FUNC_7(VAR_1));
      FUNC_3 (VAR_0, "new_num_children",
      FUNC_5(VAR_1));
      if (FUNC_2 (VAR_0) > 1)
        FUNC_0 (VAR_4);
    }
  else
    {

      VAR_3 = VAR_2;
      while (*VAR_3 != ((void*)0))
 {
   if (FUNC_2 (VAR_0) > 1)
     VAR_4 = FUNC_1 (VAR_0, ((void*)0));
   FUNC_4 (VAR_0, "name", FUNC_6 (*VAR_3));
   FUNC_4 (VAR_0, "in_scope", "true");
   FUNC_4 (VAR_0, "type_changed", "false");
   if (FUNC_2 (VAR_0) > 1)
     FUNC_0 (VAR_4);
   VAR_3++;
 }
      FUNC_9 (VAR_2);
      return 1;
    }
  return 1;
}
