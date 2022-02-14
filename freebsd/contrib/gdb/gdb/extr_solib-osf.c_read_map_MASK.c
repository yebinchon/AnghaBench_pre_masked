
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct so_list {int lm_info; } ;
struct read_map_ctxt {scalar_t__ next; scalar_t__ tail; int proc; } ;
typedef int ldr_region_t ;
struct TYPE_5__ {int mapaddr; int vaddr; int regionname_addr; scalar_t__ lri_mapaddr; scalar_t__ lri_vaddr; int lri_name; } ;
typedef TYPE_1__ ldr_region_info_t ;
struct TYPE_6__ {char* lmi_name; int lmi_nregion; int region_count; scalar_t__ regioninfo_addr; int modinfo_addr; int module_name; scalar_t__ next; } ;
typedef TYPE_2__ ldr_module_info_t ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct so_list*,int,int ,int *,int ,int ) ;
 int FUNC_1 (struct so_list*,char*,int,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,TYPE_2__*,int,size_t*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int,TYPE_1__*,int,size_t*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct so_list*) ;
 scalar_t__ FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (int ,char**,int ,int*) ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11 (struct read_map_ctxt *VAR_2, struct so_list *VAR_3)
{
  ldr_module_info_t VAR_4;
  ldr_region_info_t VAR_5;
  char *VAR_6;
  int VAR_7, VAR_8;


  if (!VAR_2->next)
    return 0;
  if (FUNC_7 (VAR_2->next, (char *) &VAR_4, sizeof VAR_4) != 0)
    return 0;
  if (VAR_2->next == VAR_2->tail)
    VAR_2->next = 0;
  else
    VAR_2->next = VAR_4.next;


  FUNC_8 (VAR_4.module_name, &VAR_6, VAR_1, &VAR_7);
  if (VAR_7 != 0)
    return 0;
  FUNC_1 (VAR_3, VAR_6, !VAR_4.modinfo_addr, VAR_4.region_count);
  FUNC_9 (VAR_6);


  for (VAR_8 = 0; VAR_8 < VAR_4.region_count; VAR_8++)
    {
      if (FUNC_7 (VAR_4.regioninfo_addr + VAR_8 * sizeof VAR_5,
         (char *) &VAR_5, sizeof VAR_5) != 0)
 goto err;
      FUNC_0 (VAR_3, VAR_8, VAR_5.regionname_addr, ((void*)0), VAR_5.vaddr, VAR_5.mapaddr);
    }

  return 1;

 err:
  FUNC_6 (VAR_3);
  return 0;
}
