
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct onyx_softc {int sc_dev; int sc_addr; } ;
struct iic_msg {int len; int * member_3; int member_2; int member_1; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct iic_msg*,int) ;

__attribute__((used)) static int
FUNC_1(struct onyx_softc *VAR_1, uint8_t VAR_2, const uint8_t VAR_3)
{
 u_int VAR_4;
 uint8_t VAR_5[16];

 struct iic_msg VAR_6[] = {
  { VAR_1->sc_addr, &VAR_0, 0, VAR_5 }
 };

 VAR_4 = 1;
 VAR_6[0].len = VAR_4 + 1;
 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;

 FUNC_0(VAR_1->sc_dev, VAR_6, 1);

 return (0);
}
