
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tda19988_softc {int sc_dev; int sc_cec_addr; } ;
struct iic_msg {int member_2; int * member_3; int member_1; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct iic_msg*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct tda19988_softc *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4[2];
 int VAR_5;
 struct iic_msg VAR_6[] = {
  { VAR_1->sc_cec_addr, &VAR_0, 2, VAR_4 },
 };

 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_3;

 VAR_5 = FUNC_0(VAR_1->sc_dev, VAR_6, 1);
 if (VAR_5)
  FUNC_1("tda19988_cec_write failed: %d\n", VAR_5);
 return (VAR_5);
}
