
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mv_mpic_irqsrc {int mmi_irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 u_int VAR_2;

 VAR_2 = ((struct mv_mpic_irqsrc *)VAR_1)->mmi_irq;
 FUNC_0(VAR_2);
}
