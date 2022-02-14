
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int dummy; } ;
struct ciss_request {struct ciss_softc* cr_sc; } ;


 int FUNC_0 (struct ciss_request*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct ciss_request *VAR_0)
{
    struct ciss_softc *VAR_1;

    FUNC_1(2);

    VAR_1 = VAR_0->cr_sc;


    FUNC_0(VAR_0);
}
