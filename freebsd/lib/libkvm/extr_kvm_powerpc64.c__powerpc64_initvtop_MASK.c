
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vmstate {int dummy; } ;
struct TYPE_5__ {struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(kvm_t *VAR_0)
{

 VAR_0->vmst = (struct vmstate *)FUNC_0(VAR_0, sizeof(*VAR_0->vmst));
 if (VAR_0->vmst == ((void*)0))
  return (-1);

 if (FUNC_1(VAR_0) == -1)
  return (-1);

 return (0);
}
