
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static elink_status_t FUNC_4(struct elink_phy *VAR_11,
        struct elink_params *VAR_12,
        uint16_t VAR_13,
        uint16_t VAR_14[], int VAR_15)
{
 int VAR_16;
 uint16_t VAR_17;
 struct bxe_softc *VAR_18 = VAR_12->sc;
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  FUNC_2(VAR_18, VAR_11, VAR_5,
    VAR_4, &VAR_17);
  if ((VAR_17 != VAR_8) &&
      (VAR_17 != VAR_9))
   break;
  FUNC_0(1000 * 1);
 }
 if (VAR_16 >= VAR_10) {
  FUNC_1(VAR_18, "FW cmd: FW not ready.\n");
  return VAR_0;
 }





 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  FUNC_3(VAR_18, VAR_11, VAR_5,
     VAR_3 + VAR_16,
     VAR_14[VAR_16]);
 }




 FUNC_3(VAR_18, VAR_11, VAR_5,
    VAR_2, VAR_13);






 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  FUNC_2(VAR_18, VAR_11, VAR_5,
    VAR_4, &VAR_17);
  if ((VAR_17 == VAR_7) ||
      (VAR_17 == VAR_6))
   break;
  FUNC_0(1000 * 1);
 }
 if ((VAR_16 >= VAR_10) ||
     (VAR_17 == VAR_6)) {
  FUNC_1(VAR_18, "FW cmd failed.\n");
  return VAR_0;
 }





 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  FUNC_2(VAR_18, VAR_11, VAR_5,
    VAR_3 + VAR_16,
    &VAR_14[VAR_16]);
 }

 return VAR_1;
}
