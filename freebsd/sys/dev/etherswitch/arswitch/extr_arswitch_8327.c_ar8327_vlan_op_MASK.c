
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct arswitch_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct arswitch_softc *VAR_7, uint32_t VAR_8, uint32_t VAR_9,
    uint32_t VAR_10)
{
 int VAR_11;




 if (FUNC_0(VAR_7->sc_dev, VAR_1,
     VAR_2, 0, 5))
  return (VAR_6);





 if ((VAR_8 & VAR_3) == VAR_4) {
  VAR_11 = FUNC_1(VAR_7->sc_dev, VAR_0, VAR_10);
  if (VAR_11)
   return (VAR_11);
 }




 VAR_8 |= ((VAR_9 & 0xfff) << VAR_5);




 VAR_8 |= VAR_2;
 FUNC_1(VAR_7->sc_dev, VAR_1, VAR_8);




 if (FUNC_0(VAR_7->sc_dev, VAR_1,
     VAR_2, 0, 5))
  return (VAR_6);

 return (0);
}
