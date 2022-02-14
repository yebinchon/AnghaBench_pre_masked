
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
typedef int prsyminfo_t ;
struct TYPE_5__ {char* pr_mapname; } ;
typedef TYPE_1__ prmap_t ;
typedef int name ;
struct TYPE_6__ {uintptr_t st_value; } ;
typedef TYPE_2__ GElf_Sym ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct ps_prochandle*,uintptr_t,char*,int,TYPE_2__*,int*) ;
 TYPE_1__* FUNC_1 (struct ps_prochandle*,uintptr_t) ;
 size_t FUNC_2 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct ps_prochandle *VAR_1, uintptr_t VAR_2, char *VAR_3, size_t VAR_4,
    int VAR_5)
{
 char VAR_6[256];
 GElf_Sym VAR_7;



 prmap_t *VAR_8;
 int VAR_9;

 size_t VAR_10;

 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1, VAR_2, VAR_6, sizeof (VAR_6),
     &VAR_7, &VAR_9) != 0) {
  (void) FUNC_2(VAR_3, VAR_4, "%#lx", (unsigned long)VAR_2);
  return (0);
 }
 VAR_8 = FUNC_1(VAR_1, VAR_2);
 VAR_10 = FUNC_2(VAR_3, VAR_4, "%s`%s", VAR_8->pr_mapname, VAR_6);

 VAR_3 += VAR_10;
 VAR_4 -= VAR_10;

 if (VAR_7.st_value != VAR_2)
  VAR_10 = FUNC_2(VAR_3, VAR_4, "+%#lx", (unsigned long)(VAR_2 - VAR_7.st_value));

 if (VAR_5 && FUNC_3("libc.so.1", VAR_8->pr_mapname) == 0 &&
     (FUNC_4("mutex", VAR_6) == 0 ||
     FUNC_4("rw", VAR_6) == 0))
  return (-1);

 return (0);
}
