
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct proc_handle {size_t nmappings; TYPE_1__* mappings; } ;
typedef int (* proc_map_f ) (void*,TYPE_2__*,char*) ;
struct TYPE_7__ {char* pr_mapname; } ;
typedef TYPE_2__ prmap_t ;
typedef int path ;
typedef int last ;
struct TYPE_6__ {TYPE_2__ map; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int * FUNC_2 (struct proc_handle*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (void*,TYPE_2__*,char*) ;

int
FUNC_6(struct proc_handle *VAR_1, proc_map_f *VAR_2, void *VAR_3)
{
 char VAR_4[VAR_0], VAR_5[VAR_0], *VAR_6;
 prmap_t *VAR_7;
 size_t VAR_8;
 int VAR_9;

 if (VAR_1->nmappings == 0)
  if (FUNC_2(VAR_1) == ((void*)0))
   return (-1);

 VAR_9 = 0;
 FUNC_1(VAR_4, 0, sizeof(VAR_4));
 for (VAR_8 = 0; VAR_8 < VAR_1->nmappings; VAR_8++) {
  VAR_7 = &VAR_1->mappings[VAR_8].map;
  FUNC_4(VAR_5, VAR_7->pr_mapname, sizeof(VAR_5));
  VAR_6 = FUNC_0(VAR_5);






  if (FUNC_3(VAR_6, VAR_4) == 0)
   continue;
  if ((VAR_9 = (*VAR_2)(VAR_3, VAR_7, VAR_6)) != 0)
   break;
  FUNC_4(VAR_4, VAR_5, sizeof(VAR_4));
 }
 return (VAR_9);
}
