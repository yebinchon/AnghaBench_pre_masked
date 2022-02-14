
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xt_target_param {struct xt_secmark_target_info* targinfo; } ;
struct TYPE_3__ {int selsid; } ;
struct TYPE_4__ {TYPE_1__ sel; } ;
struct xt_secmark_target_info {int mode; TYPE_2__ u; } ;
struct sk_buff {int secmark; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;

 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 u32 VAR_4 = 0;
 const struct xt_secmark_target_info *VAR_5 = VAR_3->targinfo;

 FUNC_1(VAR_5->mode != VAR_1);

 switch (VAR_1) {
 case 128:
  VAR_4 = VAR_5->u.sel.selsid;
  break;

 default:
  FUNC_0();
 }

 VAR_2->secmark = VAR_4;
 return VAR_0;
}
