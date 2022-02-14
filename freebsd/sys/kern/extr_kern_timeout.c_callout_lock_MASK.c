
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout_cpu {int dummy; } ;
struct callout {int c_cpu; } ;


 struct callout_cpu* FUNC_0 (int) ;
 int FUNC_1 (struct callout_cpu*) ;
 int FUNC_2 (struct callout_cpu*) ;
 int VAR_0 ;
 int FUNC_3 () ;

__attribute__((used)) static struct callout_cpu *
FUNC_4(struct callout *VAR_1)
{
 struct callout_cpu *VAR_2;
 int VAR_3;

 for (;;) {
  VAR_3 = VAR_1->c_cpu;







  VAR_2 = FUNC_0(VAR_3);
  FUNC_1(VAR_2);
  if (VAR_3 == VAR_1->c_cpu)
   break;
  FUNC_2(VAR_2);
 }
 return (VAR_2);
}
