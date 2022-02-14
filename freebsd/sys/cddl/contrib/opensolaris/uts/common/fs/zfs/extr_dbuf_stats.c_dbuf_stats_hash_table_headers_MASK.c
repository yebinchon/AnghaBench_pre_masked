
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,size_t,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, size_t VAR_1)
{
 VAR_1 = FUNC_0(VAR_0, VAR_1 - 1,
     "%-88s | %-124s | %s\n"
     "%-16s %-8s %-8s %-8s %-8s %-8s %-8s %-5s %-5s %5s | "
     "%-5s %-5s %-6s %-8s %-6s %-8s %-12s "
     "%-6s %-6s %-6s %-6s %-6s %-8s %-8s %-8s %-5s | "
     "%-6s %-6s %-8s %-8s %-6s %-6s %-5s %-8s %-8s\n",
     "dbuf", "arcbuf", "dnode", "pool", "objset", "object", "level",
     "blkid", "offset", "dbsize", "meta", "state", "dbholds", "list",
     "atype", "index", "flags", "count", "asize", "access", "mru", "gmru",
     "mfu", "gmfu", "l2", "l2_dattr", "l2_asize", "l2_comp", "aholds",
     "dtype", "btype", "data_bs", "meta_bs", "bsize",
     "lvls", "dholds", "blocks", "dsize");
        VAR_0[VAR_1] = '\0';

 return (0);
}
