
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_header {int dummy; } ;


 scalar_t__ FUNC_0 (struct fdt_header*) ;
 int FUNC_1 (char*,struct fdt_header*) ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0)
{
 struct fdt_header *VAR_1;
 const char *VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 == ((void*)0) || *VAR_2 == '\0')
  return (1);

 VAR_1 = (struct fdt_header *)FUNC_2(VAR_2, &VAR_3, 16);
 if (*VAR_3 != '\0')
  return (1);

 if (FUNC_0(VAR_1) == 0) {
  FUNC_1("Using DTB provided by U-Boot at "
      "address %p.\n", VAR_1);
  return (0);
 }

 return (1);
}
