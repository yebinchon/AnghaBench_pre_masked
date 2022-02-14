
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {void* size; void* address; } ;
struct data {int dummy; } ;
typedef int bere ;


 void* FUNC_0 (void*) ;
 struct data FUNC_1 (struct data,struct fdt_reserve_entry*,int) ;

struct data FUNC_2(struct data VAR_0, const struct fdt_reserve_entry *VAR_1)
{
 struct fdt_reserve_entry VAR_2;

 VAR_2.address = FUNC_0(VAR_1->address);
 VAR_2.size = FUNC_0(VAR_1->size);

 return FUNC_1(VAR_0, &VAR_2, sizeof(VAR_2));
}
