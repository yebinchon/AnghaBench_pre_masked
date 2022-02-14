
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_result {int classid; } ;
struct sk_buff {int tc_index; } ;
struct ingress_qdisc_data {int filter_list; } ;
struct TYPE_3__ {int drops; } ;
struct TYPE_4__ {int bytes; int packets; } ;
struct Qdisc {TYPE_1__ qstats; TYPE_2__ bstats; } ;







 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct ingress_qdisc_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct sk_buff*,int ,struct tcf_result*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_0, struct Qdisc *VAR_1)
{
 struct ingress_qdisc_data *VAR_2 = FUNC_2(VAR_1);
 struct tcf_result VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_2->filter_list, &VAR_3);

 VAR_1->bstats.packets++;
 VAR_1->bstats.bytes += FUNC_1(VAR_0);
 switch (VAR_4) {
 case 129:
  VAR_4 = 129;
  VAR_1->qstats.drops++;
  break;
 case 128:
 case 131:
  VAR_4 = 128;
  break;
 case 130:
 case 132:
  VAR_0->tc_index = FUNC_0(VAR_3.classid);
 default:
  VAR_4 = 132;
  break;
 }

 return VAR_4;
}
