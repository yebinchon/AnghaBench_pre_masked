
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int mips64_pte_t ;
typedef int kvm_t ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ,int) ;

__attribute__((used)) static inline mips64_pte_t
FUNC_2(kvm_t *VAR_0, u_long VAR_1)
{
 mips64_pte_t *VAR_2 = FUNC_1(VAR_0, VAR_1, sizeof(*VAR_2));

 return FUNC_0(VAR_0, *VAR_2);
}
