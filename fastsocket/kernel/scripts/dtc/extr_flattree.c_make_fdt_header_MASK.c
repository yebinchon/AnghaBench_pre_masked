
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct version_info {int version; int last_comp_version; int flags; int hdr_size; } ;
struct fdt_reserve_entry {int dummy; } ;
struct fdt_header {void* size_dt_struct; void* size_dt_strings; void* boot_cpuid_phys; void* totalsize; void* off_dt_strings; void* off_dt_struct; void* off_mem_rsvmap; void* last_comp_version; void* version; void* magic; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct fdt_header*,int,int) ;

__attribute__((used)) static void FUNC_3(struct fdt_header *VAR_4,
       struct version_info *VAR_5,
       int VAR_6, int VAR_7, int VAR_8,
       int VAR_9)
{
 int VAR_10;

 VAR_6 += sizeof(struct fdt_reserve_entry);

 FUNC_2(VAR_4, 0xff, sizeof(*VAR_4));

 VAR_4->magic = FUNC_1(VAR_0);
 VAR_4->version = FUNC_1(VAR_5->version);
 VAR_4->last_comp_version = FUNC_1(VAR_5->last_comp_version);


 VAR_10 = FUNC_0(VAR_5->hdr_size, 8);

 VAR_4->off_mem_rsvmap = FUNC_1(VAR_10);
 VAR_4->off_dt_struct = FUNC_1(VAR_10 + VAR_6);
 VAR_4->off_dt_strings = FUNC_1(VAR_10 + VAR_6
       + VAR_7);
 VAR_4->totalsize = FUNC_1(VAR_10 + VAR_6 + VAR_7 + VAR_8);

 if (VAR_5->flags & VAR_1)
  VAR_4->boot_cpuid_phys = FUNC_1(VAR_9);
 if (VAR_5->flags & VAR_2)
  VAR_4->size_dt_strings = FUNC_1(VAR_8);
 if (VAR_5->flags & VAR_3)
  VAR_4->size_dt_struct = FUNC_1(VAR_7);
}
