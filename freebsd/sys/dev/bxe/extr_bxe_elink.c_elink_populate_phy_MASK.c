
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_phy {int type; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,int ,int ,scalar_t__,struct elink_phy*) ;
 int FUNC_1 (struct bxe_softc*,int ,scalar_t__,struct elink_phy*) ;

__attribute__((used)) static elink_status_t FUNC_2(struct bxe_softc *VAR_3, uint8_t VAR_4, uint32_t VAR_5,
         uint32_t VAR_6, uint8_t VAR_7, struct elink_phy *VAR_8)
{
 elink_status_t VAR_9 = VAR_1;
 VAR_8->type = VAR_2;
 if (VAR_4 == VAR_0)
  return FUNC_1(VAR_3, VAR_5, VAR_7, VAR_8);
 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8);
 return VAR_9;
}
