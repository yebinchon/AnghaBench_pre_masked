
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gt_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct gt_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct gt_softc *VAR_1 = FUNC_3(VAR_0);
 VAR_1->dev = VAR_0;

 FUNC_2(VAR_0, "pcib", 0);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);


 return (0);
}
