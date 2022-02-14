
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_msg {int len; int * buf; void* flags; int slave; } ;
struct axp8xx_softc {int addr; } ;
typedef int device_t ;


 void* VAR_0 ;
 struct axp8xx_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iic_msg*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 struct axp8xx_softc *VAR_4;
 struct iic_msg VAR_5[2];

 VAR_4 = FUNC_0(VAR_1);

 VAR_5[0].slave = VAR_4->addr;
 VAR_5[0].flags = VAR_0;
 VAR_5[0].len = 1;
 VAR_5[0].buf = &VAR_2;

 VAR_5[1].slave = VAR_4->addr;
 VAR_5[1].flags = VAR_0;
 VAR_5[1].len = 1;
 VAR_5[1].buf = &VAR_3;

 return (FUNC_1(VAR_1, VAR_5, 2));
}
