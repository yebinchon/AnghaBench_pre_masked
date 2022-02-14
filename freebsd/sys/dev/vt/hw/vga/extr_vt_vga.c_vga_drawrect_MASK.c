
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_color_t ;
struct vt_device {int vd_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vt_device*,int,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct vt_device *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
    term_color_t VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_1->vd_flags & VAR_0)
  return;

 for (VAR_9 = VAR_3; VAR_9 <= VAR_5; VAR_9++) {
  if (VAR_6 || (VAR_9 == VAR_3) || (VAR_9 == VAR_5)) {
   for (VAR_8 = VAR_2; VAR_8 <= VAR_4; VAR_8++)
    FUNC_0(VAR_1, VAR_8, VAR_9, VAR_7);
  } else {
   FUNC_0(VAR_1, VAR_2, VAR_9, VAR_7);
   FUNC_0(VAR_1, VAR_4, VAR_9, VAR_7);
  }
 }
}
