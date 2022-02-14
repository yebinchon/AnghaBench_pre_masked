
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct twl_softc {int sc_dev; } ;
struct iic_msg {int len; int * buf; int flags; int slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct iic_msg*,int) ;

__attribute__((used)) static int
FUNC_1(struct twl_softc *VAR_2, uint8_t VAR_3)
{
 struct iic_msg VAR_4;
 uint8_t VAR_5;


 VAR_4.slave = VAR_3;
 VAR_4.flags = VAR_1;
 VAR_4.len = 1;
 VAR_4.buf = &VAR_5;

 if (FUNC_0(VAR_2->sc_dev, &VAR_4, 1) != 0)
  return (VAR_0);

 return (0);
}
