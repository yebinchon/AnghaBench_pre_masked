
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgdtor_param {TYPE_1__* target; int family; int targinfo; } ;
struct TYPE_5__ {TYPE_1__* target; } ;
struct TYPE_6__ {TYPE_2__ kernel; } ;
struct arpt_entry_target {int data; TYPE_3__ u; } ;
struct arpt_entry {int dummy; } ;
struct TYPE_4__ {int me; int (* destroy ) (struct xt_tgdtor_param*) ;} ;


 int VAR_0 ;
 struct arpt_entry_target* FUNC_0 (struct arpt_entry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xt_tgdtor_param*) ;

__attribute__((used)) static inline int FUNC_3(struct arpt_entry *VAR_1, unsigned int *VAR_2)
{
 struct xt_tgdtor_param VAR_3;
 struct arpt_entry_target *VAR_4;

 if (VAR_2 && (*VAR_2)-- == 0)
  return 1;

 VAR_4 = FUNC_0(VAR_1);
 VAR_3.target = VAR_4->u.kernel.target;
 VAR_3.targinfo = VAR_4->data;
 VAR_3.family = VAR_0;
 if (VAR_3.target->destroy != ((void*)0))
  VAR_3.target->destroy(&VAR_3);
 FUNC_1(VAR_3.target->me);
 return 0;
}
