
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_softc {int sc_ready_requests; } ;
struct cesa_request {int dummy; } ;


 int FUNC_0 (struct cesa_softc*,int ) ;
 int FUNC_1 (struct cesa_softc*,int ) ;
 int FUNC_2 (int *,struct cesa_request*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct cesa_softc *VAR_2, struct cesa_request *VAR_3)
{

 FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->sc_ready_requests, VAR_3, VAR_0);
 FUNC_1(VAR_2, VAR_1);
}
