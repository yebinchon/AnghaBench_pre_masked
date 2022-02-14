
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int * vtscsi_event_vq; int * vtscsi_request_vq; int * vtscsi_control_vq; } ;


 int FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*,int *) ;

__attribute__((used)) static void
FUNC_2(struct vtscsi_softc *VAR_0)
{

 if (VAR_0->vtscsi_control_vq != ((void*)0))
  FUNC_1(VAR_0, VAR_0->vtscsi_control_vq);
 if (VAR_0->vtscsi_request_vq != ((void*)0))
  FUNC_1(VAR_0, VAR_0->vtscsi_request_vq);
 if (VAR_0->vtscsi_event_vq != ((void*)0))
  FUNC_0(VAR_0);
}
