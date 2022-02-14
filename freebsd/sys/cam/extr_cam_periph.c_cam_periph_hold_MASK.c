
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_periph {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*,struct cam_periph*,int,char*,int ) ;

int
FUNC_4(struct cam_periph *VAR_5, int VAR_6)
{
 int VAR_7;
 if (FUNC_0(VAR_5) != 0)
  return (VAR_3);

 FUNC_1(VAR_5, VAR_4);
 while ((VAR_5->flags & VAR_1) != 0) {
  VAR_5->flags |= VAR_2;
  if ((VAR_7 = FUNC_3(VAR_5, VAR_5, VAR_6,
      "caplck", 0)) != 0) {
   FUNC_2(VAR_5);
   return (VAR_7);
  }
  if (VAR_5->flags & VAR_0) {
   FUNC_2(VAR_5);
   return (VAR_3);
  }
 }

 VAR_5->flags |= VAR_1;
 return (0);
}
