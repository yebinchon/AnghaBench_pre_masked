
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct dc_softc*,int ,int) ;
 struct dc_softc* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_10, int VAR_11)
{
 struct dc_softc *VAR_12;

 VAR_12 = FUNC_8(VAR_10);


 FUNC_7(VAR_12, VAR_2, FUNC_6(1));
 FUNC_7(VAR_12, VAR_0,
     FUNC_1(VAR_5) | FUNC_0(VAR_9));

 FUNC_7(VAR_12, VAR_1, VAR_6);
 FUNC_7(VAR_12, VAR_3,
     FUNC_3(VAR_8) | FUNC_2(VAR_7));

 FUNC_7(VAR_12, VAR_4,
     FUNC_5(VAR_11) | FUNC_4(VAR_11 + 8));
}
