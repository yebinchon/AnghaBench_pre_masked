
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct jme_softc {int jme_eaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_2 (struct jme_softc*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct jme_softc *VAR_12)
{
 uint8_t VAR_13[VAR_1];
 uint8_t VAR_14, VAR_15, VAR_16;
 uint32_t VAR_17;
 int VAR_18;

 VAR_17 = 0;
 if (FUNC_2(VAR_12, VAR_17++, &VAR_14) != 0 ||
     VAR_14 != VAR_9)
  return (VAR_0);
 if (FUNC_2(VAR_12, VAR_17++, &VAR_14) != 0 ||
     VAR_14 != VAR_10)
  return (VAR_0);
 VAR_18 = 0;
 do {
  if (FUNC_2(VAR_12, VAR_17, &VAR_14) != 0)
   break;
  if (FUNC_0(VAR_5, VAR_7) ==
      (VAR_14 & (VAR_6 | VAR_8))) {
   if (FUNC_2(VAR_12, VAR_17 + 1, &VAR_15) != 0)
    break;
   if (VAR_15 >= VAR_11 &&
       VAR_15 < VAR_11 + VAR_1) {
    if (FUNC_2(VAR_12, VAR_17 + 2,
        &VAR_16) != 0)
     break;
    VAR_13[VAR_15 - VAR_11] = VAR_16;
    VAR_18++;
   }
  }

  if ((VAR_14 & VAR_3) == VAR_3)
   break;

  VAR_17 += VAR_2;
 } while (VAR_18 != VAR_1 && VAR_17 < VAR_4);

 if (VAR_18 == VAR_1) {
  FUNC_1(VAR_13, VAR_12->jme_eaddr, VAR_1);
  return (0);
 }

 return (VAR_0);
}
