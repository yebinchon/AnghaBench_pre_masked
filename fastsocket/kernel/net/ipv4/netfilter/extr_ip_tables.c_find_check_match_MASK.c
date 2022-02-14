
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_mtchk_param {int dummy; } ;
struct xt_match {int me; } ;
struct TYPE_4__ {struct xt_match* match; } ;
struct TYPE_6__ {int name; int revision; } ;
struct TYPE_5__ {TYPE_1__ kernel; TYPE_3__ user; } ;
struct ipt_entry_match {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xt_match*) ;
 int FUNC_1 (struct xt_match*) ;
 int FUNC_2 (struct ipt_entry_match*,struct xt_mtchk_param*,unsigned int*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 struct xt_match* FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct ipt_entry_match *VAR_2, struct xt_mtchk_param *VAR_3,
   unsigned int *VAR_4)
{
 struct xt_match *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(FUNC_6(VAR_0, VAR_2->u.user.name,
            VAR_2->u.user.revision),
     "ipt_%s", VAR_2->u.user.name);
 if (FUNC_0(VAR_5) || !VAR_5) {
  FUNC_3("find_check_match: `%s' not found\n", VAR_2->u.user.name);
  return VAR_5 ? FUNC_1(VAR_5) : -VAR_1;
 }
 VAR_2->u.kernel.match = VAR_5;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  goto err;

 return 0;
err:
 FUNC_4(VAR_2->u.kernel.match->me);
 return VAR_6;
}
