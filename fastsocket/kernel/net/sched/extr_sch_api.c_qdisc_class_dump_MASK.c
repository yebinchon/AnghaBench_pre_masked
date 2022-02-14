
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qdisc_walker {int dummy; } ;
struct qdisc_dump_args {TYPE_2__* cb; int skb; } ;
struct Qdisc {int dummy; } ;
struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {TYPE_1__* nlh; int skb; } ;
struct TYPE_4__ {int nlmsg_seq; } ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct Qdisc*,unsigned long,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_2, unsigned long VAR_3, struct qdisc_walker *VAR_4)
{
 struct qdisc_dump_args *VAR_5 = (struct qdisc_dump_args *)VAR_4;

 return FUNC_1(VAR_5->skb, VAR_2, VAR_3, FUNC_0(VAR_5->cb->skb).pid,
         VAR_5->cb->nlh->nlmsg_seq, VAR_0, VAR_1);
}
