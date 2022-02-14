
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_header {int dummy; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*) ;

int
FUNC_5(void)
{
 struct fdt_header *VAR_0;
 const char *VAR_1;
 char *VAR_2;
 int VAR_3;







 if ((VAR_3 = FUNC_1("fdt_addr_r")) == 0)
  goto exit;
 if ((VAR_3 = FUNC_1("fdt_addr")) == 0)
  goto exit;
 if ((VAR_3 = FUNC_1("fdtaddr")) == 0)
  goto exit;

 VAR_3 = 1;




 VAR_1 = FUNC_2("fdt_file");
 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_4("fdtfile");
 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_4("fdt_file");
 if (VAR_1 != ((void*)0) && *VAR_1 != '\0') {
  if (FUNC_0(VAR_1) == 0) {
   FUNC_3("Loaded DTB from file '%s'.\n", VAR_1);
   VAR_3 = 0;
   goto exit;
  }
 }

exit:
 return (VAR_3);
}
