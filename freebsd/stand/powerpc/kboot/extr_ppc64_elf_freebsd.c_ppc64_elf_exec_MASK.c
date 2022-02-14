
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct trampoline_data {void* mdp; void* dtb; void* kernel_entry; void* mdp_size; void* of_entry; void* phys_mem_offset; } ;
struct preloaded_file {int f_args; } ;
struct file_metadata {int md_data; } ;
struct TYPE_4__ {int (* arch_loadaddr ) (int ,int *,int ) ;int (* arch_kexec_kseg_get ) (int*,void**) ;int (* arch_copyin ) (int *,int,int ) ;int (* arch_copyout ) (int,int*,int) ;} ;
struct TYPE_3__ {int e_flags; int e_entry; } ;
typedef TYPE_1__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_4 ;
 struct file_metadata* FUNC_3 (struct preloaded_file*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int,int,uintptr_t) ;
 void* FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (int,int,uintptr_t) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int*,int*) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (int,int*,int) ;
 int FUNC_15 (int *,int,int ) ;
 int FUNC_16 (int*,void**) ;
 int VAR_6 ;

int
FUNC_17(struct preloaded_file *VAR_7)
{
 struct file_metadata *VAR_8;
 vm_offset_t VAR_9, VAR_10;
 Elf_Ehdr *VAR_11;
 int VAR_12;
 uint32_t *VAR_13;
 uint64_t VAR_14;
 uint64_t VAR_15;
 struct trampoline_data *VAR_16;
 int VAR_17;
 void *VAR_18;

 if ((VAR_8 = FUNC_3(VAR_7, VAR_2)) == ((void*)0)) {
  return(VAR_0);
 }
 VAR_11 = (Elf_Ehdr *)&VAR_8->md_data;
 VAR_15 = VAR_3.arch_loadaddr(VAR_1, ((void*)0), 0);
 FUNC_12("Load address at %#jx\n", (uintmax_t)VAR_15);
 FUNC_12("Relocation offset is %#jx\n", (uintmax_t)VAR_4);


 VAR_13 = FUNC_8(VAR_6);
 FUNC_10(VAR_13, &VAR_5, VAR_6);


 if ((VAR_11->e_flags & 3) == 2)
  VAR_14 = VAR_11->e_entry;
 else {
  VAR_3.arch_copyout(VAR_11->e_entry + VAR_4,
      &VAR_14, 8);
  VAR_14 = FUNC_1(VAR_14);
 }





 VAR_16 = (void*)&VAR_13[2];
 VAR_16->kernel_entry = FUNC_6(VAR_14 + VAR_4);
 VAR_16->phys_mem_offset = FUNC_6(0);
 VAR_16->of_entry = FUNC_6(0);

 if ((VAR_12 = FUNC_9(VAR_7->f_args, &VAR_9, &VAR_10)) != 0)
  return (VAR_12);

 VAR_16->dtb = FUNC_6(VAR_10);
 VAR_16->mdp = FUNC_6(VAR_9);
 VAR_16->mdp_size = FUNC_6(0xfb5d104d);

 FUNC_12("Kernel entry at %#jx (%#x) ...\n",
     VAR_14, FUNC_0(VAR_16->kernel_entry));
 FUNC_12("DTB at %#x, mdp at %#x\n",
     FUNC_0(VAR_16->dtb), FUNC_0(VAR_16->mdp));

 FUNC_2();

 VAR_3.arch_copyin(VAR_13, VAR_15, VAR_6);
 FUNC_4(VAR_13);

 if (VAR_3.arch_kexec_kseg_get == ((void*)0))
  FUNC_11("architecture did not provide kexec segment mapping");
 VAR_3.arch_kexec_kseg_get(&VAR_17, &VAR_18);

 VAR_12 = FUNC_7(VAR_15, VAR_17, (uintptr_t)VAR_18);
 if (VAR_12 != 0)
  FUNC_11("kexec_load returned error: %d", VAR_12);

 VAR_12 = FUNC_5(0xfee1dead, 672274793,
     0x45584543 , (uintptr_t)((void*)0));
 if (VAR_12 != 0)
  FUNC_11("reboot returned error: %d", VAR_12);

 while (1) {}
}
