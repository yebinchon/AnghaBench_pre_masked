
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vstack {struct vstack* next; struct varobj* var; } ;
struct varobj {int dummy; } ;


 int FUNC_0 (struct vstack*) ;

__attribute__((used)) static struct varobj *
FUNC_1 (struct vstack **VAR_0)
{
  struct vstack *VAR_1;
  struct varobj *VAR_2;

  if ((*VAR_0)->var == ((void*)0) && (*VAR_0)->next == ((void*)0))
    return ((void*)0);

  VAR_1 = *VAR_0;
  VAR_2 = VAR_1->var;
  *VAR_0 = (*VAR_0)->next;
  FUNC_0 (VAR_1);

  return VAR_2;
}
