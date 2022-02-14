
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sy8106a_softc {int addr; } ;
struct iic_msg {int len; int* buf; int flags; int slave; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sy8106a_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iic_msg*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint8_t VAR_3, uint8_t *VAR_4, uint8_t VAR_5)
{
 struct sy8106a_softc *VAR_6;
 struct iic_msg VAR_7[2];

 VAR_6 = FUNC_0(VAR_2);

 VAR_7[0].slave = VAR_6->addr;
 VAR_7[0].flags = VAR_1;
 VAR_7[0].len = 1;
 VAR_7[0].buf = &VAR_3;

 VAR_7[1].slave = VAR_6->addr;
 VAR_7[1].flags = VAR_0;
 VAR_7[1].len = VAR_5;
 VAR_7[1].buf = VAR_4;

 return (FUNC_1(VAR_2, VAR_7, 2));
}
