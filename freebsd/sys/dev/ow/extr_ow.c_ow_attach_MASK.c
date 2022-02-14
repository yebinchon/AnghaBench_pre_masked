
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_softc {int dev; int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ow_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct ow_softc *VAR_4;
 VAR_4 = FUNC_2(VAR_3);
 VAR_4->dev = VAR_3;
 FUNC_3(&VAR_4->mtx, FUNC_1(VAR_4->dev), "ow", VAR_0);
 FUNC_4(VAR_3, VAR_2, VAR_1);
 return FUNC_0(VAR_3);
}
