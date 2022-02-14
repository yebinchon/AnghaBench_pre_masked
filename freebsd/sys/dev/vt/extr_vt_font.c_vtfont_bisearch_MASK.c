
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct vt_font_map {scalar_t__ vfm_src; scalar_t__ vfm_len; scalar_t__ vfm_dst; } ;



__attribute__((used)) static uint16_t
FUNC_0(const struct vt_font_map *VAR_0, unsigned int VAR_1, uint32_t VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = 0;
 VAR_5 = VAR_1 - 1;


 if (VAR_1 == 0)
  return (0);

 if (VAR_2 < VAR_0[0].vfm_src)
  return (0);

 if (VAR_2 <= VAR_0[0].vfm_src + VAR_0[0].vfm_len)
  return (VAR_2 - VAR_0[0].vfm_src + VAR_0[0].vfm_dst);

 if (VAR_2 > VAR_0[VAR_5].vfm_src + VAR_0[VAR_5].vfm_len)
  return (0);


 while (VAR_5 >= VAR_3) {
  VAR_4 = (VAR_3 + VAR_5) / 2;
  if (VAR_2 < VAR_0[VAR_4].vfm_src)
   VAR_5 = VAR_4 - 1;
  else if (VAR_2 > VAR_0[VAR_4].vfm_src + VAR_0[VAR_4].vfm_len)
   VAR_3 = VAR_4 + 1;
  else
   return (VAR_2 - VAR_0[VAR_4].vfm_src + VAR_0[VAR_4].vfm_dst);
 }

 return (0);
}
