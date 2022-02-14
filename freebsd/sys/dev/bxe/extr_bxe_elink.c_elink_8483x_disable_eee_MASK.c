
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {int dummy; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct elink_phy*,struct elink_params*,int ,int *,int,int ) ;
 scalar_t__ FUNC_2 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;

__attribute__((used)) static elink_status_t FUNC_3(struct elink_phy *VAR_3,
       struct elink_params *VAR_4,
       struct elink_vars *VAR_5)
{
 elink_status_t VAR_6;
 struct bxe_softc *VAR_7 = VAR_4->sc;
 uint16_t VAR_8 = 0;

 FUNC_0(VAR_7, "Don't Advertise 10GBase-T EEE\n");


 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_2,
      &VAR_8, 1, VAR_1);
 if (VAR_6 != VAR_0) {
  FUNC_0(VAR_7, "EEE disable failed.\n");
  return VAR_6;
 }

 return FUNC_2(VAR_3, VAR_4, VAR_5);
}
