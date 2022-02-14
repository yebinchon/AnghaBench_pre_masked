
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct bce_softc {int bce_flags; struct ifnet* bce_ifp; } ;


 int FUNC_0 (struct bce_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bce_softc*,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct bce_softc*,int ) ;
 int FUNC_6 (struct bce_softc*,int ,int ) ;
 int FUNC_7 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_8(struct bce_softc *VAR_5)
{
 struct ifnet *VAR_6;

 FUNC_1(VAR_3);

 FUNC_0(VAR_5);


 if (!(VAR_5->bce_flags & VAR_0)) {
  FUNC_3(VAR_5, VAR_4,
      "No management firmware running...\n");
  goto bce_mgmt_init_locked_exit;
 }

 VAR_6 = VAR_5->bce_ifp;


 FUNC_6(VAR_5, VAR_2, VAR_1);
 FUNC_5(VAR_5, VAR_2);
 FUNC_4(20);

 FUNC_7(VAR_6);

bce_mgmt_init_locked_exit:
 FUNC_2(VAR_3);
}
