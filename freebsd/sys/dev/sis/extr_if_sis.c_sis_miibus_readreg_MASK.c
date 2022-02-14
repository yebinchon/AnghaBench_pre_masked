
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_softc {scalar_t__ sis_type; scalar_t__ sis_rev; int sis_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct sis_softc*,scalar_t__) ;
 int FUNC_1 (struct sis_softc*,scalar_t__,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct sis_softc*,scalar_t__,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct sis_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int *,int,int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_10, int VAR_11, int VAR_12)
{
 struct sis_softc *VAR_13;

 VAR_13 = FUNC_4(VAR_10);

 if (VAR_13->sis_type == VAR_7) {
  if (VAR_11 != 0)
   return (0);
  if (!FUNC_0(VAR_13, VAR_1))
   FUNC_2(1000);
  return FUNC_0(VAR_13, VAR_0 + (VAR_12 * 4));
 }






 if (VAR_13->sis_type == VAR_8 &&
     VAR_13->sis_rev < VAR_5) {
  int VAR_14, VAR_15 = 0;

  if (VAR_11 != 0)
   return (0);

  FUNC_1(VAR_13, VAR_2,
      (VAR_11 << 11) | (VAR_12 << 6) | VAR_4);
  FUNC_3(VAR_13, VAR_2, VAR_3);

  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   if (!(FUNC_0(VAR_13, VAR_2) & VAR_3))
    break;
  }

  if (VAR_14 == VAR_6) {
   FUNC_5(VAR_13->sis_dev,
       "PHY failed to come ready\n");
   return (0);
  }

  VAR_15 = (FUNC_0(VAR_13, VAR_2) >> 16) & 0xFFFF;

  if (VAR_15 == 0xFFFF)
   return (0);

  return (VAR_15);
 } else
  return (FUNC_6(VAR_10, &VAR_9, VAR_11,
      VAR_12));
}
