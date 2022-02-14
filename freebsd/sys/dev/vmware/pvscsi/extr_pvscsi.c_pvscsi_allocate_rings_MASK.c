
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vaddr; } ;
struct pvscsi_softc {int req_ring_num_pages; int cmp_ring_num_pages; int msg_ring_num_pages; int * msg_ring; int dev; int * cmp_ring; int * req_ring; int * rings_state; TYPE_1__ msg_ring_dma; int * msg_ring_ppn; scalar_t__ use_msg; TYPE_1__ cmp_ring_dma; int * cmp_ring_ppn; TYPE_1__ req_ring_dma; int * req_ring_ppn; TYPE_1__ rings_state_dma; int rings_state_ppn; } ;


 int FUNC_0 (int,int ,char*,int *,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pvscsi_softc*,TYPE_1__*,int *,int) ;
 int FUNC_3 (struct pvscsi_softc*) ;

__attribute__((used)) static int
FUNC_4(struct pvscsi_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0, &VAR_0->rings_state_dma,
     &VAR_0->rings_state_ppn, 1);
 if (VAR_1) {
  FUNC_1(VAR_0->dev,
      "Error allocating rings state, error = %d\n", VAR_1);
  goto fail;
 }
 VAR_0->rings_state = VAR_0->rings_state_dma.vaddr;

 VAR_1 = FUNC_2(VAR_0, &VAR_0->req_ring_dma, VAR_0->req_ring_ppn,
     VAR_0->req_ring_num_pages);
 if (VAR_1) {
  FUNC_1(VAR_0->dev,
      "Error allocating req ring pages, error = %d\n", VAR_1);
  goto fail;
 }
 VAR_0->req_ring = VAR_0->req_ring_dma.vaddr;

 VAR_1 = FUNC_2(VAR_0, &VAR_0->cmp_ring_dma, VAR_0->cmp_ring_ppn,
     VAR_0->cmp_ring_num_pages);
 if (VAR_1) {
  FUNC_1(VAR_0->dev,
      "Error allocating cmp ring pages, error = %d\n", VAR_1);
  goto fail;
 }
 VAR_0->cmp_ring = VAR_0->cmp_ring_dma.vaddr;

 VAR_0->msg_ring = ((void*)0);
 if (VAR_0->use_msg) {
  VAR_1 = FUNC_2(VAR_0, &VAR_0->msg_ring_dma,
      VAR_0->msg_ring_ppn, VAR_0->msg_ring_num_pages);
  if (VAR_1) {
   FUNC_1(VAR_0->dev,
       "Error allocating cmp ring pages, error = %d\n",
       VAR_1);
   goto fail;
  }
  VAR_0->msg_ring = VAR_0->msg_ring_dma.vaddr;
 }

 FUNC_0(1, VAR_0->dev, "rings_state: %p\n", VAR_0->rings_state);
 FUNC_0(1, VAR_0->dev, "req_ring: %p - %u pages\n", VAR_0->req_ring,
     VAR_0->req_ring_num_pages);
 FUNC_0(1, VAR_0->dev, "cmp_ring: %p - %u pages\n", VAR_0->cmp_ring,
     VAR_0->cmp_ring_num_pages);
 FUNC_0(1, VAR_0->dev, "msg_ring: %p - %u pages\n", VAR_0->msg_ring,
     VAR_0->msg_ring_num_pages);

fail:
 if (VAR_1) {
  FUNC_3(VAR_0);
 }
 return (VAR_1);
}
