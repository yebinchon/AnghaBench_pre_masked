
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct machine {TYPE_1__** vmlinux_maps; int kmaps; } ;
struct kmap {int * kmaps; } ;
struct dso {int dummy; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;
struct TYPE_4__ {int unmap_ip; int map_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct machine*) ;
 struct kmap* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,struct dso*,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;

int FUNC_4(struct machine *VAR_2, struct dso *VAR_3)
{
 enum map_type VAR_4;
 u64 VAR_5 = FUNC_0(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct kmap *VAR_6;

  VAR_2->vmlinux_maps[VAR_4] = FUNC_2(VAR_5, VAR_3, VAR_4);
  if (VAR_2->vmlinux_maps[VAR_4] == ((void*)0))
   return -1;

  VAR_2->vmlinux_maps[VAR_4]->map_ip =
   VAR_2->vmlinux_maps[VAR_4]->unmap_ip =
    VAR_1;
  VAR_6 = FUNC_1(VAR_2->vmlinux_maps[VAR_4]);
  VAR_6->kmaps = &VAR_2->kmaps;
  FUNC_3(&VAR_2->kmaps,
       VAR_2->vmlinux_maps[VAR_4]);
 }

 return 0;
}
