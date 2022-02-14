
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 struct fdt_reserve_entry* FUNC_1 (void*,int) ;
 int FUNC_2 (void*,struct fdt_reserve_entry*,int,int ) ;
 int FUNC_3 (void*) ;

int FUNC_4(void *VAR_1, int VAR_2)
{
 struct fdt_reserve_entry *VAR_3 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_1);

 if (VAR_2 >= FUNC_3(VAR_1))
  return -VAR_0;

 return FUNC_2(VAR_1, VAR_3, 1, 0);
}
