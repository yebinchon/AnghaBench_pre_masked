
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_flags; } ;
struct TYPE_3__ {int an_len; int an_type; } ;
struct an_softc {TYPE_1__ areq; int * an_temp_keys; scalar_t__ mpi350; scalar_t__ an_gone; struct ifnet* an_ifp; } ;
struct an_ltv_key {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct an_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct an_softc*) ;
 int FUNC_3 (struct an_softc*) ;
 int FUNC_4 (struct an_softc*) ;
 int FUNC_5 (struct an_softc*,TYPE_1__*) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int *,TYPE_1__*,int) ;
 struct an_softc* FUNC_8 (int ) ;

void
FUNC_9(device_t VAR_2)
{
 struct an_softc *VAR_3;
 struct ifnet *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_8(VAR_2);
 FUNC_0(VAR_3);
 VAR_4 = VAR_3->an_ifp;

 VAR_3->an_gone = 0;
 FUNC_4(VAR_3);
 if (VAR_3->mpi350)
  FUNC_3(VAR_3);
 FUNC_2(VAR_3);


 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_3->areq.an_type = VAR_0;
  VAR_3->areq.an_len = sizeof(struct an_ltv_key);
  FUNC_7(&VAR_3->an_temp_keys[VAR_5],
      &VAR_3->areq, sizeof(struct an_ltv_key));
  FUNC_5(VAR_3, &VAR_3->areq);
 }

 if (VAR_4->if_flags & VAR_1)
  FUNC_6(VAR_4);
 FUNC_1(VAR_3);

 return;
}
