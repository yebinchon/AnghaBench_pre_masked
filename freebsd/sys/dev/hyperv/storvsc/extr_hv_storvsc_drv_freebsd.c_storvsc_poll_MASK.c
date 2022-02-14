
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storvsc_softc {int hs_lock; int hs_chan; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 struct storvsc_softc* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (int ,struct storvsc_softc*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct cam_sim *VAR_1)
{
 struct storvsc_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->hs_lock, VAR_0);
 FUNC_4(&VAR_2->hs_lock);
 FUNC_1(VAR_2->hs_chan, VAR_2);
 FUNC_3(&VAR_2->hs_lock);
}
