
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
typedef int term_char_t ;
struct vt_font {size_t vf_height; int const* vf_bytes; int vf_width; int * vf_map_count; int * vf_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 size_t FUNC_2 (int ,int) ;
 size_t FUNC_3 (int ,int ,int ) ;

const uint8_t *
FUNC_4(const struct vt_font *VAR_6, term_char_t VAR_7)
{
 uint32_t VAR_8;
 uint16_t VAR_9;
 size_t VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 VAR_8 = FUNC_0(VAR_7);
 if (FUNC_1(VAR_7) & VAR_1) {
  VAR_11 = VAR_5;
  VAR_12 = VAR_3;
 } else {
  VAR_11 = VAR_4;
  VAR_12 = VAR_2;
 }

 if (FUNC_1(VAR_7) & VAR_0) {
  VAR_9 = FUNC_3(VAR_6->vf_map[VAR_12],
      VAR_6->vf_map_count[VAR_12], VAR_8);
  if (VAR_9 != 0)
   goto found;
 }
 VAR_9 = FUNC_3(VAR_6->vf_map[VAR_11],
     VAR_6->vf_map_count[VAR_11], VAR_8);

found:
 VAR_10 = FUNC_2(VAR_6->vf_width, 8) * VAR_6->vf_height;
 return (&VAR_6->vf_bytes[VAR_9 * VAR_10]);
}
