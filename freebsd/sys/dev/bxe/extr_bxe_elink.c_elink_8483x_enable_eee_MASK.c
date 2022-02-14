
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
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct elink_phy*,struct elink_params*,int ,int*,int,int ) ;
 scalar_t__ FUNC_2 (struct elink_phy*,struct elink_params*,struct elink_vars*,int ) ;

__attribute__((used)) static elink_status_t FUNC_3(struct elink_phy *VAR_4,
       struct elink_params *VAR_5,
       struct elink_vars *VAR_6)
{
 elink_status_t VAR_7;
 struct bxe_softc *VAR_8 = VAR_5->sc;
 uint16_t VAR_9 = 1;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2,
      &VAR_9, 1, VAR_1);
 if (VAR_7 != VAR_0) {
  FUNC_0(VAR_8, "EEE enable failed.\n");
  return VAR_7;
 }

 return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3);
}
