
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct ch_softc {int open_count; } ;
struct cam_periph {scalar_t__ softc; } ;


 int FUNC_0 (int,char*) ;
 struct mtx* FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct ch_softc *VAR_1;
 struct cam_periph *VAR_2;
 struct mtx *VAR_3;
 int VAR_4;

 VAR_2 = (struct cam_periph *)VAR_0;
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(VAR_3);

 VAR_1 = (struct ch_softc *)VAR_2->softc;
 FUNC_0(VAR_1->open_count >= 0, ("Negative open count %d",
  VAR_1->open_count));






 for (VAR_4 = 0; VAR_4 < VAR_1->open_count; VAR_4++)
  FUNC_2(VAR_2);

 VAR_1->open_count = 0;




 FUNC_2(VAR_2);
 FUNC_4(VAR_3);
}
