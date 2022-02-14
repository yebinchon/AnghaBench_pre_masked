
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int kvm_t ;
typedef int amd64_pte_t ;
typedef int amd64_pde_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int,int ) ;
 int* FUNC_1 (int *,int,int) ;

__attribute__((used)) static amd64_pte_t *
FUNC_2(kvm_t *VAR_2, u_long VAR_3)
{
 u_long *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3, sizeof(amd64_pde_t));
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 return FUNC_0(VAR_2, *VAR_4 & VAR_1, VAR_0);
}
