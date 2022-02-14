
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_color_t ;
struct vt_device {int dummy; } ;


 int FUNC_0 (struct vt_device*,int,int,int ) ;

void
FUNC_1(struct vt_device *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
    term_color_t VAR_6)
{
 int VAR_7, VAR_8;

 for (VAR_8 = VAR_2; VAR_8 <= VAR_4; VAR_8++) {
  if (VAR_5 || (VAR_8 == VAR_2) || (VAR_8 == VAR_4)) {
   for (VAR_7 = VAR_1; VAR_7 <= VAR_3; VAR_7++)
    FUNC_0(VAR_0, VAR_7, VAR_8, VAR_6);
  } else {
   FUNC_0(VAR_0, VAR_1, VAR_8, VAR_6);
   FUNC_0(VAR_0, VAR_3, VAR_8, VAR_6);
  }
 }
}
