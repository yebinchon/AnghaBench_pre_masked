
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_softc {int dev; int flags; } ;
struct cam_periph {int path; scalar_t__ softc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct cam_periph*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_2(struct cam_periph *VAR_3)
{
 struct sg_softc *VAR_4;

 VAR_4 = (struct sg_softc *)VAR_3->softc;




 FUNC_1(0, VAR_1, VAR_3, VAR_3->path);

 VAR_4->flags |= VAR_0;





 FUNC_0(VAR_4->dev, VAR_2, VAR_3);







}
