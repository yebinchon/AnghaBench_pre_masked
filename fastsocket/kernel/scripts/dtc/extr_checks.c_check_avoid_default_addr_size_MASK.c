
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct property {int dummy; } ;
struct node {int fullpath; TYPE_1__* parent; } ;
struct check {int dummy; } ;
struct TYPE_2__ {int addr_cells; int size_cells; } ;


 int FUNC_0 (struct check*,char*,int ) ;
 struct property* FUNC_1 (struct node*,char*) ;

__attribute__((used)) static void FUNC_2(struct check *VAR_0, struct node *VAR_1,
       struct node *VAR_2)
{
 struct property *VAR_3, *VAR_4;

 if (!VAR_2->parent)
  return;

 VAR_3 = FUNC_1(VAR_2, "reg");
 VAR_4 = FUNC_1(VAR_2, "ranges");

 if (!VAR_3 && !VAR_4)
  return;

 if (VAR_2->parent->addr_cells == -1)
  FUNC_0(VAR_0, "Relying on default #address-cells value for %s",
       VAR_2->fullpath);

 if (VAR_2->parent->size_cells == -1)
  FUNC_0(VAR_0, "Relying on default #size-cells value for %s",
       VAR_2->fullpath);
}
