
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ip17x_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ip17x_softc *VAR_4)
{
 uint32_t VAR_5;


 if (FUNC_2(VAR_4->sc_dev, VAR_2, VAR_3,
     0x175c))
  return (-1);
 FUNC_0(2000);


 VAR_5 = FUNC_1(VAR_4->sc_dev, VAR_0, VAR_1);
 if (VAR_5 == 0x175a) {
  if (FUNC_2(VAR_4->sc_dev, VAR_0, VAR_1,
      0x175c))
  return (-1);
 }

 return (0);
}
