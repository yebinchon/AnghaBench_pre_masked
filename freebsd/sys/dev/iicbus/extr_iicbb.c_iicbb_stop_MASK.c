
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iicbb_softc*,int ,int,int) ;
 int VAR_0 ;
 struct iicbb_softc* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct iicbb_softc *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2,VAR_1,0,0);
 FUNC_2(VAR_2,VAR_1,1,0);
 FUNC_2(VAR_2,VAR_1,1,1);
 FUNC_0(FUNC_4(">"));
 FUNC_0(FUNC_4("\n"));


 if (!FUNC_1(VAR_1))
  return (VAR_0);
 return (0);
}
