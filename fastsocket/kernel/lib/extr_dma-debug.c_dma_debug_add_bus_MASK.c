
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int notifier_call; } ;
struct bus_type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bus_type*,struct notifier_block*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct notifier_block* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct bus_type *VAR_3)
{
 struct notifier_block *VAR_4;

 if (VAR_2)
  return;

 VAR_4 = FUNC_1(sizeof(struct notifier_block), VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_2("dma_debug_add_bus: out of memory\n");
  return;
 }

 VAR_4->notifier_call = VAR_1;

 FUNC_0(VAR_3, VAR_4);
}
