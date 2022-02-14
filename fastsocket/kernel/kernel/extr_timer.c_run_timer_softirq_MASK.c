
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tvec_base {int timer_jiffies; } ;
struct softirq_action {int dummy; } ;


 struct tvec_base* FUNC_0 (int ) ;
 int FUNC_1 (struct tvec_base*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct softirq_action *VAR_2)
{
 struct tvec_base *VAR_3 = FUNC_0(VAR_1);

 FUNC_2();

 if (FUNC_3(VAR_0, VAR_3->timer_jiffies))
  FUNC_1(VAR_3);
}
