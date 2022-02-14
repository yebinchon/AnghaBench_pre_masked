
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic_softc {int res; int xchan; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct aic_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct aic_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_2->xchan);

 FUNC_0(VAR_1, VAR_0, VAR_2->res);

 return (0);
}
