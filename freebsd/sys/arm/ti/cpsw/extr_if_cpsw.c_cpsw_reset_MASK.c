
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int callout; } ;
struct cpsw_softc {TYPE_1__ watchdog; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct cpsw_softc*,int ) ;
 int FUNC_11 (struct cpsw_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_12(struct cpsw_softc *VAR_7)
{
 int VAR_8;

 FUNC_9(&VAR_7->watchdog.callout);


 FUNC_11(VAR_7, VAR_6, 1);
 while (FUNC_10(VAR_7, VAR_6) & 1)
  ;


 for (VAR_8 = 0; VAR_8 < 3; ++VAR_8) {
  FUNC_11(VAR_7, FUNC_7(VAR_8), 0x00);
  FUNC_11(VAR_7, FUNC_8(VAR_8), 0x00);
  FUNC_11(VAR_7, FUNC_6(VAR_8), 0x00);
  FUNC_11(VAR_7, FUNC_5(VAR_8), 0x00);
 }


 FUNC_11(VAR_7, VAR_5, 1);
 while (FUNC_10(VAR_7, VAR_5) & 1)
  ;


 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {

  FUNC_11(VAR_7, FUNC_4(VAR_8), 1);
  while (FUNC_10(VAR_7, FUNC_4(VAR_8)) & 1)
   ;
 }


 FUNC_11(VAR_7, VAR_2, 1);
 while (FUNC_10(VAR_7, VAR_2) & 1)
  ;


 FUNC_11(VAR_7, VAR_3, 0);
 FUNC_11(VAR_7, VAR_0, 0);


 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  FUNC_11(VAR_7, FUNC_3(VAR_8), 0);
  FUNC_11(VAR_7, FUNC_1(VAR_8), 0);
  FUNC_11(VAR_7, FUNC_2(VAR_8), 0);
  FUNC_11(VAR_7, FUNC_0(VAR_8), 0);
 }


 FUNC_11(VAR_7, VAR_1, 0xFFFFFFFF);
 FUNC_11(VAR_7, VAR_4, 0xFFFFFFFF);
}
