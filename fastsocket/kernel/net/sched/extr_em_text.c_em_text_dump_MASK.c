
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct text_match {TYPE_2__* config; int to_layer; int from_layer; int to_offset; int from_offset; } ;
struct tcf_ematch {int dummy; } ;
struct tcf_em_text {int pattern_len; scalar_t__ pad; int to_layer; int from_layer; int to_offset; int from_offset; int algo; } ;
struct sk_buff {int dummy; } ;
typedef int conf ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int name; } ;


 struct text_match* FUNC_0 (struct tcf_ematch*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int,struct tcf_em_text*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0, struct tcf_ematch *VAR_1)
{
 struct text_match *VAR_2 = FUNC_0(VAR_1);
 struct tcf_em_text VAR_3;

 FUNC_3(VAR_3.algo, VAR_2->config->ops->name, sizeof(VAR_3.algo) - 1);
 VAR_3.from_offset = VAR_2->from_offset;
 VAR_3.to_offset = VAR_2->to_offset;
 VAR_3.from_layer = VAR_2->from_layer;
 VAR_3.to_layer = VAR_2->to_layer;
 VAR_3.pattern_len = FUNC_5(VAR_2->config);
 VAR_3.pad = 0;

 if (FUNC_2(VAR_0, sizeof(VAR_3), &VAR_3) < 0)
  goto nla_put_failure;
 if (FUNC_1(VAR_0, VAR_3.pattern_len,
         FUNC_4(VAR_2->config)) < 0)
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
