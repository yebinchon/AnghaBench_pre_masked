
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct preloaded_file {int f_args; } ;
struct file_metadata {int md_data; } ;
typedef int p4_entry_t ;
typedef int p3_entry_t ;
struct TYPE_2__ {int e_entry; } ;
typedef TYPE_1__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (void*,int ,int ) ;
 uintptr_t VAR_10 ;
 int FUNC_2 (int ,int ,int *,int *,int) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 () ;
 int VAR_11 ;
 int VAR_12 ;
 struct file_metadata* FUNC_5 (struct preloaded_file*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(struct preloaded_file *VAR_13)
{
    struct file_metadata *VAR_14;
    Elf_Ehdr *VAR_15;
    vm_offset_t VAR_16, VAR_17;
    int VAR_18;
    int VAR_19;

    if ((VAR_14 = FUNC_5(VAR_13, VAR_1)) == ((void*)0))
 return(VAR_0);
    VAR_15 = (Elf_Ehdr *)&(VAR_14->md_data);

    VAR_18 = FUNC_2(VAR_13->f_args, 0, &VAR_16, &VAR_17, 1);
    if (VAR_18 != 0)
 return(VAR_18);

    FUNC_3(VAR_9, VAR_2);
    FUNC_3(VAR_8, VAR_2);
    FUNC_3(VAR_7, VAR_2);





    for (VAR_19 = 0; VAR_19 < 512; VAR_19++) {

 VAR_9[VAR_19] = (p4_entry_t)FUNC_0((uintptr_t)&VAR_8[0]);
 VAR_9[VAR_19] |= VAR_6 | VAR_4 | VAR_5;


 VAR_8[VAR_19] = (p3_entry_t)FUNC_0((uintptr_t)&VAR_7[0]);
 VAR_8[VAR_19] |= VAR_6 | VAR_4 | VAR_5;


 VAR_7[VAR_19] = VAR_19 * (2 * 1024 * 1024);
 VAR_7[VAR_19] |= VAR_6 | VAR_4 | VAR_3 | VAR_5;
    }

    VAR_12 = VAR_15->e_entry & 0xffffffff;
    VAR_11 = (VAR_15->e_entry >> 32) & 0xffffffff;




    FUNC_4();
    FUNC_1((void *)FUNC_0(VAR_10), VAR_16, VAR_17);

    FUNC_6("exec returned");
}
