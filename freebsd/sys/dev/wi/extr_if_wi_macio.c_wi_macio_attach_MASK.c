
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {scalar_t__ wi_bus_type; scalar_t__ wi_gone; } ;
typedef int device_t ;


 int FUNC_0 (struct wi_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct wi_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct wi_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->wi_gone = 0;
 VAR_3->wi_bus_type = 0;

 VAR_4 = FUNC_4(VAR_2, 0);
 if (VAR_4 == 0) {
  FUNC_3(FUNC_1(VAR_2), 1);

  FUNC_0(VAR_3, VAR_1, 0);
  FUNC_0(VAR_3, VAR_0, 0xFFFF);

  VAR_4 = FUNC_5(VAR_2);
  if (VAR_4 != 0)
   FUNC_6(VAR_2);
 }
 return VAR_4;
}
