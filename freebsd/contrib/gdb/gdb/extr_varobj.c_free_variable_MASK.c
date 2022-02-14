
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {struct varobj* obj_name; struct varobj* name; struct varobj* root; int exp; struct varobj* rootvar; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (struct varobj*) ;

__attribute__((used)) static void
FUNC_2 (struct varobj *VAR_0)
{

  if (VAR_0->root->rootvar == VAR_0)
    {
      FUNC_0 ((char **) &VAR_0->root->exp);
      FUNC_1 (VAR_0->root);
    }

  FUNC_1 (VAR_0->name);
  FUNC_1 (VAR_0->obj_name);
  FUNC_1 (VAR_0);
}
