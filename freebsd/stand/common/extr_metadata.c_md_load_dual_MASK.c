
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct preloaded_file {scalar_t__ f_addr; scalar_t__ f_size; struct preloaded_file* f_next; } ;
struct file_metadata {scalar_t__* md_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int VAR_12 ;
 int* VAR_13 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct preloaded_file*,int ,int,...) ;
 struct preloaded_file* FUNC_4 (int *,char*) ;
 struct file_metadata* FUNC_5 (struct preloaded_file*,int ) ;
 int FUNC_6 (struct preloaded_file*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int VAR_14 ;
 int* VAR_15 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int VAR_16 ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_15(char *VAR_17, vm_offset_t *VAR_18, vm_offset_t *VAR_19, int VAR_20)
{
    struct preloaded_file *VAR_21;
    struct preloaded_file *VAR_22;
    struct file_metadata *VAR_23;
    vm_offset_t VAR_24;
    vm_offset_t VAR_25;
    vm_offset_t VAR_26;



    vm_offset_t VAR_27;
    uint64_t VAR_28;
    char *VAR_29;
    int VAR_30;
    VAR_11 = VAR_20 ? 8 : 4;
    VAR_30 = FUNC_11(VAR_17);






    VAR_29 = FUNC_7("rootdev");
    if (VAR_29 == ((void*)0))
 VAR_29 = FUNC_7("currdev");

    FUNC_8(VAR_29);


    VAR_25 = 0;
    for (VAR_22 = FUNC_4(((void*)0), ((void*)0)); VAR_22 != ((void*)0); VAR_22 = VAR_22->f_next) {
 if (VAR_25 < (VAR_22->f_addr + VAR_22->f_size))
     VAR_25 = VAR_22->f_addr + VAR_22->f_size;
    }

    VAR_25 = FUNC_14(VAR_25, VAR_10);


    VAR_26 = VAR_25;
    VAR_25 = FUNC_9(VAR_25);


    VAR_25 = FUNC_14(VAR_25, VAR_10);
    VAR_24 = 0;
    VAR_21 = FUNC_4(((void*)0), VAR_20 ? "elf64 kernel" : "elf32 kernel");
    if (VAR_21 == ((void*)0))
 VAR_21 = FUNC_4(((void*)0), "elf kernel");
    if (VAR_21 == ((void*)0))
 FUNC_13("can't find kernel file");
    FUNC_3(VAR_21, VAR_5, sizeof VAR_30, &VAR_30);
    if (VAR_20) {
 VAR_28 = VAR_26;
 FUNC_3(VAR_21, VAR_3, sizeof VAR_28, &VAR_28);






 VAR_28 = VAR_24;
 FUNC_3(VAR_21, VAR_8,
  sizeof VAR_28, &VAR_28);
    } else {
 FUNC_3(VAR_21, VAR_3, sizeof VAR_26, &VAR_26);




 FUNC_3(VAR_21, VAR_8, sizeof VAR_24, &VAR_24);
    }
    *VAR_18 = VAR_25;
    VAR_27 = FUNC_10(0, VAR_20);
    VAR_24 = FUNC_14(VAR_25 + VAR_27, VAR_10);

    VAR_23 = FUNC_5(VAR_21, VAR_8);
    if (VAR_20) {
 VAR_28 = VAR_24;
 FUNC_1(&VAR_28, VAR_23->md_data, sizeof VAR_28);
    } else {
 FUNC_1(&VAR_24, VAR_23->md_data, sizeof VAR_24);
    }
    (void)FUNC_10(VAR_25, VAR_20);





    return(0);
}
