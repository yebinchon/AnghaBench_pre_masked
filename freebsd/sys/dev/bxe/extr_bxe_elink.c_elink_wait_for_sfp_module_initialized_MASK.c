
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_phy {scalar_t__ type; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct elink_phy*,struct elink_params*,int ,int,int,int *) ;
 scalar_t__ FUNC_3 (struct elink_phy*,struct elink_params*,int ,int,int,int *,int) ;

__attribute__((used)) static elink_status_t FUNC_4(struct elink_phy *VAR_3,
       struct elink_params *VAR_4)

{
 uint8_t VAR_5;
 elink_status_t VAR_6;
 struct bxe_softc *VAR_7 = VAR_4->sc;
 uint16_t VAR_8;




 for (VAR_8 = 0; VAR_8 < 60; VAR_8++) {
  if (VAR_3->type == VAR_2)
   VAR_6 = FUNC_3(
    VAR_3, VAR_4, VAR_0, 1, 1, &VAR_5,
    1);
  else
   VAR_6 = FUNC_2(VAR_3, VAR_4,
         VAR_0,
         1, 1, &VAR_5);
  if (VAR_6 == 0) {
   FUNC_1(VAR_7,
      "SFP+ module initialization took %d ms\n",
      VAR_8 * 5);
   return VAR_1;
  }
  FUNC_0(1000 * 5);
 }
 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_0,
       1, 1, &VAR_5);
 return VAR_6;
}
