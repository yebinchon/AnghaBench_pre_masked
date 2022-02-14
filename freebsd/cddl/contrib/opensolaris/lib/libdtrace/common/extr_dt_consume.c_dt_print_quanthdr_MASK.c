
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_hdl_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,char*,int,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_1(dtrace_hdl_t *VAR_0, FILE *VAR_1, int VAR_2)
{
 return (FUNC_0(VAR_0, VAR_1, "\n%*s %41s %-9s\n",
     VAR_2 ? VAR_2 : 16, VAR_2 ? "key" : "value",
     "------------- Distribution -------------", "count"));
}
