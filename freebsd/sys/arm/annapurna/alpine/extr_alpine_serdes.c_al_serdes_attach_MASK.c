
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct al_serdes_softc {int res; } ;
typedef int device_t ;
struct TYPE_3__ {int mode_set; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 struct al_serdes_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 void* VAR_3 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct al_serdes_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4);

 VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_5->res);
 if (VAR_6 != 0) {
  FUNC_2(VAR_4, "could not allocate resources\n");
  return (VAR_6);
 }


 for (int VAR_7 = 0; VAR_7 < FUNC_4(VAR_2); VAR_7++) {
  FUNC_3(&VAR_2[VAR_7].lock, "AlSerdesMtx",
      ((void*)0), VAR_0);
  VAR_2[VAR_7].mode_set = 0;
 }

 VAR_3 = (void *)FUNC_5(VAR_5->res);

 return (0);
}
