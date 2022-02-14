
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint32_t ;
struct preloaded_file {int f_args; } ;
struct file_metadata {int md_data; } ;
typedef int stack ;
struct TYPE_2__ {int e_entry; } ;
typedef TYPE_1__ Elf_Ehdr ;


 int FUNC_0 (int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int*,int*,int*,int*,int*) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 struct file_metadata* FUNC_3 (struct preloaded_file*,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct preloaded_file *VAR_8)
{
 struct file_metadata *VAR_9;
 Elf_Ehdr *VAR_10;
 vm_offset_t VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18[1024], *VAR_19;


 if ((VAR_9 = FUNC_3(VAR_8, VAR_3)) == ((void*)0))
  return(VAR_0);
 VAR_10 = (Elf_Ehdr *)&(VAR_9->md_data);

 VAR_16 = FUNC_1(VAR_8->f_args, &VAR_15, &VAR_17, &VAR_12, &VAR_13, &VAR_14);
 if (VAR_16 != 0)
  return(VAR_16);
 VAR_11 = VAR_10->e_entry & 0xffffff;





 FUNC_2();




 FUNC_4(VAR_18, 0, sizeof(VAR_18));
 VAR_19 = (uint32_t *)((char *)VAR_18 + sizeof(VAR_18));
 *--VAR_19 = VAR_14;
 *--VAR_19 = VAR_13;
 *--VAR_19 = VAR_12;
 *--VAR_19 = 0;
 *--VAR_19 = 0;
 *--VAR_19 = 0;
 *--VAR_19 = VAR_17;
 *--VAR_19 = VAR_15;





 *--VAR_19 = 0xbeefface;
 FUNC_0(VAR_4, VAR_18, VAR_2, sizeof(VAR_18));
 FUNC_0(VAR_7, 4, (char *)VAR_19 - (char *)VAR_18 + VAR_2);

 FUNC_0(VAR_6, VAR_1, 8 * 4 - 1);

        FUNC_0(VAR_5, VAR_11);

 FUNC_5("exec returned");
}
