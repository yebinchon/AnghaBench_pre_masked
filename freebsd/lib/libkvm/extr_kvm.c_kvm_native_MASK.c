
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* arch; } ;
typedef TYPE_2__ kvm_t ;
struct TYPE_6__ {int (* ka_native ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int
FUNC_2(kvm_t *VAR_0)
{

 if (FUNC_0(VAR_0))
  return (1);
 return (VAR_0->arch->ka_native(VAR_0));
}
