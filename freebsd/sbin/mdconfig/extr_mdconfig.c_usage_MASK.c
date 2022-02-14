
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_0,
"usage: mdconfig -a -t type [-n] [-o [no]option] ... [-f file]\n"
"                [-s size] [-S sectorsize] [-u unit] [-L label]\n"
"                [-x sectors/track] [-y heads/cylinder]\n"
"       mdconfig -d -u unit [-o [no]force]\n"
"       mdconfig -r -u unit -s size [-o [no]force]\n"
"       mdconfig -l [-v] [-n] [-f file] [-u unit]\n"
"       mdconfig file\n");
 FUNC_1(VAR_0, "\t\ttype = {malloc, vnode, swap}\n");
 FUNC_1(VAR_0, "\t\toption = {cache, cluster, compress, force,\n");
 FUNC_1(VAR_0, "\t\t          readonly, reserve, ro, verify}\n");
 FUNC_1(VAR_0, "\t\tsize = %%d (512 byte blocks), %%db (B),\n");
 FUNC_1(VAR_0, "\t\t       %%dk (kB), %%dm (MB), %%dg (GB), \n");
 FUNC_1(VAR_0, "\t\t       %%dt (TB), or %%dp (PB)\n");
 FUNC_0(1);
}
