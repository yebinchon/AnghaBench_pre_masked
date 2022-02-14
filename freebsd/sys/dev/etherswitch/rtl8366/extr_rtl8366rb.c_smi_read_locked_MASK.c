
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtl8366rb_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl8366rb_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int*,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct rtl8366rb_softc *VAR_3, uint16_t VAR_4, uint16_t *VAR_5, int VAR_6)
{
 int VAR_7;
 device_t VAR_8;
 char VAR_9[2];
 int VAR_10;

 VAR_8 = FUNC_1(VAR_3->dev);

 FUNC_0(VAR_3);
 VAR_9[0] = VAR_4 & 0xff;
 VAR_9[1] = (VAR_4 >> 8) & 0xff;
 VAR_7 = FUNC_5(VAR_3->dev, VAR_1, VAR_6);
 if (VAR_7 != 0)
  goto out;
 VAR_7 = FUNC_4(VAR_8, VAR_9, 2, &VAR_10, VAR_2);
 if (VAR_7 != 0)
  goto out;
 VAR_7 = FUNC_2(VAR_8, VAR_9, 2, &VAR_10, VAR_0, 0);
 if (VAR_7 != 0)
  goto out;
 *VAR_5 = ((VAR_9[1] & 0xff) << 8) | (VAR_9[0] & 0xff);

out:
 FUNC_3(VAR_8);
 return (VAR_7);
}
