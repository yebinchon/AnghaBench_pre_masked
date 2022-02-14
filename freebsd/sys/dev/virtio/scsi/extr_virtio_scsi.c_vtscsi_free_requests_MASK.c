
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {scalar_t__ vtscsi_nrequests; } ;
struct vtscsi_request {int vsr_callout; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct vtscsi_request*,int ) ;
 struct vtscsi_request* FUNC_3 (struct vtscsi_softc*) ;

__attribute__((used)) static void
FUNC_4(struct vtscsi_softc *VAR_1)
{
 struct vtscsi_request *VAR_2;

 while ((VAR_2 = FUNC_3(VAR_1)) != ((void*)0)) {
  FUNC_0(FUNC_1(&VAR_2->vsr_callout) == 0,
      ("request callout still active"));

  VAR_1->vtscsi_nrequests--;
  FUNC_2(VAR_2, VAR_0);
 }

 FUNC_0(VAR_1->vtscsi_nrequests == 0, ("leaked requests: %d",
     VAR_1->vtscsi_nrequests));
}
