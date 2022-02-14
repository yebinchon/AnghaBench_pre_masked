
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dnslabel_table {int n_labels; TYPE_1__* labels; } ;
struct TYPE_2__ {int v; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct dnslabel_table *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->n_labels; ++VAR_1)
  FUNC_0(VAR_0->labels[VAR_1].v);
 VAR_0->n_labels = 0;
}
