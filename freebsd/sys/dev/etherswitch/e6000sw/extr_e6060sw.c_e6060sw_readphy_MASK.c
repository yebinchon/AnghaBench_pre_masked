
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e6060sw_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct e6060sw_softc*) ;
 int FUNC_1 (struct e6060sw_softc*,int ) ;
 int FUNC_2 (struct e6060sw_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 struct e6060sw_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, int VAR_3, int VAR_4)
{
 struct e6060sw_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_2);
 FUNC_1(VAR_5, VAR_1);

 if (VAR_3 < 0 || VAR_3 >= 32)
  return (VAR_0);
 if (VAR_4 < 0 || VAR_4 >= 32)
  return (VAR_0);

 FUNC_0(VAR_5);
 VAR_6 = FUNC_3(FUNC_4(VAR_2), VAR_3, VAR_4);
 FUNC_2(VAR_5);

 return (VAR_6);
}
