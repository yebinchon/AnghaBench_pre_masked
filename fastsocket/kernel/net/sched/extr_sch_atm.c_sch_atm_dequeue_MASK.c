
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sk_buff {int truesize; struct atm_qdisc_data* data; } ;
struct TYPE_10__ {struct atm_flow_data* next; } ;
struct atm_qdisc_data {TYPE_1__ link; } ;
struct atm_flow_data {scalar_t__ hdr_len; TYPE_3__* vcc; int hdr; TYPE_4__* q; struct atm_flow_data* next; } ;
struct Qdisc {int dummy; } ;
struct TYPE_15__ {TYPE_3__* vcc; } ;
struct TYPE_14__ {int sk_wmem_alloc; } ;
struct TYPE_13__ {TYPE_2__* ops; } ;
struct TYPE_12__ {int (* send ) (TYPE_3__*,struct sk_buff*) ;} ;
struct TYPE_11__ {struct sk_buff* (* peek ) (TYPE_4__*) ;} ;


 TYPE_9__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (char*,struct atm_flow_data*,...) ;
 struct sk_buff* FUNC_6 (TYPE_4__*) ;
 struct atm_qdisc_data* FUNC_7 (struct Qdisc*) ;
 TYPE_5__* FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 struct Qdisc* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_3__*,struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(unsigned long VAR_0)
{
 struct Qdisc *VAR_1 = (struct Qdisc *)VAR_0;
 struct atm_qdisc_data *VAR_2 = FUNC_7(VAR_1);
 struct atm_flow_data *VAR_3;
 struct sk_buff *VAR_4;

 FUNC_5("sch_atm_dequeue(sch %p,[qdisc %p])\n", VAR_1, VAR_2);
 for (VAR_3 = VAR_2->link.next; VAR_3; VAR_3 = VAR_3->next)




  while ((VAR_4 = VAR_3->q->ops->peek(VAR_3->q))) {
   if (!FUNC_1(VAR_3->vcc, VAR_4->truesize))
    break;

   VAR_4 = FUNC_6(VAR_3->q);
   if (FUNC_17(!VAR_4))
    break;

   FUNC_5("atm_tc_dequeue: sending on class %p\n", VAR_3);

   FUNC_12(VAR_4, FUNC_11(VAR_4));
   if (FUNC_9(VAR_4) < VAR_3->hdr_len) {
    struct sk_buff *VAR_5;

    VAR_5 = FUNC_14(VAR_4, VAR_3->hdr_len);
    FUNC_3(VAR_4);
    if (!VAR_5)
     continue;
    VAR_4 = VAR_5;
   }
   FUNC_5("sch_atm_dequeue: ip %p, data %p\n",
     FUNC_10(VAR_4), VAR_4->data);
   FUNC_0(VAR_4)->vcc = VAR_3->vcc;
   FUNC_4(FUNC_13(VAR_4, VAR_3->hdr_len), VAR_3->hdr,
          VAR_3->hdr_len);
   FUNC_2(VAR_4->truesize,
       &FUNC_8(VAR_3->vcc)->sk_wmem_alloc);

   VAR_3->vcc->send(VAR_3->vcc, VAR_4);
  }
}
