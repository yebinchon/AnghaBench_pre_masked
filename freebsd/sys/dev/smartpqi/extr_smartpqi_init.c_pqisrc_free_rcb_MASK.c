
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int rcb_t ;
struct TYPE_5__ {int max_outstanding_io; int * rcb; int * sg_dma_desc; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,void*,size_t) ;

void FUNC_3(pqisrc_softstate_t *VAR_0, int VAR_1)
{

 uint32_t VAR_2;
 size_t VAR_3;
 int VAR_4;

 FUNC_0("IN\n");
 VAR_2 = VAR_0->max_outstanding_io + 1;
 VAR_3 = VAR_2 * sizeof(rcb_t);
 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_0, &VAR_0->sg_dma_desc[VAR_4]);
 FUNC_2(VAR_0, (void *)VAR_0->rcb, VAR_3);
 VAR_0->rcb = ((void*)0);
 FUNC_0("OUT\n");
}
