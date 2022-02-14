
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
struct userboot_devdesc {int dummy; } ;
struct preloaded_file {scalar_t__ f_addr; scalar_t__ f_size; struct preloaded_file* f_next; } ;
struct file_metadata {int md_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct preloaded_file*) ;
 int FUNC_6 (struct preloaded_file*,int ,int,int*) ;
 struct preloaded_file* FUNC_7 (int *,char*) ;
 struct file_metadata* FUNC_8 (struct preloaded_file*,int ) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void**,char*,int *) ;

int
FUNC_16(char *VAR_5, vm_offset_t *VAR_6, vm_offset_t *VAR_7)
{
    struct preloaded_file *VAR_8, *VAR_9;
    struct userboot_devdesc *VAR_10;
    struct file_metadata *VAR_11;
    vm_offset_t VAR_12;
    uint64_t VAR_13;
    uint64_t VAR_14;
    vm_offset_t VAR_15;
    char *VAR_16;
    int VAR_17;

    if (!FUNC_1()) {
 FUNC_12("CPU doesn't support long mode\n");
 return (VAR_0);
    }

    VAR_17 = FUNC_4(VAR_5);






    VAR_16 = FUNC_9("rootdev");
    FUNC_15((void **)(&VAR_10), VAR_16, ((void*)0));
    if (VAR_10 == ((void*)0)) {
 FUNC_12("can't determine root device\n");
 return(VAR_0);
    }


    FUNC_10(FUNC_14((void *)VAR_10));


    VAR_12 = 0;
    for (VAR_8 = FUNC_7(((void*)0), ((void*)0)); VAR_8 != ((void*)0); VAR_8 = VAR_8->f_next) {
 if (VAR_12 < (VAR_8->f_addr + VAR_8->f_size))
     VAR_12 = VAR_8->f_addr + VAR_8->f_size;
    }

    VAR_12 = FUNC_13(VAR_12, VAR_4);


    VAR_14 = VAR_12;
    VAR_12 = FUNC_2(VAR_12);


    VAR_12 = FUNC_13(VAR_12, VAR_4);

    VAR_9 = FUNC_7(((void*)0), "elf kernel");
    if (VAR_9 == ((void*)0))
      VAR_9 = FUNC_7(((void*)0), "elf64 kernel");
    if (VAR_9 == ((void*)0))
 FUNC_11("can't find kernel file");
    VAR_13 = 0;
    FUNC_6(VAR_9, VAR_2, sizeof VAR_17, &VAR_17);
    FUNC_6(VAR_9, VAR_1, sizeof VAR_14, &VAR_14);
    FUNC_6(VAR_9, VAR_3, sizeof VAR_13, &VAR_13);
    FUNC_5(VAR_9);


    *VAR_6 = VAR_12;
    VAR_15 = FUNC_3(0);
    VAR_13 = FUNC_13(VAR_12 + VAR_15, VAR_4);
    *VAR_7 = VAR_13;


    VAR_11 = FUNC_8(VAR_9, VAR_3);
    FUNC_0(&VAR_13, VAR_11->md_data, sizeof VAR_13);


    (void)FUNC_3(VAR_12);

    return(0);
}
