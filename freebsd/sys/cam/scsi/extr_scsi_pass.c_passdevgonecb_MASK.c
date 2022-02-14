
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pass_softc {int open_count; int shutdown_kqueue_task; } ;
struct mtx {int dummy; } ;
struct cam_periph {scalar_t__ softc; } ;


 int FUNC_0 (int,char*) ;
 struct mtx* FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;
 int FUNC_5 (struct cam_periph*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct cam_periph *VAR_2;
 struct mtx *VAR_3;
 struct pass_softc *VAR_4;
 int VAR_5;

 VAR_2 = (struct cam_periph *)VAR_1;
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(VAR_3);

 VAR_4 = (struct pass_softc *)VAR_2->softc;
 FUNC_0(VAR_4->open_count >= 0, ("Negative open count %d",
  VAR_4->open_count));






 for (VAR_5 = 0; VAR_5 < VAR_4->open_count; VAR_5++)
  FUNC_2(VAR_2);

 VAR_4->open_count = 0;





 FUNC_2(VAR_2);
 FUNC_5(VAR_2);
 FUNC_4(VAR_3);






 FUNC_6(VAR_0, &VAR_4->shutdown_kqueue_task);
}
