
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip17x_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ip17x_softc*) ;
 int FUNC_1 (struct ip17x_softc*,int ) ;
 int FUNC_2 (struct ip17x_softc*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ) ;
 struct ip17x_softc* FUNC_5 (int ) ;

int
FUNC_6(device_t VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct ip17x_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_2);
 FUNC_1(VAR_6, VAR_1);

 if (VAR_3 < 0 || VAR_3 >= 32)
  return (VAR_0);
 if (VAR_4 < 0 || VAR_4 >= 32)
  return (VAR_0);

 FUNC_0(VAR_6);
 VAR_7 = FUNC_3(FUNC_4(VAR_2), VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_6);

 return (VAR_7);
}
