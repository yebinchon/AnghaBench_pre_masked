
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pad_softc {int dummy; } ;
struct gpio_pin {unsigned int gp_flags; int gp_pin; } ;
struct gpio_bank {int con; int port; } ;


 int FUNC_0 (struct pad_softc*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct pad_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct pad_softc*,int ,int) ;
 int FUNC_3 (struct pad_softc*,int ,int,int) ;
 scalar_t__ FUNC_4 (struct pad_softc*,int ,struct gpio_bank*,int*) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct pad_softc *VAR_3, struct gpio_pin *VAR_4,
    unsigned int VAR_5)
{
 struct gpio_bank VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_3);




 if (VAR_5 & (VAR_0|VAR_1)) {
  VAR_4->gp_flags &= ~(VAR_0|VAR_1);

  if (FUNC_4(VAR_3, VAR_4->gp_pin, &VAR_6, &VAR_7) != 0)
   return;

  VAR_7 *= 4;





  if (VAR_5 & VAR_1) {
   VAR_4->gp_flags |= VAR_1;
   VAR_8 = FUNC_2(VAR_3, VAR_6.port, VAR_6.con);
   VAR_8 &= ~(0xf << VAR_7);
   VAR_8 |= (VAR_2 << VAR_7);
   FUNC_3(VAR_3, VAR_6.port, VAR_6.con, VAR_8);
  } else {
   VAR_4->gp_flags |= VAR_0;
   VAR_8 = FUNC_2(VAR_3, VAR_6.port, VAR_6.con);
   VAR_8 &= ~(0xf << VAR_7);
   FUNC_3(VAR_3, VAR_6.port, VAR_6.con, VAR_8);
  }
 }

 FUNC_1(VAR_3);
}
