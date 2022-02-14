
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vstack {struct vstack* next; struct varobj* var; } ;
struct varobj {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct vstack **VAR_0, struct varobj *VAR_1)
{
  struct vstack *VAR_2;

  VAR_2 = (struct vstack *) FUNC_0 (sizeof (struct vstack));
  VAR_2->var = VAR_1;
  VAR_2->next = *VAR_0;
  *VAR_0 = VAR_2;
}
