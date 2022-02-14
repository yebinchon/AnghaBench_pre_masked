
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct preloaded_file {int f_addr; int f_size; struct preloaded_file* f_next; } ;
struct file_metadata {int* md_data; } ;
struct devdesc {int dummy; } ;
struct TYPE_2__ {int (* arch_getdev ) (void**,char*,int *) ;} ;


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
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct preloaded_file*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct preloaded_file*,int ,int,int*) ;
 struct preloaded_file* FUNC_9 (int *,char*) ;
 struct file_metadata* FUNC_10 (struct preloaded_file*,int ) ;
 int FUNC_11 (struct preloaded_file*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 size_t FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int VAR_11 ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (void**,char*,int *) ;

int
FUNC_19(char *VAR_12, vm_offset_t *VAR_13, vm_offset_t *VAR_14)
{
 struct preloaded_file *VAR_15, *VAR_16;
 struct devdesc *VAR_17;
 struct file_metadata *VAR_18;
 vm_offset_t VAR_19;
 uint64_t VAR_20;
 uint64_t VAR_21;
 vm_offset_t VAR_22;
 char *VAR_23;
 int VAR_24;
 VAR_24 = FUNC_4(VAR_12);






 VAR_23 = FUNC_12("rootdev");
 VAR_10.arch_getdev((void**)(&VAR_17), VAR_23, ((void*)0));
 if (VAR_17 == ((void*)0)) {
  FUNC_16("Can't determine root device.\n");
  return(VAR_0);
 }


 FUNC_13(FUNC_6((void *)VAR_17));

 VAR_19 = 0;
 for (VAR_15 = FUNC_9(((void*)0), ((void*)0)); VAR_15 != ((void*)0); VAR_15 = VAR_15->f_next) {
  if (VAR_19 < (VAR_15->f_addr + VAR_15->f_size))
   VAR_19 = VAR_15->f_addr + VAR_15->f_size;
 }


 VAR_19 = FUNC_17(VAR_19, VAR_8);


 VAR_21 = VAR_19;
 VAR_19 = FUNC_2(VAR_19);


 VAR_19 = FUNC_17(VAR_19, VAR_8);
 VAR_16 = FUNC_9(((void*)0), "elf kernel");
 if (VAR_16 == ((void*)0))
  VAR_16 = FUNC_9(((void*)0), "elf64 kernel");
 if (VAR_16 == ((void*)0))
  FUNC_15("can't find kernel file");
 VAR_20 = 0;
 FUNC_8(VAR_16, VAR_5, sizeof VAR_24, &VAR_24);
 FUNC_8(VAR_16, VAR_2, sizeof VAR_21, &VAR_21);







 FUNC_8(VAR_16, VAR_6, sizeof VAR_20, &VAR_20);
 FUNC_8(VAR_16, VAR_4, sizeof VAR_9, &VAR_9);



 FUNC_5(VAR_16);


 *VAR_13 = VAR_19;
 VAR_22 = FUNC_3(0);
 VAR_20 = FUNC_17(VAR_19 + VAR_22, VAR_8);
 *VAR_14 = VAR_20;


 VAR_18 = FUNC_10(VAR_16, VAR_6);
 FUNC_1(&VAR_20, VAR_18->md_data, sizeof VAR_20);
 (void)FUNC_3(VAR_19);

 return (0);
}
