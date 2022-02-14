
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ md_tp; } ;
struct thread {TYPE_1__ td_md; } ;
typedef scalar_t__ register_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_1, void *VAR_2)
{




 VAR_1->td_md.md_tp = (register_t)VAR_2;
 *(register_t *)VAR_0 = (register_t)VAR_2;

 return (0);
}
