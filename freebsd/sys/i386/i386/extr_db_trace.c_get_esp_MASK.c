
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_esp; } ;


 scalar_t__ FUNC_0 (struct trapframe*) ;

__attribute__((used)) static __inline int
FUNC_1(struct trapframe *VAR_0)
{
 return (FUNC_0(VAR_0) ? VAR_0->tf_esp : (intptr_t)&VAR_0->tf_esp);
}
