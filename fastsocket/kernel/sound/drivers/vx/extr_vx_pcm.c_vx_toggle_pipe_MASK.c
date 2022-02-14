
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int dummy; } ;
struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vx_core*,struct vx_pipe*) ;
 int FUNC_2 (struct vx_core*,struct vx_pipe*,int*) ;
 int FUNC_3 (struct vx_core*,struct vx_pipe*) ;
 int FUNC_4 (struct vx_core*) ;

__attribute__((used)) static int FUNC_5(struct vx_core *VAR_3, struct vx_pipe *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;


 if (FUNC_2(VAR_3, VAR_4, &VAR_8) < 0)
  return -VAR_0;
 if (VAR_5 == VAR_8)
  return 0;





 if (VAR_5) {
  for (VAR_7 = 0 ; VAR_7 < VAR_2; VAR_7++) {
   VAR_6 = FUNC_3(VAR_3, VAR_4);
   if (VAR_6 > 0)
    break;



   FUNC_0(1);
  }
 }

 if ((VAR_6 = FUNC_1(VAR_3, VAR_4)) < 0)
  return VAR_6;

 if ((VAR_6 = FUNC_4(VAR_3)) < 0)
  return VAR_6;





 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = FUNC_2(VAR_3, VAR_4, &VAR_8);
  if (VAR_6 < 0 || VAR_8 == VAR_5)
   break;
  VAR_6 = -VAR_1;
  FUNC_0(1);
 }
 return VAR_6 < 0 ? -VAR_1 : 0;
}
