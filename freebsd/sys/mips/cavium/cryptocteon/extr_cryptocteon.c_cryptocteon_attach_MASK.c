
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octo_sess {int dummy; } ;
struct cryptocteon_softc {scalar_t__ sc_cid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 struct cryptocteon_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_8)
{
 struct cryptocteon_softc *VAR_9;

 VAR_9 = FUNC_2(VAR_8);

 VAR_9->sc_cid = FUNC_0(VAR_8, sizeof(struct octo_sess),
     VAR_0 | VAR_1);
 if (VAR_9->sc_cid < 0) {
  FUNC_3(VAR_8, "crypto_get_driverid ret %d\n", VAR_9->sc_cid);
  return (VAR_7);
 }

 FUNC_1(VAR_9->sc_cid, VAR_5, 0, 0);
 FUNC_1(VAR_9->sc_cid, VAR_6, 0, 0);
 FUNC_1(VAR_9->sc_cid, VAR_4, 0, 0);
 FUNC_1(VAR_9->sc_cid, VAR_2, 0, 0);
 FUNC_1(VAR_9->sc_cid, VAR_3, 0, 0);

 return (0);
}
