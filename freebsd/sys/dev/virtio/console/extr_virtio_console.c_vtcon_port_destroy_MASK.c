
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_port {int vtcport_id; int vtcport_mtx; int * vtcport_outvq; int * vtcport_invq; int * vtcport_scport; int * vtcport_sc; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtcon_port*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct vtcon_port *VAR_1)
{

 VAR_1->vtcport_sc = ((void*)0);
 VAR_1->vtcport_scport = ((void*)0);
 VAR_1->vtcport_invq = ((void*)0);
 VAR_1->vtcport_outvq = ((void*)0);
 VAR_1->vtcport_id = -1;
 FUNC_1(&VAR_1->vtcport_mtx);
 FUNC_0(VAR_1, VAR_0);
}
