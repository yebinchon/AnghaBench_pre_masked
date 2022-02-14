
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct funnel_softc {int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct funnel_softc* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct funnel_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_3);


 FUNC_1(VAR_4->res, VAR_0, VAR_1);

 FUNC_3("Device ID: %x\n", FUNC_0(VAR_4->res, VAR_2));

 return (0);
}
