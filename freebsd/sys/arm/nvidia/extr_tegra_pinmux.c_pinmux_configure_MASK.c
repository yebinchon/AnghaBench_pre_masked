
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_softc {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct pinmux_softc* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct pinmux_softc*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(device_t VAR_0, phandle_t VAR_1)
{
 struct pinmux_softc *VAR_2;
 phandle_t VAR_3, VAR_4;
 int VAR_5;

 VAR_2 = FUNC_3(VAR_0);
 VAR_4 = FUNC_1(VAR_1);


 for (VAR_3 = FUNC_0(VAR_4); VAR_3 != 0; VAR_3 = FUNC_2(VAR_3)) {
  if (!FUNC_4(VAR_3))
   continue;
  VAR_5 = FUNC_5(VAR_2, VAR_3);
 }
 return (0);
}
