
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct xdmatest_softc* ich_arg; int ich_func; } ;
struct xdmatest_softc {TYPE_1__ config_intrhook; int dev; int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 struct xdmatest_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (struct xdmatest_softc*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct xdmatest_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->dev = VAR_2;

 FUNC_4(&VAR_3->mtx, FUNC_1(VAR_2), "xdmatest", VAR_0);


 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 != 0) {
  FUNC_3(VAR_3->dev, "Can't allocate test memory.\n");
  return (-1);
 }


 VAR_3->config_intrhook.ich_func = VAR_1;
 VAR_3->config_intrhook.ich_arg = VAR_3;
 if (FUNC_0(&VAR_3->config_intrhook) != 0)
  FUNC_3(VAR_2, "config_intrhook_establish failed\n");

 return (0);
}
