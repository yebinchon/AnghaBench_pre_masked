
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgchk_param {char* table; unsigned int hook_mask; int family; int targinfo; struct xt_target* target; int * entryinfo; } ;
struct xt_target {int me; } ;
struct TYPE_5__ {struct xt_target* target; } ;
struct TYPE_4__ {int revision; int name; } ;
struct TYPE_6__ {TYPE_2__ kernel; scalar_t__ target_size; TYPE_1__ user; } ;
struct ipt_entry_target {TYPE_3__ u; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xt_tgchk_param*,scalar_t__,int ,int) ;
 struct xt_target* FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ipt_entry_target *VAR_3, char *VAR_4, unsigned int VAR_5)
{
 struct xt_tgchk_param VAR_6;
 struct xt_target *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_2(VAR_0, VAR_3->u.user.name,
     VAR_3->u.user.revision);
 if (!VAR_7)
  return -VAR_1;

 VAR_3->u.kernel.target = VAR_7;
 VAR_6.table = VAR_4;
 VAR_6.entryinfo = ((void*)0);
 VAR_6.target = VAR_7;
 VAR_6.targinfo = VAR_3->data;
 VAR_6.hook_mask = VAR_5;
 VAR_6.family = VAR_2;

 VAR_8 = FUNC_1(&VAR_6, VAR_3->u.target_size - sizeof(*VAR_3), 0, 0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3->u.kernel.target->me);
  return VAR_8;
 }
 return 0;
}
