
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct iicbus_softc {int bus_freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct iicbus_softc* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,int,int*,int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,char*,int*) ;

void
FUNC_8(device_t VAR_3, u_int VAR_4)
{
 struct iicbus_softc *VAR_5 = FUNC_0(VAR_3);






 if (VAR_4 > 0)
  VAR_5->bus_freq = VAR_4;
 else {
  VAR_5->bus_freq = 100000;
  FUNC_7(FUNC_3(VAR_3), FUNC_6(VAR_3),
      "frequency", (int *)&VAR_5->bus_freq);
 }







 FUNC_1(FUNC_4(VAR_3),
     FUNC_2(FUNC_5(VAR_3)),
     VAR_2, "frequency", VAR_0 | VAR_1, &VAR_5->bus_freq,
     VAR_5->bus_freq, "Bus frequency in Hz");
}
