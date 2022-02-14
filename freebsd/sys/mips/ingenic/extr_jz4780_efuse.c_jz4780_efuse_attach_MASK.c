
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_efuse_softc {int res; int data; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct jz4780_efuse_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct jz4780_efuse_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct jz4780_efuse_softc*,int,int *,int) ;
 int VAR_2 ;
 int FUNC_6 (struct jz4780_efuse_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct jz4780_efuse_softc *VAR_4;

  VAR_4 = FUNC_3(VAR_3);
 VAR_4->dev = VAR_3;

 if (FUNC_1(VAR_3, VAR_2, VAR_4->res)) {
  FUNC_4(VAR_3, "could not allocate resources for device\n");
  return (VAR_0);
 }





 FUNC_0(VAR_4, VAR_1, 0x00040000);


 FUNC_5(VAR_4, 0x18, &VAR_4->data, sizeof(VAR_4->data));





 FUNC_6(VAR_4);


 FUNC_2(VAR_3, VAR_2, VAR_4->res);
 return (0);
}
