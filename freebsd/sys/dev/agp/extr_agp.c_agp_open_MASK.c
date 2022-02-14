
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int si_drv1; } ;
struct agp_softc {int as_isopen; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct agp_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 device_t VAR_4 = VAR_0->si_drv1;
 struct agp_softc *VAR_5 = FUNC_1(VAR_4);

 if (!VAR_5->as_isopen) {
  VAR_5->as_isopen = 1;
  FUNC_0(VAR_4);
 }

 return 0;
}
