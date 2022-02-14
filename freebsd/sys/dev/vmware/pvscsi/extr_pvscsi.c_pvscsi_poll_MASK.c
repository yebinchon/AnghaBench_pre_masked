
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int lock; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 struct pvscsi_softc* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pvscsi_softc*) ;

__attribute__((used)) static void
FUNC_3(struct cam_sim *VAR_1)
{
 struct pvscsi_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->lock, VAR_0);
 FUNC_2(VAR_2);
}
