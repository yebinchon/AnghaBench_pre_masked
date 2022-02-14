
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;


 int FUNC_0 (char*) ;
 struct nls_table* FUNC_1 (int ,char*,char*) ;

struct nls_table *FUNC_2(char *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0), "nls_%s", VAR_0);
}
