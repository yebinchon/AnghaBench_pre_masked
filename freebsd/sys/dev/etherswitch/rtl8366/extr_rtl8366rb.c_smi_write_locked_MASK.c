
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtl8366rb_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8366rb_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int*,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct rtl8366rb_softc *VAR_2, uint16_t VAR_3, uint16_t VAR_4, int VAR_5)
{
 int VAR_6;
 device_t VAR_7;
 char VAR_8[4];
 int VAR_9;

 VAR_7 = FUNC_1(VAR_2->dev);

 FUNC_0(VAR_2);
 VAR_8[0] = VAR_3 & 0xff;
 VAR_8[1] = (VAR_3 >> 8) & 0xff;
 VAR_8[2] = VAR_4 & 0xff;
 VAR_8[3] = (VAR_4 >> 8) & 0xff;

 VAR_6 = FUNC_4(VAR_2->dev, VAR_1, VAR_5);
 if (VAR_6 == 0)
  VAR_6 = FUNC_3(VAR_7, VAR_8, 4, &VAR_9, VAR_0);
 FUNC_2(VAR_7);

 return (VAR_6);
}
