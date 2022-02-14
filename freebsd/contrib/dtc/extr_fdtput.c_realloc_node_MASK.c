
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_node_header {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 char* FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = sizeof(struct fdt_node_header) + FUNC_0(FUNC_2(VAR_2) + 1)
   + VAR_0;
 return FUNC_1(VAR_1, VAR_3);
}
