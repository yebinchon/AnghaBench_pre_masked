
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc_handle {int nmappings; int maparrsz; char* execpath; size_t exec_map; struct map_info* mappings; } ;
struct TYPE_6__ {char* pr_mapname; } ;
struct map_info {struct file_info* file; TYPE_3__ map; } ;
struct file_info {int fd; int refs; int * elf; } ;
struct TYPE_5__ {char* rdl_path; int rdl_prot; } ;
typedef TYPE_1__ rd_loadobj_t ;


 int VAR_0 ;
 struct file_info* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_3__*) ;
 struct map_info* FUNC_2 (struct map_info*,int,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(const rd_loadobj_t *VAR_1, void *VAR_2)
{
 struct file_info *VAR_3;
 struct map_info *VAR_4, *VAR_5;
 struct proc_handle *VAR_6;
 size_t VAR_7;

 VAR_6 = VAR_2;
 if (VAR_6->nmappings >= VAR_6->maparrsz) {
  VAR_6->maparrsz *= 2;
  VAR_5 = FUNC_2(VAR_6->mappings, VAR_6->maparrsz,
      sizeof(*VAR_6->mappings));
  if (VAR_5 == ((void*)0))
   return (-1);
  VAR_6->mappings = VAR_5;
 }

 VAR_4 = &VAR_6->mappings[VAR_6->nmappings];
 FUNC_1(VAR_1, &VAR_4->map);
 if (FUNC_3(VAR_1->rdl_path, VAR_6->execpath) == 0 &&
     (VAR_1->rdl_prot & VAR_0) != 0)
  VAR_6->exec_map = VAR_6->nmappings;

 VAR_3 = ((void*)0);
 if (VAR_1->rdl_path[0] != '\0') {

  for (VAR_7 = 0; VAR_7 < VAR_6->nmappings; VAR_7++)
   if (FUNC_3(VAR_4->map.pr_mapname,
       VAR_6->mappings[VAR_7].map.pr_mapname) == 0) {
    VAR_3 = VAR_6->mappings[VAR_7].file;
    break;
   }

  if (VAR_3 == ((void*)0)) {
   VAR_3 = FUNC_0(sizeof(*VAR_3));
   if (VAR_3 == ((void*)0))
    return (-1);
   VAR_3->elf = ((void*)0);
   VAR_3->fd = -1;
   VAR_3->refs = 1;
  } else
   VAR_3->refs++;
 }
 VAR_4->file = VAR_3;
 VAR_6->nmappings++;
 return (0);
}
