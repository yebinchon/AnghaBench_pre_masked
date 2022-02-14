
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccuser {scalar_t__ aborted; scalar_t__ queue_max; scalar_t__ queue_act; int config; TYPE_1__* accepted; int * sap; int connq; } ;
struct TYPE_2__ {int * acceptor; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ccuser*) ;
 int FUNC_4 (struct ccuser*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ccuser *VAR_2)
{

 FUNC_0(FUNC_2(&VAR_2->connq), ("connq not empty"));

 if (VAR_2->sap != ((void*)0)) {
  FUNC_1(VAR_2->sap);
  VAR_2->sap = ((void*)0);
 }

 if (VAR_2->accepted != ((void*)0)) {
  VAR_2->accepted->acceptor = ((void*)0);
  VAR_2->accepted = ((void*)0);
 }
 VAR_2->config = VAR_1;
 VAR_2->queue_act = 0;
 VAR_2->queue_max = 0;
 VAR_2->aborted = 0;

 FUNC_4(VAR_2, VAR_0);

 FUNC_3(VAR_2);
}
