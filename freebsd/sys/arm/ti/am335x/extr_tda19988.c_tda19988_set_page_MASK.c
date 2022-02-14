
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tda19988_softc {int sc_current_page; int sc_dev; int sc_addr; } ;
struct iic_msg {int member_2; int * member_3; int member_1; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct iic_msg*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct tda19988_softc *VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4 = VAR_1;
 uint8_t VAR_5[2];
 int VAR_6;
 struct iic_msg VAR_7[] = {
  { VAR_2->sc_addr, &VAR_0, 2, VAR_5 },
 };

 VAR_5[0] = VAR_4;
 VAR_5[1] = VAR_3;

 VAR_6 = (FUNC_0(VAR_2->sc_dev, VAR_7, 1));
 if (VAR_6)
  FUNC_1("tda19988_set_page failed: %d\n", VAR_6);
 else
  VAR_2->sc_current_page = VAR_3;

 return (VAR_6);
}
