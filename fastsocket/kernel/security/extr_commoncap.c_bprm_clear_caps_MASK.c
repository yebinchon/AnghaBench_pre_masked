
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_binprm {int cap_effective; TYPE_1__* cred; } ;
struct TYPE_2__ {int cap_permitted; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct linux_binprm *VAR_0)
{
 FUNC_0(VAR_0->cred->cap_permitted);
 VAR_0->cap_effective = 0;
}
