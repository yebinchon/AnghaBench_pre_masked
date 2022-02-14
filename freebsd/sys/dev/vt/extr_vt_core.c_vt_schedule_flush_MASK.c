
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int vd_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct vt_device *VAR_2, int VAR_3)
{

 if (VAR_3 <= 0)

  VAR_3 = 1000 / VAR_0;

 FUNC_0(&VAR_2->vd_timer, VAR_1 / (1000 / VAR_3));
}
