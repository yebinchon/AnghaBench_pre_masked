
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

void FUNC_3(struct bxe_softc *VAR_2, struct elink_phy *VAR_3)
{
 uint16_t VAR_4, VAR_5;

 FUNC_1(VAR_2, VAR_3,
   VAR_0,
   VAR_1, &VAR_4);

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  FUNC_0(1000 * 50);

  FUNC_2(VAR_2, VAR_3,
     VAR_0,
     VAR_1,
     (VAR_4 | (1<<15)));

  FUNC_1(VAR_2, VAR_3,
    VAR_0,
    VAR_1, &VAR_4);

  if ((VAR_4 & (1<<15)) == 0)
   break;
 }
}
