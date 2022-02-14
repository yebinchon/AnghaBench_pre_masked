
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {scalar_t__ type; } ;
struct elink_params {int port; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bxe_softc*,int ,int ) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int*) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;

__attribute__((used)) static uint16_t FUNC_5(struct bxe_softc *VAR_4,
         struct elink_phy *VAR_5,
         struct elink_params *VAR_6)
{
 uint16_t VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
  if (VAR_5->type == VAR_3)
   FUNC_3(VAR_4, VAR_5,
    VAR_2, &VAR_8);
  else
   FUNC_4(VAR_4, VAR_5,
    VAR_1,
    VAR_2, &VAR_8);
  if (!(VAR_8 & (1<<15)))
   break;
  FUNC_0(1000 * 1);
 }

 if (VAR_7 == 1000)
  FUNC_2(VAR_4, VAR_0, VAR_6->port);


 FUNC_1(VAR_4, "control reg 0x%x (after %d ms)\n", VAR_8, VAR_7);
 return VAR_7;
}
