
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int dummy; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*) ;

int FUNC_6(void *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);

 VAR_1 = (FUNC_3(VAR_0)+1)
  * sizeof(struct fdt_reserve_entry);
 FUNC_2(VAR_0, VAR_0, VAR_1, FUNC_5(VAR_0));
 FUNC_4(VAR_0, FUNC_1(VAR_0));

 return 0;
}
