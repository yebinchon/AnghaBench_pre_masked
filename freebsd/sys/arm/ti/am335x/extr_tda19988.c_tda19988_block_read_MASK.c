
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct tda19988_softc {scalar_t__ sc_current_page; int sc_dev; int sc_addr; } ;
struct iic_msg {int member_2; int * member_3; int member_1; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,struct iic_msg*,int) ;
 int FUNC_4 (struct tda19988_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct tda19988_softc *VAR_2, uint16_t VAR_3, uint8_t *VAR_4, int VAR_5)
{
 uint8_t VAR_6;
 int VAR_7;
 struct iic_msg VAR_8[] = {
  { VAR_2->sc_addr, &VAR_1, 1, VAR_6 },
  { VAR_2->sc_addr, &VAR_0, VAR_5, *VAR_4 },
 };

 VAR_6 = FUNC_0(VAR_3);

 if (VAR_2->sc_current_page != FUNC_1(VAR_3))
  FUNC_4(VAR_2, FUNC_1(VAR_3));

 VAR_7 = (FUNC_3(VAR_2->sc_dev, VAR_8, 2));
 if (VAR_7)
  FUNC_2(VAR_2->sc_dev, "tda19988_block_read failed: %d\n", VAR_7);
 return (VAR_7);
}
