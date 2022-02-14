
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmstate {scalar_t__ eh; int mapsz; } ;
struct TYPE_3__ {struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vmstate*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(kvm_t *VAR_1)
{
 struct vmstate *VAR_2 = VAR_1->vmst;

 if (VAR_2->eh != VAR_0)
  FUNC_1(VAR_2->eh, VAR_2->mapsz);
 FUNC_0(VAR_2);
 VAR_1->vmst = ((void*)0);
}
