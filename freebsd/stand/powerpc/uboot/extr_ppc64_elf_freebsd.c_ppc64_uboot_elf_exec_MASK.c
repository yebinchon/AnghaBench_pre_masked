
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
struct preloaded_file {char* f_args; } ;
struct file_metadata {int md_data; } ;
struct TYPE_2__ {int e_flags; scalar_t__ e_entry; } ;
typedef TYPE_1__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct file_metadata* FUNC_1 (struct preloaded_file*,int ) ;
 int FUNC_2 (char*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 void FUNC_5 (void*) ;

int
FUNC_6(struct preloaded_file *VAR_2)
{
 struct file_metadata *VAR_3;
 vm_offset_t VAR_4, VAR_5;
 Elf_Ehdr *VAR_6;
 int VAR_7;
 void (*VAR_8)(void *);

 if ((VAR_3 = FUNC_1(VAR_2, VAR_1)) == ((void*)0)) {
  return(VAR_0);
 }
 VAR_6 = (Elf_Ehdr *)&VAR_3->md_data;


 if ((VAR_6->e_flags & 3) == 2)
  VAR_8 = (void (*)(void*))(intptr_t)VAR_6->e_entry;
 else
  VAR_8 = *(void (*)(void*))(uint64_t *)(intptr_t)VAR_6->e_entry;

 if ((VAR_7 = FUNC_2(VAR_2->f_args, &VAR_4, &VAR_5)) != 0)
  return (VAR_7);

 FUNC_0();
 FUNC_4("Kernel args: %s\n", VAR_2->f_args);

 (*VAR_8)((void *)VAR_4);
 FUNC_3("exec returned");
}
