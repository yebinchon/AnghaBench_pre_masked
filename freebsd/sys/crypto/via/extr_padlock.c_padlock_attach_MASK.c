
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padlock_softc {scalar_t__ sc_cid; } ;
struct padlock_session {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 struct padlock_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_9)
{
 struct padlock_softc *VAR_10 = FUNC_2(VAR_9);

 VAR_10->sc_cid = FUNC_0(VAR_9, sizeof(struct padlock_session),
     VAR_0);
 if (VAR_10->sc_cid < 0) {
  FUNC_3(VAR_9, "Could not get crypto driver id.\n");
  return (VAR_8);
 }

 FUNC_1(VAR_10->sc_cid, VAR_1, 0, 0);
 FUNC_1(VAR_10->sc_cid, VAR_2, 0, 0);
 FUNC_1(VAR_10->sc_cid, VAR_4, 0, 0);
 FUNC_1(VAR_10->sc_cid, VAR_3, 0, 0);
 FUNC_1(VAR_10->sc_cid, VAR_5, 0, 0);
 FUNC_1(VAR_10->sc_cid, VAR_6, 0, 0);
 FUNC_1(VAR_10->sc_cid, VAR_7, 0, 0);
 return (0);
}
