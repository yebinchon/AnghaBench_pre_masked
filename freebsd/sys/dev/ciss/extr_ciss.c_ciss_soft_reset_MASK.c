
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ciss_softc {int ciss_max_logical_bus; TYPE_3__* ciss_controllers; } ;
struct ciss_request {struct ciss_command* cr_cc; } ;
struct TYPE_4__ {scalar_t__ bus; } ;
struct TYPE_6__ {TYPE_1__ physical; } ;
struct TYPE_5__ {TYPE_3__ address; } ;
struct ciss_command {TYPE_2__ header; } ;


 int VAR_0 ;
 int FUNC_0 (struct ciss_softc*,struct ciss_request**,int ,int *,int ) ;
 int FUNC_1 (struct ciss_softc*,struct ciss_request**) ;
 int FUNC_2 (struct ciss_softc*,char*,int) ;
 int FUNC_3 (struct ciss_request*) ;
 int FUNC_4 (struct ciss_request*,int) ;

__attribute__((used)) static void
FUNC_5(struct ciss_softc *VAR_1)
{
    struct ciss_request *VAR_2 = ((void*)0);
    struct ciss_command *VAR_3;
    int VAR_4, VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_1->ciss_max_logical_bus; VAR_4++) {

 if (VAR_1->ciss_controllers[VAR_4].physical.bus == 0)
     continue;

 if ((VAR_5 = FUNC_1(VAR_1, &VAR_2)) != 0)
     break;

 if ((VAR_5 = FUNC_0(VAR_1, &VAR_2, VAR_0,
        ((void*)0), 0)) != 0)
     break;

 VAR_3 = VAR_2->cr_cc;
 VAR_3->header.address = VAR_1->ciss_controllers[VAR_4];

 if ((VAR_5 = FUNC_4(VAR_2, 60 * 1000)) != 0)
     break;

 FUNC_3(VAR_2);
    }

    if (VAR_5)
 FUNC_2(VAR_1, "error resetting controller (%d)\n", VAR_5);

    if (VAR_2 != ((void*)0))
 FUNC_3(VAR_2);
}
