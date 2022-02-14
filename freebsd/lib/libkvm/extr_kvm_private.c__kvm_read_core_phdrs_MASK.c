
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* e_ident; scalar_t__ e_machine; } ;
struct TYPE_8__ {int program; TYPE_1__ nlehdr; int pmfd; } ;
typedef TYPE_2__ kvm_t ;
struct TYPE_9__ {scalar_t__ e_type; scalar_t__ e_machine; } ;
typedef int GElf_Phdr ;
typedef TYPE_3__ GElf_Ehdr ;
typedef int Elf ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int * FUNC_1 (size_t,int) ;
 int * FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,size_t*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *,TYPE_3__*) ;
 int * FUNC_10 (int *,size_t,int *) ;

int
FUNC_11(kvm_t *VAR_4, size_t *VAR_5, GElf_Phdr **VAR_6)
{
 GElf_Ehdr VAR_7;
 GElf_Phdr *VAR_8;
 Elf *VAR_9;
 size_t VAR_10, VAR_11;

 VAR_9 = FUNC_2(VAR_4->pmfd, VAR_1, ((void*)0));
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_4->program, "%s", FUNC_4(0));
  return (-1);
 }
 if (FUNC_6(VAR_9) != VAR_2) {
  FUNC_0(VAR_4, VAR_4->program, "invalid core");
  goto bad;
 }
 if (FUNC_8(VAR_9) != VAR_4->nlehdr.e_ident[VAR_0]) {
  FUNC_0(VAR_4, VAR_4->program, "invalid core");
  goto bad;
 }
 if (FUNC_9(VAR_9, &VAR_7) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_4->program, "%s", FUNC_4(0));
  goto bad;
 }
 if (VAR_7.e_type != VAR_3) {
  FUNC_0(VAR_4, VAR_4->program, "invalid core");
  goto bad;
 }
 if (VAR_7.e_machine != VAR_4->nlehdr.e_machine) {
  FUNC_0(VAR_4, VAR_4->program, "invalid core");
  goto bad;
 }

 if (FUNC_5(VAR_9, &VAR_11) == -1) {
  FUNC_0(VAR_4, VAR_4->program, "%s", FUNC_4(0));
  goto bad;
 }

 VAR_8 = FUNC_1(VAR_11, sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_4->program, "failed to allocate phdrs");
  goto bad;
 }

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (FUNC_10(VAR_9, VAR_10, &VAR_8[VAR_10]) == ((void*)0)) {
   FUNC_7(VAR_8);
   FUNC_0(VAR_4, VAR_4->program, "%s", FUNC_4(0));
   goto bad;
  }
 }
 FUNC_3(VAR_9);
 *VAR_5 = VAR_11;
 *VAR_6 = VAR_8;
 return (0);

bad:
 FUNC_3(VAR_9);
 return (-1);
}
