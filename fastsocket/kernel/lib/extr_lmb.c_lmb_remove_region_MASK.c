
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lmb_region {int cnt; TYPE_1__* region; } ;
struct TYPE_2__ {int size; int base; } ;



__attribute__((used)) static void FUNC_0(struct lmb_region *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 for (VAR_2 = VAR_1; VAR_2 < VAR_0->cnt - 1; VAR_2++) {
  VAR_0->region[VAR_2].base = VAR_0->region[VAR_2 + 1].base;
  VAR_0->region[VAR_2].size = VAR_0->region[VAR_2 + 1].size;
 }
 VAR_0->cnt--;
}
