
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_state {int dummy; } ;
struct text_match {int config; scalar_t__ to_offset; int to_layer; scalar_t__ from_offset; int from_layer; } ;
struct tcf_pkt_info {int dummy; } ;
struct tcf_ematch {int dummy; } ;
struct sk_buff {int data; } ;


 struct text_match* FUNC_0 (struct tcf_ematch*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int,int ,struct ts_state*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct tcf_ematch *VAR_2,
    struct tcf_pkt_info *VAR_3)
{
 struct text_match *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6;
 struct ts_state VAR_7;

 VAR_5 = FUNC_2(VAR_1, VAR_4->from_layer) - VAR_1->data;
 VAR_5 += VAR_4->from_offset;

 VAR_6 = FUNC_2(VAR_1, VAR_4->to_layer) - VAR_1->data;
 VAR_6 += VAR_4->to_offset;

 return FUNC_1(VAR_1, VAR_5, VAR_6, VAR_4->config, &VAR_7) != VAR_0;
}
