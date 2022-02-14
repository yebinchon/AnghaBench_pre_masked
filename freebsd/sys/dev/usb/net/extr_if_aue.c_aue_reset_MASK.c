
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ue_dev; } ;
struct aue_softc {int sc_flags; TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aue_softc*,int ,int) ;
 int VAR_8 ;
 int FUNC_1 (struct aue_softc*,int ) ;
 int FUNC_2 (struct aue_softc*,int ,int) ;
 int FUNC_3 (struct aue_softc*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(struct aue_softc *VAR_10)
{
 int VAR_11;

 FUNC_0(VAR_10, VAR_0, VAR_1);

 for (VAR_11 = 0; VAR_11 != VAR_8; VAR_11++) {
  if (!(FUNC_1(VAR_10, VAR_0) & VAR_1))
   break;
  if (FUNC_5(&VAR_10->sc_ue, VAR_9 / 100))
   break;
 }

 if (VAR_11 == VAR_8)
  FUNC_4(VAR_10->sc_ue.ue_dev, "reset failed\n");
 FUNC_2(VAR_10, VAR_4, VAR_6|VAR_7);
 FUNC_2(VAR_10, VAR_4, VAR_6|VAR_7|VAR_5);

 if (VAR_10->sc_flags & VAR_2) {

  FUNC_2(VAR_10, VAR_4, VAR_6|VAR_7);
  FUNC_2(VAR_10, VAR_4,
      VAR_6|VAR_7|VAR_5);
 }
 if (VAR_10->sc_flags & VAR_3)
  FUNC_3(VAR_10);


 FUNC_5(&VAR_10->sc_ue, VAR_9 / 100);
}
