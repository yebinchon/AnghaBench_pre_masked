
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj_child {struct varobj* child; struct varobj_child* next; } ;
struct varobj {struct varobj_child* children; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct varobj *VAR_0, struct varobj *VAR_1)
{
  struct varobj_child *VAR_2;


  VAR_2 = VAR_0->children;
  VAR_0->children =
    (struct varobj_child *) FUNC_0 (sizeof (struct varobj_child));

  VAR_0->children->next = VAR_2;
  VAR_0->children->child = VAR_1;
}
