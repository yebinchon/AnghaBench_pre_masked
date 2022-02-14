
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int check_kr2_recovery_cnt; } ;
struct elink_reg_set {int member_2; int val; int reg; int devad; int member_1; int const member_0; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int link_attr_sync; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct elink_reg_set*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int ) ;
 int FUNC_3 (struct elink_params*,int ) ;

__attribute__((used)) static void FUNC_4(struct elink_params *VAR_2,
         struct elink_vars *VAR_3,
         struct elink_phy *VAR_4)
{
 struct bxe_softc *VAR_5 = VAR_2->sc;
 int VAR_6;
 static struct elink_reg_set VAR_7[] = {

  {143, 136, 0x7690},
  {143, 134, 0xe647},
  {143, 135, 0xc4f0},
  {143, 133, 0x7690},
  {143, 137, 0xe647},
  {143, 138, 0xc4f0},
  {143, 139, 0x000c},
  {143, 141, 0x6000},
  {143, 140, 0x0000},
  {143, 142, 0x0002},
  {143, 130, 0x0000},
  {143, 129, 0x0af7},
  {143, 128, 0x0af7},
  {143, 132, 0x0002},
  {143, 131, 0x0000}
 };
 FUNC_1(VAR_5, "Disabling 20G-KR2\n");

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7); VAR_6++)
  FUNC_2(VAR_5, VAR_4, VAR_7[VAR_6].devad, VAR_7[VAR_6].reg,
     VAR_7[VAR_6].val);
 VAR_2->link_attr_sync &= ~VAR_1;
 FUNC_3(VAR_2, VAR_2->link_attr_sync);

 VAR_3->check_kr2_recovery_cnt = VAR_0;
}
