
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct preloaded_file {int f_args; } ;
struct file_metadata {int md_data; } ;
struct TYPE_2__ {int e_entry; } ;
typedef TYPE_1__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int,int,int ,int ,int ,int,int,int) ;
 int FUNC_1 (int ,int*,int*,int*,int*,int*) ;
 int FUNC_2 () ;
 struct file_metadata* FUNC_3 (struct preloaded_file*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(struct preloaded_file *VAR_2)
{
    struct file_metadata *VAR_3;
    Elf_Ehdr *VAR_4;
    vm_offset_t VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10, VAR_11;

    if ((VAR_3 = FUNC_3(VAR_2, VAR_1)) == ((void*)0))
 return(VAR_0);
    VAR_4 = (Elf_Ehdr *)&(VAR_3->md_data);

    VAR_10 = FUNC_1(VAR_2->f_args, &VAR_9, &VAR_11, &VAR_6, &VAR_7, &VAR_8);
    if (VAR_10 != 0)
 return(VAR_10);
    VAR_5 = VAR_4->e_entry & 0xffffff;





    FUNC_2();
    FUNC_0((void *)VAR_5, VAR_9, VAR_11, 0, 0, 0, VAR_6, VAR_7, VAR_8);

    FUNC_4("exec returned");
}
