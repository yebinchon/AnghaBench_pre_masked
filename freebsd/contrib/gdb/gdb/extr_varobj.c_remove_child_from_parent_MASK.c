
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj_child {struct varobj_child* next; struct varobj* child; } ;
struct varobj {struct varobj_child* children; } ;



__attribute__((used)) static void
FUNC_0 (struct varobj *VAR_0, struct varobj *VAR_1)
{
  struct varobj_child *VAR_2, *VAR_3;


  VAR_3 = ((void*)0);
  for (VAR_2 = VAR_0->children; VAR_2 != ((void*)0);)
    {
      if (VAR_2->child == VAR_1)
 break;
      VAR_3 = VAR_2;
      VAR_2 = VAR_2->next;
    }

  if (VAR_3 == ((void*)0))
    VAR_0->children = VAR_2->next;
  else
    VAR_3->next = VAR_2->next;

}
