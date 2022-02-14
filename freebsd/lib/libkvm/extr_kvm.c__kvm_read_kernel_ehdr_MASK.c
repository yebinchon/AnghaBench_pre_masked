
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* e_ident; } ;
struct TYPE_5__ {int program; TYPE_2__ nlehdr; int nlfd; } ;
typedef TYPE_1__ kvm_t ;
typedef int Elf ;


 size_t VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,char*,...) ;
 int * FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(kvm_t *VAR_5)
{
 Elf *VAR_6;

 if (FUNC_5(VAR_3) == VAR_4) {
  FUNC_0(VAR_5, VAR_5->program, "Unsupported libelf");
  return (-1);
 }
 VAR_6 = FUNC_1(VAR_5->nlfd, VAR_1, ((void*)0));
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_5, VAR_5->program, "%s", FUNC_3(0));
  return (-1);
 }
 if (FUNC_4(VAR_6) != VAR_2) {
  FUNC_0(VAR_5, VAR_5->program, "kernel is not an ELF file");
  return (-1);
 }
 if (FUNC_6(VAR_6, &VAR_5->nlehdr) == ((void*)0)) {
  FUNC_0(VAR_5, VAR_5->program, "%s", FUNC_3(0));
  FUNC_2(VAR_6);
  return (-1);
 }
 FUNC_2(VAR_6);

 switch (VAR_5->nlehdr.e_ident[VAR_0]) {
 case 129:
 case 128:
  return (0);
 default:
  FUNC_0(VAR_5, VAR_5->program,
      "unsupported ELF data encoding for kernel");
  return (-1);
 }
}
