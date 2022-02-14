
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_dev {int idle_acc; } ;
typedef int ktime_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct pktgen_dev *VAR_0)
{
 ktime_t VAR_1 = FUNC_0();
 FUNC_3();
 VAR_0->idle_acc += FUNC_2(FUNC_1(FUNC_0(), VAR_1));
}
