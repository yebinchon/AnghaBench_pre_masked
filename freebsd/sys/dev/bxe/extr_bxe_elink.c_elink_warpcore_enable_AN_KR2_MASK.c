
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct elink_vars {int dummy; } ;
struct elink_reg_set {int member_2; int val; int reg; int devad; int member_1; int const member_0; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int link_attr_sync; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 size_t FUNC_0 (struct elink_reg_set*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;

 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int const,int ,int) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int ) ;
 int FUNC_4 (struct elink_params*,int ) ;

__attribute__((used)) static void FUNC_5(struct elink_phy *VAR_2,
      struct elink_params *VAR_3,
      struct elink_vars *VAR_4)
{
 struct bxe_softc *VAR_5 = VAR_3->sc;
 uint16_t VAR_6;
 static struct elink_reg_set VAR_7[] = {

  {143, 136, 0xa157},
  {143, 134, 0xcbe2},
  {143, 135, 0x7537},
  {143, 133, 0xa157},
  {143, 137, 0xcbe2},
  {143, 138, 0x7537},

  {143, 139, 0x000a},
  {143, 141, 0x6400},
  {143, 140, 0x0620},
  {143, 142, 0x0157},
  {143, 130, 0x6464},
  {143, 129, 0x3150},
  {143, 128, 0x3150},
  {143, 132, 0x0157},
  {143, 131, 0x0620}
 };
 FUNC_1(VAR_5, "Enabling 20G-KR2\n");

 FUNC_2(VAR_5, VAR_2, 143,
     VAR_1, (3<<6));

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7); VAR_6++)
  FUNC_3(VAR_5, VAR_2, VAR_7[VAR_6].devad, VAR_7[VAR_6].reg,
     VAR_7[VAR_6].val);


 VAR_3->link_attr_sync |= VAR_0;
 FUNC_4(VAR_3, VAR_3->link_attr_sync);
}
