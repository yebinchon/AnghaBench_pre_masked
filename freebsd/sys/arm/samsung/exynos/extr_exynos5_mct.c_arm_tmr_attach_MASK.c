
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_tmr_softc {int bsh; int bst; int * tmr_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 () ;
 struct arm_tmr_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct arm_tmr_softc *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_5);

 if (FUNC_0(VAR_5, VAR_4, VAR_6->tmr_res)) {
  FUNC_5(VAR_5, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_6->bst = FUNC_8(VAR_6->tmr_res[0]);
 VAR_6->bsh = FUNC_7(VAR_6->tmr_res[0]);

 VAR_7 = FUNC_1(VAR_6->bst, VAR_6->bsh, VAR_1);
 VAR_7 |= VAR_2;
 FUNC_2(VAR_6->bst, VAR_6->bsh, VAR_1, VAR_7);

 VAR_9 = (1 << 16);


 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  VAR_7 = FUNC_1(VAR_6->bst, VAR_6->bsh, VAR_3);
  if (VAR_7 & VAR_9) {
   FUNC_2(VAR_6->bst, VAR_6->bsh,
       VAR_3, VAR_9);
   return (0);
  }
  FUNC_3();
 }



 FUNC_6("Can't enable timer\n");
}
