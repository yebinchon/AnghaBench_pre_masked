
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_intrsrc {int bus_ack_arg; int irq; int (* bus_ack ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct xlp_intrsrc *VAR_1 = VAR_0;

 if (VAR_1->bus_ack)
  VAR_1->bus_ack(VAR_1->irq, VAR_1->bus_ack_arg);
}
