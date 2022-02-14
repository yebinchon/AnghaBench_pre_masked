
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proto {TYPE_2__* twsk_prot; TYPE_1__* rsk_prot; int * slab; int node; } ;
struct TYPE_4__ {int * twsk_slab; int twsk_slab_name; } ;
struct TYPE_3__ {int * slab; int slab_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct proto*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct proto *VAR_1)
{
 FUNC_4(&VAR_0);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->node);
 FUNC_5(&VAR_0);

 if (VAR_1->slab != ((void*)0)) {
  FUNC_1(VAR_1->slab);
  VAR_1->slab = ((void*)0);
 }

 if (VAR_1->rsk_prot != ((void*)0) && VAR_1->rsk_prot->slab != ((void*)0)) {
  FUNC_1(VAR_1->rsk_prot->slab);
  FUNC_0(VAR_1->rsk_prot->slab_name);
  VAR_1->rsk_prot->slab = ((void*)0);
 }

 if (VAR_1->twsk_prot != ((void*)0) && VAR_1->twsk_prot->twsk_slab != ((void*)0)) {
  FUNC_1(VAR_1->twsk_prot->twsk_slab);
  FUNC_0(VAR_1->twsk_prot->twsk_slab_name);
  VAR_1->twsk_prot->twsk_slab = ((void*)0);
 }
}
