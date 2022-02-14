
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxsb_softc {scalar_t__ sc_cid; int sc_task_mtx; int sc_dev; } ;
struct glxsb_session {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct glxsb_softc *VAR_11)
{

 VAR_11->sc_cid = FUNC_0(VAR_11->sc_dev,
     sizeof(struct glxsb_session), VAR_0);

 if (VAR_11->sc_cid < 0) {
  FUNC_3(VAR_11->sc_dev, "cannot get crypto driver id\n");
  return (VAR_9);
 }

 FUNC_5(&VAR_11->sc_task_mtx, "glxsb_crypto_mtx", ((void*)0), VAR_10);

 if (FUNC_1(VAR_11->sc_cid, VAR_1, 0, 0) != 0)
  goto crypto_fail;
 if (FUNC_1(VAR_11->sc_cid, VAR_3, 0, 0) != 0)
  goto crypto_fail;
 if (FUNC_1(VAR_11->sc_cid, VAR_2, 0, 0) != 0)
  goto crypto_fail;
 if (FUNC_1(VAR_11->sc_cid, VAR_5, 0, 0) != 0)
  goto crypto_fail;
 if (FUNC_1(VAR_11->sc_cid, VAR_4, 0, 0) != 0)
  goto crypto_fail;
 if (FUNC_1(VAR_11->sc_cid, VAR_6, 0, 0) != 0)
  goto crypto_fail;
 if (FUNC_1(VAR_11->sc_cid, VAR_7, 0, 0) != 0)
  goto crypto_fail;
 if (FUNC_1(VAR_11->sc_cid, VAR_8, 0, 0) != 0)
  goto crypto_fail;

 return (0);

crypto_fail:
 FUNC_3(VAR_11->sc_dev, "cannot register crypto\n");
 FUNC_2(VAR_11->sc_cid);
 FUNC_4(&VAR_11->sc_task_mtx);
 return (VAR_9);
}
