
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int sgt_t ;
struct TYPE_11__ {scalar_t__ sg_chain_dma; int * sg_chain_virt; } ;
typedef TYPE_2__ rcb_t ;
struct TYPE_10__ {int max_outstanding_io; int max_sg_elem; } ;
struct TYPE_12__ {int max_outstanding_io; TYPE_9__* sg_dma_desc; TYPE_2__* rcb; TYPE_1__ pqi_cap; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_13__ {char* tag; int size; scalar_t__ dma_addr; scalar_t__ virt_addr; int align; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,TYPE_9__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(pqisrc_softstate_t *VAR_3)
{
 int VAR_4 = VAR_2;
 int VAR_5 = 0;
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = 0;
 uint64_t VAR_8 = 0;
 rcb_t *VAR_9 = ((void*)0);
 rcb_t *VAR_10 = ((void*)0);
 FUNC_1("IN\n");






 VAR_3->max_outstanding_io = VAR_3->pqi_cap.max_outstanding_io;
 VAR_6 = VAR_3->max_outstanding_io + 1;
 FUNC_2("Max Outstanding IO reset to %d\n", VAR_6);

 VAR_8 = VAR_6 * sizeof(rcb_t);


 VAR_9 = FUNC_4(VAR_3, VAR_8);
 if (!VAR_9) {
  FUNC_0("Failed to allocate memory for rcb\n");
  VAR_4 = VAR_1;
  goto err_out;
 }
 VAR_3->rcb = VAR_9;


 VAR_7 = VAR_3->pqi_cap.max_sg_elem *
   sizeof(sgt_t);

 VAR_10 = &VAR_3->rcb[1];

 for(VAR_5=1; VAR_5 < VAR_6; VAR_5++) {
  char VAR_11[15];
  FUNC_6(VAR_11, "sg_dma_buf%d", VAR_5);
  VAR_3->sg_dma_desc[VAR_5].tag = VAR_11;
  VAR_3->sg_dma_desc[VAR_5].size = VAR_7;
  VAR_3->sg_dma_desc[VAR_5].align = VAR_0;

  VAR_4 = FUNC_3(VAR_3, &VAR_3->sg_dma_desc[VAR_5]);
  if (VAR_4) {
   FUNC_0("Failed to Allocate sg desc %d\n", VAR_4);
   VAR_4 = VAR_1;
   goto error;
  }
  VAR_10->sg_chain_virt = (sgt_t *)(VAR_3->sg_dma_desc[VAR_5].virt_addr);
  VAR_10->sg_chain_dma = (dma_addr_t)(VAR_3->sg_dma_desc[VAR_5].dma_addr);
  VAR_10 ++;
 }

 FUNC_1("OUT\n");
 return VAR_4;
error:
 FUNC_5(VAR_3, VAR_5);
err_out:
 FUNC_1("failed OUT\n");
 return VAR_4;
}
