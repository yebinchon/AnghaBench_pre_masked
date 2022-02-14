
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {scalar_t__ cardok; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cbb_softc*,int ,int ) ;
 struct cbb_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 int VAR_2 = 0;
 struct cbb_softc *VAR_3 = FUNC_2(VAR_1);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 0)
  return (VAR_2);
 FUNC_1(VAR_3, VAR_0, 0);
 VAR_3->cardok = 0;
 return (0);
}
