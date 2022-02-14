
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int truesize; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_5__ {int (* sk_data_ready ) (TYPE_1__*,int ) ;int sk_receive_queue; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11(struct sk_buff *VAR_6)
{
 if (!VAR_3) {
  FUNC_4("atmsvc: no signaling demon\n");
  FUNC_3(VAR_6);
  return;
 }

 FUNC_2(VAR_3,VAR_6->truesize);
 FUNC_9(&FUNC_8(VAR_3)->sk_receive_queue,VAR_6);
 FUNC_8(VAR_3)->sk_data_ready(FUNC_8(VAR_3), VAR_6->len);
}
