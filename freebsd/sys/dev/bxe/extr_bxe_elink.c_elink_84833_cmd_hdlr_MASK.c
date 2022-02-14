
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static elink_status_t FUNC_4(struct elink_phy *VAR_15,
    struct elink_params *VAR_16, uint16_t VAR_17,
    uint16_t VAR_18[], int VAR_19, int VAR_20)
{
 int VAR_21;
 uint16_t VAR_22;
 struct bxe_softc *VAR_23 = VAR_16->sc;
 elink_status_t VAR_24 = VAR_1;

 if (VAR_20 == VAR_7) {

 FUNC_3(VAR_23, VAR_15, VAR_5,
     VAR_4,
   VAR_13);
 }

 for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
  FUNC_2(VAR_23, VAR_15, VAR_5,
          VAR_4, &VAR_22);
  if (VAR_22 == VAR_12)
   break;
  FUNC_0(1000 * 1);
 }
 if (VAR_21 >= VAR_14) {
  FUNC_1(VAR_23, "FW cmd: FW not ready.\n");



  if (VAR_22 == VAR_11 ||
      VAR_22 == VAR_10) {
   FUNC_3(VAR_23, VAR_15, VAR_5,
      VAR_4,
      VAR_9);
  }
  return VAR_0;
 }
 if (VAR_20 == VAR_6 ||
     VAR_20 == VAR_7) {

 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
  FUNC_3(VAR_23, VAR_15, VAR_5,
      VAR_3 + VAR_21,
    VAR_18[VAR_21]);
 }
 }


 FUNC_3(VAR_23, VAR_15, VAR_5,
   VAR_2, VAR_17);
 for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
  FUNC_2(VAR_23, VAR_15, VAR_5,
          VAR_4, &VAR_22);
  if ((VAR_22 == VAR_11) ||
   (VAR_22 == VAR_10))
   break;
  FUNC_0(1000 * 1);
 }
 if ((VAR_21 >= VAR_14) ||
  (VAR_22 == VAR_10)) {
  FUNC_1(VAR_23, "FW cmd failed.\n");
  VAR_24 = VAR_0;
 }
 if (VAR_20 == VAR_8 && VAR_24 == VAR_1) {

 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
  FUNC_2(VAR_23, VAR_15, VAR_5,
     VAR_3 + VAR_21,
    &VAR_18[VAR_21]);
 }
 }
 if (VAR_22 == VAR_10 ||
     VAR_22 == VAR_11) {
 FUNC_3(VAR_23, VAR_15, VAR_5,
     VAR_4,
   VAR_9);
 }
 return VAR_24;
}
