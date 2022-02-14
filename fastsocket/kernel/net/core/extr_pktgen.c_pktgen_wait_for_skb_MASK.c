
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktgen_dev {int idle_acc; TYPE_1__* skb; } ;
typedef int ktime_t ;
struct TYPE_2__ {int users; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct pktgen_dev*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct pktgen_dev *VAR_1)
{
 ktime_t VAR_2 = FUNC_2();

 while (FUNC_0(&(VAR_1->skb->users)) != 1) {
  if (FUNC_7(VAR_0))
   break;

  if (FUNC_5())
   FUNC_6(VAR_1);
  else
   FUNC_1();
 }
 VAR_1->idle_acc += FUNC_4(FUNC_3(FUNC_2(), VAR_2));
}
