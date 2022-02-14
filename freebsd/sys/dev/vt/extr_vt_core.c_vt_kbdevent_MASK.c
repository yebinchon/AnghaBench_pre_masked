
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int vd_keyboard; } ;
typedef int keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct vt_device*,int) ;

__attribute__((used)) static int
FUNC_5(keyboard_t *VAR_3, int VAR_4, void *VAR_5)
{
 struct vt_device *VAR_6 = VAR_5;
 int VAR_7;

 switch (VAR_4) {
 case 129:
  break;
 case 128:
  FUNC_2(&VAR_1);
  VAR_6->vd_keyboard = -1;
  FUNC_0(VAR_3, (void *)VAR_6);
  FUNC_3(&VAR_1);
  return (0);
 default:
  return (VAR_0);
 }

 while ((VAR_7 = FUNC_1(VAR_3, 0)) != VAR_2)
  FUNC_4(VAR_3, VAR_6, VAR_7);

 return (0);
}
