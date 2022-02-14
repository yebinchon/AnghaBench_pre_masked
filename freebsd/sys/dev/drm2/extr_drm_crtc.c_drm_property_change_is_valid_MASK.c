
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct drm_property {int flags; unsigned long long* values; int num_values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct drm_property *VAR_4,
      uint64_t VAR_5)
{
 if (VAR_4->flags & VAR_2)
  return 0;
 if (VAR_4->flags & VAR_3) {
  if (VAR_5 < VAR_4->values[0] || VAR_5 > VAR_4->values[1])
   return 0;
  return 1;
 } else if (VAR_4->flags & VAR_0) {
  int VAR_6;
  uint64_t VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_4->num_values; VAR_6++)
   VAR_7 |= (1ULL << VAR_4->values[VAR_6]);
  return !(VAR_5 & ~VAR_7);
 } else if (VAR_4->flags & VAR_1) {

  return 1;
 } else {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_4->num_values; VAR_8++)
   if (VAR_4->values[VAR_8] == VAR_5)
    return 1;
  return 0;
 }
}
