
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int q; } ;
struct TYPE_4__ {TYPE_1__ leaf; } ;
struct htb_class {int filter_list; int ceil; int rate; int rate_est; int bstats; TYPE_2__ un; int level; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct htb_class*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct Qdisc *VAR_0, struct htb_class *VAR_1)
{
 if (!VAR_1->level) {
  FUNC_0(!VAR_1->un.leaf.q);
  FUNC_3(VAR_1->un.leaf.q);
 }
 FUNC_1(&VAR_1->bstats, &VAR_1->rate_est);
 FUNC_4(VAR_1->rate);
 FUNC_4(VAR_1->ceil);

 FUNC_5(&VAR_1->filter_list);
 FUNC_2(VAR_1);
}
