
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcf_pkt_info {int dummy; } ;
struct tcf_ematch {scalar_t__ data; } ;
struct sk_buff {int dummy; } ;
struct meta_obj {int dummy; } ;
struct TYPE_5__ {int op; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct meta_match {TYPE_3__ lvalue; TYPE_3__ rvalue; } ;
struct TYPE_6__ {int (* compare ) (struct meta_obj*,struct meta_obj*) ;} ;





 scalar_t__ FUNC_0 (struct sk_buff*,struct tcf_pkt_info*,TYPE_3__*,struct meta_obj*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct meta_obj*,struct meta_obj*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct tcf_ematch *VAR_1,
    struct tcf_pkt_info *VAR_2)
{
 int VAR_3;
 struct meta_match *VAR_4 = (struct meta_match *) VAR_1->data;
 struct meta_obj VAR_5, VAR_6;

 if (FUNC_0(VAR_0, VAR_2, &VAR_4->lvalue, &VAR_5) < 0 ||
     FUNC_0(VAR_0, VAR_2, &VAR_4->rvalue, &VAR_6) < 0)
  return 0;

 VAR_3 = FUNC_1(&VAR_4->lvalue)->compare(&VAR_5, &VAR_6);

 switch (VAR_4->lvalue.hdr.op) {
  case 130:
   return !VAR_3;
  case 128:
   return VAR_3 < 0;
  case 129:
   return VAR_3 > 0;
 }

 return 0;
}
