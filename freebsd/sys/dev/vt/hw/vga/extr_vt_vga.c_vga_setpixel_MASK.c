
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_color_t ;
struct vt_device {int vd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vt_device*,int,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct vt_device *VAR_2, int VAR_3, int VAR_4, term_color_t VAR_5)
{

 if (VAR_2->vd_flags & VAR_0)
  return;

 FUNC_0(VAR_2, (VAR_4 * VAR_1 / 8) + (VAR_3 / 8), VAR_5,
     0x80 >> (VAR_3 % 8));
}
