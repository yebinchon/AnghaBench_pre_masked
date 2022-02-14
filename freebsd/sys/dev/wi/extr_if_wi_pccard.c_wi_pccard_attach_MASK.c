
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {int wi_bus_type; scalar_t__ wi_gone; } ;
typedef int device_t ;


 int FUNC_0 (struct wi_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wi_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct wi_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->wi_gone = 0;
 VAR_4->wi_bus_type = VAR_0;

 VAR_5 = FUNC_2(VAR_3, 0);
 if (VAR_5 == 0) {

  FUNC_0(VAR_4, VAR_2, 0);
  FUNC_0(VAR_4, VAR_1, 0xFFFF);

  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 != 0)
   FUNC_4(VAR_3);
 }
 return VAR_5;
}
