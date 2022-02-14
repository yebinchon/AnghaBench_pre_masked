
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sy8106a_softc {int addr; } ;
struct iic_msg {int len; int * buf; int flags; int slave; } ;
typedef int device_t ;


 int VAR_0 ;
 struct sy8106a_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iic_msg*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 struct sy8106a_softc *VAR_4;
 struct iic_msg VAR_5;
 uint8_t VAR_6[2];

 VAR_4 = FUNC_0(VAR_1);

 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_3;

 VAR_5.slave = VAR_4->addr;
 VAR_5.flags = VAR_0;
 VAR_5.len = 2;
 VAR_5.buf = VAR_6;

 return (FUNC_1(VAR_1, &VAR_5, 1));
}
