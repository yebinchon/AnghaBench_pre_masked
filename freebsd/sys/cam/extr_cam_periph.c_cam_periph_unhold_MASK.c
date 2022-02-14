
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_periph {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cam_periph*,int ) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;

void
FUNC_3(struct cam_periph *VAR_3)
{

 FUNC_0(VAR_3, VAR_2);

 VAR_3->flags &= ~VAR_0;
 if ((VAR_3->flags & VAR_1) != 0) {
  VAR_3->flags &= ~VAR_1;
  FUNC_2(VAR_3);
 }

 FUNC_1(VAR_3);
}
