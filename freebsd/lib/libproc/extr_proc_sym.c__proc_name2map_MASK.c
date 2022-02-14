
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_handle {size_t nmappings; size_t exec_map; struct map_info* mappings; } ;
struct TYPE_2__ {int pr_vaddr; int pr_mapname; } ;
struct map_info {TYPE_1__ map; } ;
typedef int path ;


 int VAR_0 ;
 struct map_info* FUNC_0 (struct proc_handle*,int ) ;
 char* FUNC_1 (char*) ;
 int * FUNC_2 (struct proc_handle*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char*,int ,int) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;

__attribute__((used)) static struct map_info *
FUNC_7(struct proc_handle *VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0], *VAR_4;
 struct map_info *VAR_5;
 size_t VAR_6, VAR_7;

 if ((VAR_7 = FUNC_5(VAR_2)) == 0)
  return (((void*)0));
 if (VAR_1->nmappings == 0)
  if (FUNC_2(VAR_1) == ((void*)0))
   return (((void*)0));
 for (VAR_6 = 0; VAR_6 < VAR_1->nmappings; VAR_6++) {
  VAR_5 = &VAR_1->mappings[VAR_6];
  (void)FUNC_4(VAR_3, VAR_5->map.pr_mapname, sizeof(VAR_3));
  VAR_4 = FUNC_1(VAR_3);
  if (FUNC_3(VAR_4, VAR_2) == 0)
   return (VAR_5);
 }

 for (VAR_6 = 0; VAR_6 < VAR_1->nmappings; VAR_6++) {
  VAR_5 = &VAR_1->mappings[VAR_6];
  FUNC_4(VAR_3, VAR_5->map.pr_mapname, sizeof(VAR_3));
  VAR_4 = FUNC_1(VAR_3);
  if (FUNC_6(VAR_4, VAR_2, VAR_7) == 0)
   return (VAR_5);
 }
 if (FUNC_3(VAR_2, "a.out") == 0)
  return (FUNC_0(VAR_1,
      VAR_1->mappings[VAR_1->exec_map].map.pr_vaddr));
 return (((void*)0));
}
