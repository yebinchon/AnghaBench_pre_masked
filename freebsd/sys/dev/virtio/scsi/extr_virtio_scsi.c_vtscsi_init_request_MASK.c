
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int dummy; } ;
struct vtscsi_request {int vsr_callout; struct vtscsi_softc* vsr_softc; int vsr_uresp; int vsr_ureq; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vtscsi_softc*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct vtscsi_softc *VAR_0, struct vtscsi_request *VAR_1)
{
 VAR_1->vsr_softc = VAR_0;
 FUNC_2(&VAR_1->vsr_callout, FUNC_1(VAR_0), 0);
}
