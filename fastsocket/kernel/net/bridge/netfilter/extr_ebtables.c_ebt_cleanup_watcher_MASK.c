
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgdtor_param {TYPE_2__* target; int family; int targinfo; } ;
struct TYPE_3__ {TYPE_2__* watcher; } ;
struct ebt_entry_watcher {int data; TYPE_1__ u; } ;
struct TYPE_4__ {int me; int (* destroy ) (struct xt_tgdtor_param*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xt_tgdtor_param*) ;

__attribute__((used)) static inline int
FUNC_2(struct ebt_entry_watcher *VAR_1, unsigned int *VAR_2)
{
 struct xt_tgdtor_param VAR_3;

 if (VAR_2 && (*VAR_2)-- == 0)
  return 1;

 VAR_3.target = VAR_1->u.watcher;
 VAR_3.targinfo = VAR_1->data;
 VAR_3.family = VAR_0;
 if (VAR_3.target->destroy != ((void*)0))
  VAR_3.target->destroy(&VAR_3);
 FUNC_0(VAR_3.target->me);
 return 0;
}
