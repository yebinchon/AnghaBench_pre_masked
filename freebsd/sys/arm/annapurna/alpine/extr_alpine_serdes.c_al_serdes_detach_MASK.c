
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct al_serdes_softc {int res; } ;
typedef int device_t ;
struct TYPE_3__ {int mode_set; int lock; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 struct al_serdes_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct al_serdes_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_0, &VAR_3->res);

 for (int VAR_4 = 0; VAR_4 < FUNC_3(VAR_1); VAR_4++) {
  FUNC_2(&VAR_1[VAR_4].lock);
  VAR_1[VAR_4].mode_set = 0;
 }

 return (0);
}
