
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {int drops; } ;
struct TYPE_5__ {int qlen; } ;
struct TYPE_4__ {int packets; int bytes; } ;
struct Qdisc {TYPE_3__ qstats; TYPE_2__ q; TYPE_1__ bstats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct Qdisc* FUNC_1 (struct sk_buff*,struct Qdisc*,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_2, struct Qdisc *VAR_3)
{
 struct Qdisc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3, &VAR_5);
 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5 == VAR_0) {
  VAR_3->bstats.bytes += FUNC_4(VAR_2);
  VAR_3->bstats.packets++;
  VAR_3->q.qlen++;
  return VAR_0;
 }
 if (FUNC_2(VAR_5))
  VAR_3->qstats.drops++;
 return VAR_5;
}
