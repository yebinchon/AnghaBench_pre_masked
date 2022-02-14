
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgdtor_param {TYPE_3__* target; int family; int targinfo; } ;
struct TYPE_4__ {TYPE_3__* target; } ;
struct TYPE_5__ {TYPE_1__ kernel; } ;
struct ipt_entry_target {int data; TYPE_2__ u; } ;
struct ipt_entry {int dummy; } ;
struct TYPE_6__ {int me; int (* destroy ) (struct xt_tgdtor_param*) ;} ;


 int FUNC_0 (struct ipt_entry*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipt_entry_target* FUNC_1 (struct ipt_entry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xt_tgdtor_param*) ;

__attribute__((used)) static int
FUNC_4(struct ipt_entry *VAR_2, unsigned int *VAR_3)
{
 struct xt_tgdtor_param VAR_4;
 struct ipt_entry_target *VAR_5;

 if (VAR_3 && (*VAR_3)-- == 0)
  return 1;


 FUNC_0(VAR_2, VAR_1, ((void*)0));
 VAR_5 = FUNC_1(VAR_2);

 VAR_4.target = VAR_5->u.kernel.target;
 VAR_4.targinfo = VAR_5->data;
 VAR_4.family = VAR_0;
 if (VAR_4.target->destroy != ((void*)0))
  VAR_4.target->destroy(&VAR_4);
 FUNC_2(VAR_4.target->me);
 return 0;
}
