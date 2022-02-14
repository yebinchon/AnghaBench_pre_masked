
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent {TYPE_1__* printk_map; scalar_t__ printk_count; } ;
struct TYPE_2__ {int printk; int addr; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct pevent*) ;

void FUNC_2(struct pevent *VAR_0)
{
 int VAR_1;

 if (!VAR_0->printk_map)
  FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < (int)VAR_0->printk_count; VAR_1++) {
  FUNC_0("%016llx %s\n",
         VAR_0->printk_map[VAR_1].addr,
         VAR_0->printk_map[VAR_1].printk);
 }
}
