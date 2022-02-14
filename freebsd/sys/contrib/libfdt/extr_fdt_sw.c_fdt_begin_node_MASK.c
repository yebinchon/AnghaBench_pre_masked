
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_node_header {int name; int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct fdt_node_header* FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (char const*) ;

int FUNC_6(void *VAR_2, const char *VAR_3)
{
 struct fdt_node_header *VAR_4;
 int VAR_5 = FUNC_5(VAR_3) + 1;

 FUNC_0(VAR_2);

 VAR_4 = FUNC_3(VAR_2, sizeof(*VAR_4) + FUNC_1(VAR_5));
 if (! VAR_4)
  return -VAR_1;

 VAR_4->tag = FUNC_2(VAR_0);
 FUNC_4(VAR_4->name, VAR_3, VAR_5);
 return 0;
}
