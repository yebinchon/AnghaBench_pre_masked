
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_softc {scalar_t__ sis_type; scalar_t__ sis_rev; int sis_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct sis_softc*,scalar_t__) ;
 int FUNC_1 (struct sis_softc*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct sis_softc*,scalar_t__,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sis_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *,int,int,int) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct sis_softc *VAR_13;

 VAR_13 = FUNC_3(VAR_9);

 if (VAR_13->sis_type == VAR_6) {
  if (VAR_10 != 0)
   return (0);
  FUNC_1(VAR_13, VAR_0 + (VAR_11 * 4), VAR_12);
  return (0);
 }






 if (VAR_13->sis_type == VAR_7 &&
     VAR_13->sis_rev < VAR_4) {
  int VAR_14;

  if (VAR_10 != 0)
   return (0);

  FUNC_1(VAR_13, VAR_1, (VAR_12 << 16) | (VAR_10 << 11) |
      (VAR_11 << 6) | VAR_3);
  FUNC_2(VAR_13, VAR_1, VAR_2);

  for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
   if (!(FUNC_0(VAR_13, VAR_1) & VAR_2))
    break;
  }

  if (VAR_14 == VAR_5)
   FUNC_4(VAR_13->sis_dev,
       "PHY failed to come ready\n");
 } else
  FUNC_5(VAR_9, &VAR_8, VAR_10, VAR_11,
      VAR_12);
 return (0);
}
