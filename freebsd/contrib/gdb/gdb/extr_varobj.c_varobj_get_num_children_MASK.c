
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int num_children; } ;


 int FUNC_0 (struct varobj*) ;

int
FUNC_1 (struct varobj *VAR_0)
{
  if (VAR_0->num_children == -1)
    VAR_0->num_children = FUNC_0 (VAR_0);

  return VAR_0->num_children;
}
