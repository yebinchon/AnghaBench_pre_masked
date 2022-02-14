
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgdtor_param {TYPE_3__* target; int targinfo; } ;
struct TYPE_4__ {TYPE_3__* target; } ;
struct TYPE_5__ {TYPE_1__ kernel; } ;
struct ipt_entry_target {int data; TYPE_2__ u; } ;
struct TYPE_6__ {int me; int (* destroy ) (struct xt_tgdtor_param*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xt_tgdtor_param*) ;

__attribute__((used)) static void FUNC_2(struct ipt_entry_target *VAR_0)
{
 struct xt_tgdtor_param VAR_1 = {
  .target = VAR_0->u.kernel.target,
  .targinfo = VAR_0->data,
 };
 if (VAR_1.target->destroy != ((void*)0))
  VAR_1.target->destroy(&VAR_1);
 FUNC_0(VAR_1.target->me);
}
