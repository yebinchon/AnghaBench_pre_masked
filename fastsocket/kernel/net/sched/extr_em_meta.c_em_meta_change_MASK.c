
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcf_proto {int dummy; } ;
struct TYPE_5__ {int kind; } ;
struct tcf_meta_hdr {TYPE_3__ right; TYPE_3__ left; } ;
struct tcf_ematch {int datalen; unsigned long data; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int hdr; } ;
struct meta_match {TYPE_1__ rvalue; TYPE_1__ lvalue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 struct meta_match* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct nlattr*) ;
 int FUNC_5 (struct meta_match*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_9 ;
 struct tcf_meta_hdr* FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr**,int ,void*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct tcf_proto *VAR_10, void *VAR_11, int VAR_12,
     struct tcf_ematch *VAR_13)
{
 int VAR_14;
 struct nlattr *VAR_15[VAR_5 + 1];
 struct tcf_meta_hdr *VAR_16;
 struct meta_match *VAR_17 = ((void*)0);

 VAR_14 = FUNC_8(VAR_15, VAR_5, VAR_11, VAR_12, VAR_9);
 if (VAR_14 < 0)
  goto errout;

 VAR_14 = -VAR_0;
 if (VAR_15[VAR_3] == ((void*)0))
  goto errout;
 VAR_16 = FUNC_7(VAR_15[VAR_3]);

 if (FUNC_1(VAR_16->left.kind) != FUNC_1(VAR_16->right.kind) ||
     FUNC_1(VAR_16->left.kind) > VAR_8 ||
     FUNC_0(VAR_16->left.kind) > VAR_7 ||
     FUNC_0(VAR_16->right.kind) > VAR_7)
  goto errout;

 VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_2);
 if (VAR_17 == ((void*)0))
  goto errout;

 FUNC_3(&VAR_17->lvalue.hdr, &VAR_16->left, sizeof(VAR_16->left));
 FUNC_3(&VAR_17->rvalue.hdr, &VAR_16->right, sizeof(VAR_16->right));

 if (!FUNC_6(&VAR_17->lvalue) ||
     !FUNC_6(&VAR_17->rvalue)) {
  VAR_14 = -VAR_1;
  goto errout;
 }

 if (FUNC_4(&VAR_17->lvalue, VAR_15[VAR_4]) < 0 ||
     FUNC_4(&VAR_17->rvalue, VAR_15[VAR_6]) < 0)
  goto errout;

 VAR_13->datalen = sizeof(*VAR_17);
 VAR_13->data = (unsigned long) VAR_17;

 VAR_14 = 0;
errout:
 if (VAR_14 && VAR_17)
  FUNC_5(VAR_17);
 return VAR_14;
}
