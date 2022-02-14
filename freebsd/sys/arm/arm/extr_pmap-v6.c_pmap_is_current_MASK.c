
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pmap_t ;
struct TYPE_4__ {TYPE_1__* td_proc; } ;
struct TYPE_3__ {int p_vmspace; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static __inline int
FUNC_1(pmap_t VAR_2)
{

 return (VAR_2 == VAR_1 ||
  (VAR_2 == FUNC_0(VAR_0->td_proc->p_vmspace)));
}
