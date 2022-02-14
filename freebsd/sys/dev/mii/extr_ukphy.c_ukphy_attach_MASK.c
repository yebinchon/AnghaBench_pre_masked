
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 struct mii_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (struct mii_softc*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct mii_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2, VAR_0, &VAR_1, 1);
 FUNC_2(VAR_3);

 return (0);
}
