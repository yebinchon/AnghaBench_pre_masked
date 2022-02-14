
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol_filter_t ;
struct map {int dso; } ;
struct machine {int kmaps; struct map** vmlinux_maps; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char const*,struct map*,int ) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct machine *VAR_0, const char *VAR_1,
      enum map_type VAR_2, symbol_filter_t VAR_3)
{
 struct map *VAR_4 = VAR_0->vmlinux_maps[VAR_2];
 int VAR_5 = FUNC_1(VAR_4->dso, VAR_1, VAR_4, VAR_3);

 if (VAR_5 > 0) {
  FUNC_2(VAR_4->dso, VAR_2);





  FUNC_0(&VAR_0->kmaps, VAR_2);
 }

 return VAR_5;
}
