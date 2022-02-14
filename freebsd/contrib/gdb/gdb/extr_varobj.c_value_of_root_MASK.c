
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct varobj {TYPE_2__* root; int obj_name; int name; } ;
struct value {int dummy; } ;
struct TYPE_4__ {TYPE_1__* lang; scalar_t__ use_selected_frame; struct varobj* rootvar; } ;
struct TYPE_3__ {struct value* (* value_of_root ) (struct varobj**) ;} ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct varobj*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 struct value* FUNC_4 (struct varobj**) ;
 struct varobj* FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct varobj*,int *,int ) ;
 int FUNC_7 () ;
 char* FUNC_8 (struct varobj*) ;

__attribute__((used)) static struct value *
FUNC_9 (struct varobj **VAR_1, int *VAR_2)
{
  struct varobj *VAR_3;

  if (VAR_1 == ((void*)0))
    return ((void*)0);

  VAR_3 = *VAR_1;




  if (VAR_3->root->rootvar != VAR_3)
    return ((void*)0);

  if (VAR_3->root->use_selected_frame)
    {
      struct varobj *VAR_4;
      char *VAR_5, *VAR_6;
      VAR_5 = FUNC_8 (VAR_3);
      VAR_4 = FUNC_5 (((void*)0), VAR_3->name, (CORE_ADDR) 0,
          VAR_0);
      if (VAR_4 == ((void*)0))
 {
   return ((void*)0);
 }
      VAR_6 = FUNC_8 (VAR_4);
      if (FUNC_2 (VAR_5, VAR_6) == 0)
 {
   FUNC_6 (VAR_4, ((void*)0), 0);
   *VAR_2 = 0;
 }
      else
 {
   if (*VAR_2)
     {
       VAR_4->obj_name =
  FUNC_1 (VAR_3->obj_name, FUNC_3 (VAR_3->obj_name));
       FUNC_6 (VAR_3, ((void*)0), 0);
     }
   else
     {
       VAR_4->obj_name = FUNC_7 ();
     }
   FUNC_0 (VAR_4);
   *VAR_1 = VAR_4;
   VAR_3 = *VAR_1;
   *VAR_2 = 1;
 }
    }
  else
    {
      *VAR_2 = 0;
    }

  return (*VAR_3->root->lang->value_of_root) (VAR_1);
}
