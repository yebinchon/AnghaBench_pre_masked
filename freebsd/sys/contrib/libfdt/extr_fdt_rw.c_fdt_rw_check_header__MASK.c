
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int dummy; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*,int,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2)
{
 FUNC_0(VAR_2);

 if (FUNC_4(VAR_2) < 17)
  return -VAR_1;
 if (FUNC_1(VAR_2, sizeof(struct fdt_reserve_entry),
       FUNC_3(VAR_2)))
  return -VAR_0;
 if (FUNC_4(VAR_2) > 17)
  FUNC_2(VAR_2, 17);

 return 0;
}
