
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_header {int dummy; } ;


 struct fdt_header* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct fdt_header*) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct fdt_header*) ;

int
FUNC_3(void)
{
 struct fdt_header *VAR_1;

 VAR_1 = FUNC_0(&VAR_0);
 if (VAR_1 == ((void*)0))
  return (1);
 if (FUNC_1(VAR_1) != 0)
  return (1);
 FUNC_2("Using DTB provided by EFI at %p.\n", VAR_1);

 return (0);
}
