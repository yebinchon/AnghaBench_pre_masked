
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_intrsrc {int irt; int bus_ack_arg; int irq; int (* bus_ack ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct xlp_intrsrc *VAR_2 = VAR_1;

 if (VAR_2->bus_ack)
  VAR_2->bus_ack(VAR_2->irq, VAR_2->bus_ack_arg);
 FUNC_0(VAR_0, VAR_2->irt);
}
