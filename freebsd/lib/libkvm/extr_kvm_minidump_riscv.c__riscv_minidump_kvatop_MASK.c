
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int kvm_t ;
typedef int kvaddr_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_0, kvaddr_t VAR_1, off_t *VAR_2)
{

 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_0, 0,
      "_riscv_minidump_kvatop called in live kernel!");
  return (0);
 }
 return (FUNC_2(VAR_0, VAR_1, VAR_2));
}
