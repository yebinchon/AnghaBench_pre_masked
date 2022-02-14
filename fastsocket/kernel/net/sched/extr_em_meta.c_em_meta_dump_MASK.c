
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tcf_meta_hdr {int right; int left; } ;
struct tcf_ematch {scalar_t__ data; } ;
struct sk_buff {int dummy; } ;
struct meta_type_ops {scalar_t__ (* dump ) (struct sk_buff*,TYPE_1__*,int ) ;} ;
struct TYPE_4__ {int hdr; } ;
struct meta_match {TYPE_1__ rvalue; TYPE_1__ lvalue; } ;
typedef int hdr ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tcf_meta_hdr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct tcf_meta_hdr*,int ,int) ;
 struct meta_type_ops* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct tcf_ematch *VAR_4)
{
 struct meta_match *VAR_5 = (struct meta_match *) VAR_4->data;
 struct tcf_meta_hdr VAR_6;
 struct meta_type_ops *VAR_7;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_6.left, &VAR_5->lvalue.hdr, sizeof(VAR_6.left));
 FUNC_1(&VAR_6.right, &VAR_5->rvalue.hdr, sizeof(VAR_6.right));

 FUNC_0(VAR_3, VAR_0, sizeof(VAR_6), &VAR_6);

 VAR_7 = FUNC_3(&VAR_5->lvalue);
 if (VAR_7->dump(VAR_3, &VAR_5->lvalue, VAR_1) < 0 ||
     VAR_7->dump(VAR_3, &VAR_5->rvalue, VAR_2) < 0)
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
