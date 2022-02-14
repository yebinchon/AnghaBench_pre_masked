
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct vmctx {size_t lowmem_limit; size_t lowmem; size_t highmem; char* baseaddr; } ;
typedef enum vm_mmap_style { ____Placeholder_vm_mmap_style } vm_mmap_style ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *,size_t,int ,int,int,int ) ;
 int FUNC_2 (struct vmctx*,int,size_t,char*) ;
 int FUNC_3 (struct vmctx*,int ,size_t,int *) ;

int
FUNC_4(struct vmctx *VAR_8, size_t VAR_9, enum vm_mmap_style VAR_10)
{
 size_t VAR_11, VAR_12;
 vm_paddr_t VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16;

 FUNC_0(VAR_10 == VAR_5);





 if (VAR_9 > VAR_8->lowmem_limit) {
  VAR_8->lowmem = VAR_8->lowmem_limit;
  VAR_8->highmem = VAR_9 - VAR_8->lowmem_limit;
  VAR_11 = 4*VAR_0 + VAR_8->highmem;
 } else {
  VAR_8->lowmem = VAR_9;
  VAR_8->highmem = 0;
  VAR_11 = VAR_8->lowmem;
 }

 VAR_16 = FUNC_3(VAR_8, VAR_7, VAR_11, ((void*)0));
 if (VAR_16)
  return (VAR_16);





 VAR_12 = VAR_6 + VAR_11 + VAR_6;
 VAR_15 = FUNC_1(((void*)0), VAR_12, VAR_4, VAR_3 | VAR_1, -1, 0);
 if (VAR_15 == VAR_2)
  return (-1);

 VAR_14 = VAR_15 + VAR_6;
 if (VAR_8->highmem > 0) {
  VAR_13 = 4*VAR_0;
  VAR_12 = VAR_8->highmem;
  VAR_16 = FUNC_2(VAR_8, VAR_13, VAR_12, VAR_14);
  if (VAR_16)
   return (VAR_16);
 }

 if (VAR_8->lowmem > 0) {
  VAR_13 = 0;
  VAR_12 = VAR_8->lowmem;
  VAR_16 = FUNC_2(VAR_8, VAR_13, VAR_12, VAR_14);
  if (VAR_16)
   return (VAR_16);
 }

 VAR_8->baseaddr = VAR_14;

 return (0);
}
