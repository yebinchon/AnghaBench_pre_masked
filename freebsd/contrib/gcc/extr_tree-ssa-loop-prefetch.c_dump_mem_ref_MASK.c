
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ref {scalar_t__ write_p; int delta; TYPE_1__* group; } ;
struct TYPE_2__ {int step; int base; } ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_3, struct mem_ref *VAR_4)
{
  FUNC_0 (VAR_3, "Reference %p:\n", (void *) VAR_4);

  FUNC_0 (VAR_3, "  group %p (base ", (void *) VAR_4->group);
  FUNC_1 (VAR_3, VAR_4->group->base, VAR_1);
  FUNC_0 (VAR_3, ", step ");
  FUNC_0 (VAR_3, VAR_0, VAR_4->group->step);
  FUNC_0 (VAR_3, ")\n");

  FUNC_0 (VAR_2, "  delta ");
  FUNC_0 (VAR_3, VAR_0, VAR_4->delta);
  FUNC_0 (VAR_3, "\n");

  FUNC_0 (VAR_3, "  %s\n", VAR_4->write_p ? "write" : "read");

  FUNC_0 (VAR_3, "\n");
}
