
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390rtc_softc {int sc_addr; int sc_dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 struct s390rtc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct s390rtc_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->sc_dev = VAR_1;
 VAR_2->sc_addr = FUNC_2(VAR_1);

 FUNC_0(VAR_0, VAR_1);

 return (0);
}
