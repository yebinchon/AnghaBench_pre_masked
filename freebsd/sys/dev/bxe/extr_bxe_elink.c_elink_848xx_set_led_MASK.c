
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_reg_set {int member_1; int member_2; int val; int reg; int const devad; int const member_0; } ;
struct elink_phy {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct elink_reg_set*) ;






 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int const,int ,int*) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int const,int,int ) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int const,int ,int) ;
 scalar_t__ FUNC_4 (struct elink_phy*) ;

__attribute__((used)) static void FUNC_5(struct bxe_softc *VAR_4,
    struct elink_phy *VAR_5)
{
 uint16_t VAR_6, VAR_7, VAR_8;
 static struct elink_reg_set VAR_9[] = {
  {134, 133, 0x0080},
  {134, 132, 0x0018},
  {134, 130, 0x0006},
  {134, 131, 0x0000},
  {134, 128,
   129},
  {135, 0xFFFB, 0xFFFD}
 };

 FUNC_1(VAR_4, VAR_5,
   134,
   VAR_0, &VAR_6);
 VAR_6 &= 0xFE00;
 VAR_6 |= 0x0092;

 FUNC_3(VAR_4, VAR_5,
    134,
    VAR_0, VAR_6);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_9); VAR_8++)
  FUNC_3(VAR_4, VAR_5, VAR_9[VAR_8].devad, VAR_9[VAR_8].reg,
     VAR_9[VAR_8].val);

 if (FUNC_4(VAR_5))
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_1;


 FUNC_2(VAR_4, VAR_5,
     134, VAR_7,
     VAR_2);
}
