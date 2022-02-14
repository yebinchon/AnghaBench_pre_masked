
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic_irq {int delivery_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) inline static bool FUNC_0(struct kvm_lapic_irq *VAR_3)
{




 return VAR_3->delivery_mode == VAR_0;

}
