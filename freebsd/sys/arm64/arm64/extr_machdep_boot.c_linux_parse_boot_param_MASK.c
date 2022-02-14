
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
struct fdt_header {int dummy; } ;
struct arm64_bootparams {scalar_t__ modulep; } ;


 int FUNC_0 (struct fdt_header*,int ,struct arm64_bootparams*) ;
 scalar_t__ FUNC_1 (struct fdt_header*) ;
 int FUNC_2 (struct fdt_header*) ;

vm_offset_t
FUNC_3(struct arm64_bootparams *VAR_0)
{
 uint32_t VAR_1 = 0;
 struct fdt_header *VAR_2 = ((void*)0);







 return (FUNC_0(VAR_2, VAR_1, VAR_0));
}
