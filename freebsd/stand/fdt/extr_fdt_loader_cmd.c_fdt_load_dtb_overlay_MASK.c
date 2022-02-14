
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {int f_addr; } ;
struct fdt_header {int dummy; } ;
typedef int header ;


 int FUNC_0 (int ,struct fdt_header*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct fdt_header*) ;
 int FUNC_3 (struct preloaded_file*) ;
 struct preloaded_file* FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_5(const char * VAR_1)
{
 struct preloaded_file *VAR_2;
 struct fdt_header VAR_3;
 int VAR_4;

 FUNC_1("fdt_load_dtb_overlay(%s)\n", VAR_1);







 if ((VAR_2 = FUNC_4(VAR_1, "dtbo", 1)) == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_2->f_addr, &VAR_3, sizeof(VAR_3));
 VAR_4 = FUNC_2(&VAR_3);

 if (VAR_4 < 0) {
  FUNC_3(VAR_2);
  return (VAR_4);
 }

 return (0);
}
