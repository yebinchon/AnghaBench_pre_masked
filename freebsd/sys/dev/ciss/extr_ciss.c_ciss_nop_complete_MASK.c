
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int dummy; } ;
struct ciss_request {struct ciss_softc* cr_sc; } ;


 int FUNC_0 (struct ciss_softc*,char*) ;
 int FUNC_1 (struct ciss_request*) ;
 scalar_t__ FUNC_2 (struct ciss_request*,int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct ciss_request *VAR_0)
{
    struct ciss_softc *VAR_1;
    static int VAR_2 = 1;

    VAR_1 = VAR_0->cr_sc;
    if (FUNC_2(VAR_0, ((void*)0), ((void*)0)) != 0) {
 if (VAR_2 == 1) {
     VAR_2 = 0;
     FUNC_0(VAR_1, "SENDING NOP MESSAGE FAILED (not logging anymore)\n");
 }
    }

    FUNC_1(VAR_0);
}
