
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int dummy; } ;
struct fdt_header {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (void*,int ,int) ;

int FUNC_10(void *VAR_4, int VAR_5)
{
 void *VAR_6 = VAR_4;

 if (VAR_5 < sizeof(struct fdt_header))
  return -VAR_0;

 FUNC_9(VAR_4, 0, VAR_5);

 FUNC_3(VAR_6, VAR_3);
 FUNC_8(VAR_6, VAR_2);
 FUNC_2(VAR_6, VAR_1);
 FUNC_7(VAR_6, VAR_5);

 FUNC_6(VAR_6, FUNC_0(sizeof(struct fdt_header),
           sizeof(struct fdt_reserve_entry)));
 FUNC_5(VAR_6, FUNC_1(VAR_6));
 FUNC_4(VAR_6, VAR_5);

 return 0;
}
