
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dsa_switch_tree {struct dsa_switch** ds; TYPE_1__* pd; int link_poll_timer; scalar_t__ link_poll_needed; } ;
struct dsa_switch {int dummy; } ;
struct TYPE_2__ {int nr_chips; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dsa_switch*) ;
 int FUNC_2 () ;
 struct dsa_switch_tree* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct dsa_switch_tree *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 if (VAR_1->link_poll_needed)
  FUNC_0(&VAR_1->link_poll_timer);

 FUNC_2();

 for (VAR_2 = 0; VAR_2 < VAR_1->pd->nr_chips; VAR_2++) {
  struct dsa_switch *VAR_3 = VAR_1->ds[VAR_2];

  if (VAR_3 != ((void*)0))
   FUNC_1(VAR_3);
 }

 return 0;
}
