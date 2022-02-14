
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol_filter_t ;
struct map {int dso; } ;
struct machine {struct map** vmlinux_maps; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 int FUNC_0 (int ,struct map*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct map*) ;

int FUNC_3(struct machine *VAR_0, enum map_type VAR_1,
          symbol_filter_t VAR_2)
{
 struct map *VAR_3 = VAR_0->vmlinux_maps[VAR_1];
 int VAR_4 = FUNC_0(VAR_3->dso, VAR_3, VAR_2);

 if (VAR_4 > 0) {
  FUNC_1(VAR_3->dso, VAR_1);
  FUNC_2(VAR_3);
 }

 return VAR_4;
}
