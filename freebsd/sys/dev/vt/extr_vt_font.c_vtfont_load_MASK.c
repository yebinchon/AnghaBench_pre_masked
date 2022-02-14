
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int glyph_count; int* map_count; int glyphs; int * map; } ;
typedef TYPE_1__ vfnt_t ;
struct vt_font_map {int dummy; } ;
struct vt_font {size_t vf_height; int vf_width; int vf_refcount; int* vf_map_count; void* vf_bytes; void** vf_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,void*,size_t) ;
 size_t FUNC_1 (int,int) ;
 void* FUNC_2 (size_t,int ,int) ;
 int FUNC_3 (struct vt_font*) ;
 int FUNC_4 (void*,int,size_t) ;

int
FUNC_5(vfnt_t *VAR_10, struct vt_font **VAR_11)
{
 size_t VAR_12, VAR_13;
 struct vt_font *VAR_14;
 int VAR_15;
 unsigned int VAR_16;


 if (VAR_10->width < 1 || VAR_10->height < 1)
  return (VAR_1);
 if (VAR_10->width > VAR_6 || VAR_10->height > VAR_6 ||
     VAR_10->glyph_count > VAR_7)
  return (VAR_0);


 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++)
  if (VAR_10->map_count[VAR_16] > VAR_9)
   return (VAR_0);


 if (VAR_10->glyph_count < 1)
  return (VAR_1);

 VAR_12 = FUNC_1(VAR_10->width, 8) * VAR_10->height * VAR_10->glyph_count;
 if (VAR_12 > VAR_8)
  return (VAR_0);


 VAR_14 = FUNC_2(sizeof *VAR_14, VAR_2, VAR_3 | VAR_4);
 VAR_14->vf_bytes = FUNC_2(VAR_12, VAR_2, VAR_3);
 VAR_14->vf_height = VAR_10->height;
 VAR_14->vf_width = VAR_10->width;
 VAR_14->vf_refcount = 1;


 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  VAR_14->vf_map_count[VAR_16] = VAR_10->map_count[VAR_16];
  if (VAR_10->map_count[VAR_16] == 0)
   continue;
  VAR_13 = VAR_10->map_count[VAR_16] * sizeof(struct vt_font_map);
  VAR_14->vf_map[VAR_16] = FUNC_2(VAR_13, VAR_2, VAR_3);
  VAR_15 = FUNC_0(VAR_10->map[VAR_16], VAR_14->vf_map[VAR_16], VAR_13);
  if (VAR_15)
   goto bad;
  VAR_15 = FUNC_4(VAR_14->vf_map[VAR_16], VAR_14->vf_map_count[VAR_16],
      VAR_10->glyph_count);
  if (VAR_15)
   goto bad;
 }


 VAR_15 = FUNC_0(VAR_10->glyphs, VAR_14->vf_bytes, VAR_12);
 if (VAR_15)
  goto bad;


 *VAR_11 = VAR_14;
 return (0);

bad: FUNC_3(VAR_14);
 return (VAR_15);
}
