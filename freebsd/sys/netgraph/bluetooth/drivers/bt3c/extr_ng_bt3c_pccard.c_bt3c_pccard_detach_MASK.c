
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
typedef TYPE_1__* bt3c_softc_p ;
struct TYPE_4__ {int ifq_mtx; } ;
struct TYPE_3__ {TYPE_2__ outq; TYPE_2__ inq; int m; int * node; scalar_t__ iobase_rid; int * iobase; scalar_t__ irq_rid; int * irq; int * irq_cookie; int * ith; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,scalar_t__,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 bt3c_softc_p VAR_3 = (bt3c_softc_p) FUNC_5(VAR_2);

 if (VAR_3 == ((void*)0))
  return (0);

 FUNC_8(VAR_3->ith);
 VAR_3->ith = ((void*)0);

 FUNC_4(VAR_2, VAR_3->irq, VAR_3->irq_cookie);
 FUNC_3(VAR_2, VAR_1, VAR_3->irq_rid, VAR_3->irq);
 VAR_3->irq_cookie = ((void*)0);
 VAR_3->irq = ((void*)0);
 VAR_3->irq_rid = 0;

 FUNC_3(VAR_2, VAR_0, VAR_3->iobase_rid, VAR_3->iobase);
 VAR_3->iobase = ((void*)0);
 VAR_3->iobase_rid = 0;

 if (VAR_3->node != ((void*)0)) {
  FUNC_2(VAR_3->node, ((void*)0));
  FUNC_7(VAR_3->node);
  VAR_3->node = ((void*)0);
 }

 FUNC_1(VAR_3->m);
 FUNC_0(&VAR_3->inq);
 FUNC_0(&VAR_3->outq);

 FUNC_6(&VAR_3->inq.ifq_mtx);
 FUNC_6(&VAR_3->outq.ifq_mtx);

 return (0);
}
