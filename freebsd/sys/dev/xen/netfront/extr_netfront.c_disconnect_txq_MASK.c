
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_txq {int xen_intr_handle; int ring_ref; int gref_head; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct netfront_txq*) ;

__attribute__((used)) static void
FUNC_4(struct netfront_txq *VAR_0)
{

 FUNC_3(VAR_0);
 FUNC_1(VAR_0->gref_head);
 FUNC_0(VAR_0->ring_ref, ((void*)0));
 FUNC_2(&VAR_0->xen_intr_handle);
}
