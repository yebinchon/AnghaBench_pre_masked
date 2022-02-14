
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgdtor_param {TYPE_2__* target; int family; int targinfo; } ;
struct TYPE_3__ {TYPE_2__* target; } ;
struct ebt_entry_target {int data; TYPE_1__ u; } ;
struct ebt_entry {scalar_t__ bitmask; int target_offset; } ;
struct TYPE_4__ {int me; int (* destroy ) (struct xt_tgdtor_param*) ;} ;


 int FUNC_0 (struct ebt_entry*,int ,int *) ;
 int FUNC_1 (struct ebt_entry*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xt_tgdtor_param*) ;

__attribute__((used)) static inline int
FUNC_4(struct ebt_entry *VAR_3, unsigned int *VAR_4)
{
 struct xt_tgdtor_param VAR_5;
 struct ebt_entry_target *VAR_6;

 if (VAR_3->bitmask == 0)
  return 0;

 if (VAR_4 && (*VAR_4)-- == 0)
  return 1;
 FUNC_1(VAR_3, VAR_2, ((void*)0));
 FUNC_0(VAR_3, VAR_1, ((void*)0));
 VAR_6 = (struct ebt_entry_target *)(((char *)VAR_3) + VAR_3->target_offset);

 VAR_5.target = VAR_6->u.target;
 VAR_5.targinfo = VAR_6->data;
 VAR_5.family = VAR_0;
 if (VAR_5.target->destroy != ((void*)0))
  VAR_5.target->destroy(&VAR_5);
 FUNC_2(VAR_5.target->me);
 return 0;
}
