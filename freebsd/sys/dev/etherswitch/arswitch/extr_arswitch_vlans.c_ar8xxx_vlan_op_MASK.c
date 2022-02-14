
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
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct arswitch_softc *VAR_9, uint32_t VAR_10, uint32_t VAR_11,
 uint32_t VAR_12)
{
 int VAR_13;

 if (FUNC_0(VAR_9->sc_dev, VAR_0,
     VAR_2, 0, 5))
  return (VAR_7);


 if (VAR_10 == VAR_4) {
  VAR_13 = FUNC_1(VAR_9->sc_dev, VAR_1,
      (VAR_12 & VAR_3) | VAR_5);
  if (VAR_13)
   return (VAR_13);
 }

 if (VAR_11 != 0)
  VAR_10 |= ((VAR_11 & VAR_8) << VAR_6);
 VAR_10 |= VAR_2;
 FUNC_1(VAR_9->sc_dev, VAR_0, VAR_10);


 if (FUNC_0(VAR_9->sc_dev, VAR_0,
     VAR_2, 0, 5))
  return (VAR_7);

 return (0);
}
