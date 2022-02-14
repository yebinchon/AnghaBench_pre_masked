
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mge_softc {int mge_intr_cnt; int transmit_lock; int receive_lock; int * res; scalar_t__ ifp; int * ih_cookie; int wd_callout; } ;
typedef int device_t ;
struct TYPE_2__ {int description; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 struct mge_softc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct mge_softc*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int FUNC_11 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_3)
{
 struct mge_softc *VAR_4;
 int VAR_5,VAR_6;

 VAR_4 = FUNC_3(VAR_3);


 if (VAR_4->ifp)
  FUNC_9(VAR_3);


        FUNC_2(&VAR_4->wd_callout);


 for (VAR_6 = 0; VAR_6 < VAR_4->mge_intr_cnt; ++VAR_6) {
  if (!VAR_4->ih_cookie[VAR_6])
   continue;

  VAR_5 = FUNC_1(VAR_3, VAR_4->res[1 + VAR_6],
      VAR_4->ih_cookie[VAR_6]);
  if (VAR_5)
   FUNC_5(VAR_3, "could not release %s\n",
       VAR_0[(VAR_4->mge_intr_cnt == 1 ? 0 : VAR_6 + 1)].description);
 }


 if (VAR_4->ifp) {
  FUNC_6(VAR_4->ifp);
  FUNC_7(VAR_4->ifp);
 }


 FUNC_8(VAR_4);


 FUNC_0(VAR_3, VAR_1, VAR_4->res);


 FUNC_10(&VAR_4->receive_lock);
 FUNC_10(&VAR_4->transmit_lock);

 if (FUNC_4(VAR_3) == 0)
  FUNC_11(&VAR_2);

 return (0);
}
