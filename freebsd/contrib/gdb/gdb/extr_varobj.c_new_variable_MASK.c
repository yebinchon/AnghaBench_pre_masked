
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int index; int num_children; scalar_t__ updated; int * root; scalar_t__ format; int * children; int * parent; scalar_t__ error; int * value; int * type; int * obj_name; int * name; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct varobj *
FUNC_1 (void)
{
  struct varobj *VAR_0;

  VAR_0 = (struct varobj *) FUNC_0 (sizeof (struct varobj));
  VAR_0->name = ((void*)0);
  VAR_0->obj_name = ((void*)0);
  VAR_0->index = -1;
  VAR_0->type = ((void*)0);
  VAR_0->value = ((void*)0);
  VAR_0->error = 0;
  VAR_0->num_children = -1;
  VAR_0->parent = ((void*)0);
  VAR_0->children = ((void*)0);
  VAR_0->format = 0;
  VAR_0->root = ((void*)0);
  VAR_0->updated = 0;

  return VAR_0;
}
