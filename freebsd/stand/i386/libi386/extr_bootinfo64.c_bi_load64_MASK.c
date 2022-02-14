
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
struct preloaded_file {scalar_t__ f_addr; scalar_t__ f_size; struct preloaded_file* f_next; } ;
struct i386_devdesc {int dummy; } ;
struct file_metadata {int md_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct preloaded_file*) ;
 int FUNC_6 (struct preloaded_file*,int ,int,int*) ;
 struct preloaded_file* FUNC_7 (int *,char*) ;
 struct file_metadata* FUNC_8 (struct preloaded_file*,int ) ;
 int FUNC_9 (struct preloaded_file*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void**,char*,int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;

int
FUNC_17(char *VAR_6, vm_offset_t VAR_7, vm_offset_t *VAR_8,
    vm_offset_t *VAR_9, int VAR_10)
{
    struct preloaded_file *VAR_11, *VAR_12;
    struct i386_devdesc *VAR_13;
    struct file_metadata *VAR_14;
    uint64_t VAR_15;
    uint64_t VAR_16;
    uint64_t VAR_17;
    vm_offset_t VAR_18;
    char *VAR_19;
    int VAR_20;

    if (!FUNC_1()) {
 FUNC_15("CPU doesn't support long mode\n");
 return (VAR_0);
    }

    VAR_20 = FUNC_4(VAR_6);






    VAR_19 = FUNC_10("rootdev");
    FUNC_13((void **)(&VAR_13), VAR_19, ((void*)0));
    if (VAR_13 == ((void*)0)) {
 FUNC_15("can't determine root device\n");
 return(VAR_0);
    }


    FUNC_11(FUNC_12((void *)VAR_13));

    if (VAR_7 == 0) {

        for (VAR_11 = FUNC_7(((void*)0), ((void*)0)); VAR_11 != ((void*)0); VAR_11 = VAR_11->f_next) {
            if (VAR_7 < (VAR_11->f_addr + VAR_11->f_size))
                VAR_7 = VAR_11->f_addr + VAR_11->f_size;
        }
    }

    VAR_7 = FUNC_16(VAR_7, VAR_5);


    VAR_17 = *VAR_8 = VAR_7;

    VAR_12 = FUNC_7(((void*)0), "elf kernel");
    if (VAR_12 == ((void*)0))
      VAR_12 = FUNC_7(((void*)0), "elf64 kernel");
    if (VAR_12 == ((void*)0))
 FUNC_14("can't find kernel file");
    VAR_15 = 0;
    FUNC_6(VAR_12, VAR_2, sizeof VAR_20, &VAR_20);
    FUNC_6(VAR_12, VAR_1, sizeof VAR_16, &VAR_16);
    FUNC_6(VAR_12, VAR_3, sizeof VAR_15, &VAR_15);
    FUNC_6(VAR_12, VAR_4, sizeof VAR_17, &VAR_17);
    if (VAR_10 != 0)
        FUNC_5(VAR_12);




    VAR_18 = FUNC_3(0);


    VAR_16 = FUNC_16(VAR_7 + VAR_18, VAR_5);
    VAR_7 = FUNC_2(VAR_16);


    VAR_15 = FUNC_16(VAR_7, VAR_5);
    *VAR_9 = VAR_15;


    VAR_14 = FUNC_8(VAR_12, VAR_3);
    FUNC_0(&VAR_15, VAR_14->md_data, sizeof VAR_15);


    VAR_14 = FUNC_8(VAR_12, VAR_1);
    FUNC_0(&VAR_16, VAR_14->md_data, sizeof VAR_16);


    (void)FUNC_3(*VAR_8);

    return(0);
}
