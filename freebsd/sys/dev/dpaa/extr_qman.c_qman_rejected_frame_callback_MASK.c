
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int t_QmRejectedFrameInfo ;
typedef struct qman_softc* t_Handle ;
typedef int t_DpaaFD ;
struct qman_softc {int sc_dev; } ;
typedef int e_RxStoreResponse ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

e_RxStoreResponse
FUNC_1(t_Handle VAR_1, t_Handle VAR_2, t_Handle VAR_3,
    uint32_t VAR_4, t_DpaaFD *VAR_5,
    t_QmRejectedFrameInfo *VAR_6)
{
 struct qman_softc *VAR_7;

 VAR_7 = VAR_1;

 FUNC_0(VAR_7->sc_dev, "dummy callback for rejected frame.\n");
 return (VAR_0);
}
