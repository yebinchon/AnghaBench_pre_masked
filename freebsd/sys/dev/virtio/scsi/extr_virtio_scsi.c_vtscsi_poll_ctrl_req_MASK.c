
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_control_vq; } ;
struct vtscsi_request {int vsr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtscsi_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct vtscsi_softc *VAR_2, struct vtscsi_request *VAR_3)
{


 VAR_3->vsr_flags |= VAR_1;
 do
  FUNC_0(VAR_2, VAR_2->vtscsi_control_vq);
 while ((VAR_3->vsr_flags & VAR_0) == 0);

 VAR_3->vsr_flags &= ~VAR_1;
}
