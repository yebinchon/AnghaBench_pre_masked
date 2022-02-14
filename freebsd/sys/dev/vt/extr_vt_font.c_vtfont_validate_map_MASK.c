
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_font_map {unsigned int vfm_src; unsigned int vfm_dst; unsigned int vfm_len; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct vt_font_map *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {

  if (VAR_4 > 0 && VAR_1[VAR_4].vfm_src <= VAR_5)
   return (VAR_0);



  if (VAR_1[VAR_4].vfm_dst >= VAR_3 ||
      VAR_1[VAR_4].vfm_dst + VAR_1[VAR_4].vfm_len >= VAR_3)
   return (VAR_0);
  VAR_5 = VAR_1[VAR_4].vfm_src + VAR_1[VAR_4].vfm_len;
 }

 return (0);
}
