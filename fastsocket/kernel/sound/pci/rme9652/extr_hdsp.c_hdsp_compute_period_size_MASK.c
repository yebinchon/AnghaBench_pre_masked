
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int period_bytes; int control_register; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hdsp *VAR_0)
{
 VAR_0->period_bytes = 1 << ((FUNC_0(VAR_0->control_register) + 8));
}
