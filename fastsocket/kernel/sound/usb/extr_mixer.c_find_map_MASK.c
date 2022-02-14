
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbmix_name_map {int id; int control; } ;
struct mixer_build {struct usbmix_name_map* map; } ;



__attribute__((used)) static const struct usbmix_name_map *
FUNC_0(struct mixer_build *VAR_0, int VAR_1, int VAR_2)
{
 const struct usbmix_name_map *VAR_3 = VAR_0->map;

 if (!VAR_3)
  return ((void*)0);

 for (VAR_3 = VAR_0->map; VAR_3->id; VAR_3++) {
  if (VAR_3->id == VAR_1 &&
      (!VAR_2 || !VAR_3->control || VAR_2 == VAR_3->control))
   return VAR_3;
 }
 return ((void*)0);
}
