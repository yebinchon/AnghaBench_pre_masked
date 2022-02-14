
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpt_softc {TYPE_1__* request_pool; } ;
struct TYPE_2__ {int callout; } ;
typedef TYPE_1__ request_t ;


 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*,int *) ;
 int FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (struct mpt_softc*) ;

__attribute__((used)) static void
FUNC_4(struct mpt_softc *VAR_0)
{
 int VAR_1;




 FUNC_2(VAR_0);


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  request_t *VAR_2 = &VAR_0->request_pool[VAR_1];
  FUNC_1(VAR_0, &VAR_2->callout);
 }

 FUNC_3(VAR_0);
}
