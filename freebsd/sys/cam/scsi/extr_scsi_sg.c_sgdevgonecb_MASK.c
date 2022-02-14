
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_softc {int open_count; } ;
struct mtx {int dummy; } ;
struct cam_periph {scalar_t__ softc; } ;


 int FUNC_0 (int,char*) ;
 struct mtx* FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct cam_periph *VAR_1;
 struct sg_softc *VAR_2;
 struct mtx *VAR_3;
 int VAR_4;

 VAR_1 = (struct cam_periph *)VAR_0;
 VAR_3 = FUNC_1(VAR_1);
 FUNC_3(VAR_3);

 VAR_2 = (struct sg_softc *)VAR_1->softc;
 FUNC_0(VAR_2->open_count >= 0, ("Negative open count %d",
  VAR_2->open_count));






 for (VAR_4 = 0; VAR_4 < VAR_2->open_count; VAR_4++)
  FUNC_2(VAR_1);

 VAR_2->open_count = 0;




 FUNC_2(VAR_1);
 FUNC_4(VAR_3);
}
