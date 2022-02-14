
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ) ;

__attribute__((used)) static void FUNC_3(struct elink_phy *VAR_5,
      struct elink_params *VAR_6)
{
 struct bxe_softc *VAR_7 = VAR_6->sc;

 FUNC_0(1000 * 100);


 FUNC_1(VAR_7, VAR_5,
    VAR_0, VAR_1, 0x018B);


 FUNC_1(VAR_7, VAR_5,
    VAR_0,
    VAR_1,
    VAR_2);

 FUNC_1(VAR_7, VAR_5,
    VAR_0,
    VAR_4, 0x0001);

 FUNC_1(VAR_7, VAR_5,
    VAR_0,
    VAR_1,
    VAR_3);


 FUNC_0(1000 * 150);


 FUNC_1(VAR_7, VAR_5,
    VAR_0,
    VAR_4, 0x0000);

 FUNC_0(1000 * 200);
 FUNC_2(VAR_7, VAR_5, VAR_6->port);
}
