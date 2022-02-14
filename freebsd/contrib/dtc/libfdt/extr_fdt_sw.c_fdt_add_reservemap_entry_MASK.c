
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct fdt_reserve_entry {void* size; void* address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*) ;

int FUNC_6(void *VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
 struct fdt_reserve_entry *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2);

 if (FUNC_4(VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2);
 if ((VAR_6 + sizeof(*VAR_5)) > FUNC_5(VAR_2))
  return -VAR_1;

 VAR_5 = (struct fdt_reserve_entry *)((char *)VAR_2 + VAR_6);
 VAR_5->address = FUNC_1(VAR_3);
 VAR_5->size = FUNC_1(VAR_4);

 FUNC_3(VAR_2, VAR_6 + sizeof(*VAR_5));

 return 0;
}
