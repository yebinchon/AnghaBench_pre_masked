
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vx_core*,struct firmware const*) ;
 int FUNC_2 (struct vx_core*,struct firmware const*) ;
 int FUNC_3 (struct vx_core*,struct firmware const*) ;
 int FUNC_4 (struct vx_core*) ;
 int FUNC_5 (struct vx_core*,struct firmware const*) ;

__attribute__((used)) static int FUNC_6(struct vx_core *VAR_1, int VAR_2, const struct firmware *VAR_3)
{
 int VAR_4;

 switch (VAR_2) {
 case 0:

  if ((VAR_4 = FUNC_4(VAR_1)) < 0)
   return VAR_4;
  if ((VAR_4 = FUNC_3(VAR_1, VAR_3)) < 0)
   return VAR_4;
  return 0;
 case 1:

  return FUNC_5(VAR_1, VAR_3);
 case 2:

  return FUNC_1(VAR_1, VAR_3);
 case 3:

  return FUNC_2(VAR_1, VAR_3);
 default:
  FUNC_0();
  return -VAR_0;
 }
}
