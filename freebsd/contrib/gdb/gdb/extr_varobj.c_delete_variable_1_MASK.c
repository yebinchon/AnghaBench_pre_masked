
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj_child {struct varobj_child* next; struct varobj* child; } ;
struct varobj {int * obj_name; int * parent; struct varobj_child* children; } ;
struct cpstack {int dummy; } ;


 int FUNC_0 (struct cpstack**,int ) ;
 int FUNC_1 (struct varobj*) ;
 int FUNC_2 (int *,struct varobj*) ;
 int FUNC_3 (struct varobj*) ;
 int FUNC_4 (struct varobj_child*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (struct cpstack **VAR_0, int *VAR_1,
     struct varobj *VAR_2, int VAR_3,
     int VAR_4)
{
  struct varobj_child *VAR_5;
  struct varobj_child *VAR_6;


  for (VAR_5 = VAR_2->children; VAR_5 != ((void*)0); VAR_5 = VAR_6)
    {
      if (!VAR_4)
 VAR_5->child->parent = ((void*)0);
      FUNC_6 (VAR_0, VAR_1, VAR_5->child, 0, VAR_3);
      VAR_6 = VAR_5->next;
      FUNC_4 (VAR_5);
    }


  if (VAR_3)
    return;




  if (VAR_2->obj_name != ((void*)0))
    {
      FUNC_0 (VAR_0, FUNC_5 (VAR_2->obj_name));
      *VAR_1 = *VAR_1 + 1;
    }






  if ((VAR_4) && (VAR_2->parent != ((void*)0)))
    {
      FUNC_2 (VAR_2->parent, VAR_2);
    }

  if (VAR_2->obj_name != ((void*)0))
    FUNC_3 (VAR_2);


  FUNC_1 (VAR_2);
}
