
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbmix_selector_map {int id; int count; int * names; } ;
struct mixer_build {struct usbmix_selector_map* selector_map; } ;


 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mixer_build *VAR_0, int VAR_1,
          int VAR_2, char *VAR_3, int VAR_4)
{
 const struct usbmix_selector_map *VAR_5;

 if (! VAR_0->selector_map)
  return 0;
 for (VAR_5 = VAR_0->selector_map; VAR_5->id; VAR_5++) {
  if (VAR_5->id == VAR_1 && VAR_2 < VAR_5->count)
   return FUNC_0(VAR_3, VAR_5->names[VAR_2], VAR_4);
 }
 return 0;
}
