
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfe_rx_data* jdata; } ;
struct nfe_softc {int nfe_flags; int nfe_jumbo_disable; int nfe_dev; TYPE_1__ jrxq; int nfe_parent_tag; } ;
struct nfe_rx_data {int * rx_data_map; int * m; } ;
struct nfe_jrx_ring {int jrx_data_tag; int * jrx_spare_map; scalar_t__ jphysaddr; int jrx_desc_map; int jrx_desc_tag; void* jdesc32; void* jdesc64; scalar_t__ jnext; scalar_t__ jcur; } ;
struct nfe_dmamap_arg {scalar_t__ nfe_busaddr; } ;
struct nfe_desc64 {int dummy; } ;
struct nfe_desc32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,void*,int,int ,struct nfe_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct nfe_softc*,struct nfe_jrx_ring*) ;

__attribute__((used)) static void
FUNC_6(struct nfe_softc *VAR_11, struct nfe_jrx_ring *VAR_12)
{
 struct nfe_dmamap_arg VAR_13;
 struct nfe_rx_data *VAR_14;
 void *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 if ((VAR_11->nfe_flags & VAR_7) == 0)
  return;
 if (VAR_9 != 0) {
  FUNC_4(VAR_11->nfe_dev, "disabling jumbo frame support\n");
  VAR_11->nfe_jumbo_disable = 1;
  return;
 }

 if (VAR_11->nfe_flags & VAR_5) {
  VAR_15 = VAR_12->jdesc64;
  VAR_18 = sizeof (struct nfe_desc64);
 } else {
  VAR_15 = VAR_12->jdesc32;
  VAR_18 = sizeof (struct nfe_desc32);
 }

 VAR_12->jcur = VAR_12->jnext = 0;


 VAR_17 = FUNC_0(VAR_11->nfe_parent_tag,
     VAR_8, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6 * VAR_18,
     1,
     VAR_6 * VAR_18,
     0,
     ((void*)0), ((void*)0),
     &VAR_12->jrx_desc_tag);
 if (VAR_17 != 0) {
  FUNC_4(VAR_11->nfe_dev,
      "could not create jumbo ring DMA tag\n");
  goto fail;
 }


 VAR_17 = FUNC_0(VAR_11->nfe_parent_tag,
     1, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_4,
     1,
     VAR_4,
     0,
     ((void*)0), ((void*)0),
     &VAR_12->jrx_data_tag);
 if (VAR_17 != 0) {
  FUNC_4(VAR_11->nfe_dev,
      "could not create jumbo Rx buffer DMA tag\n");
  goto fail;
 }


 VAR_17 = FUNC_3(VAR_12->jrx_desc_tag, &VAR_15, VAR_1 |
     VAR_0 | VAR_2, &VAR_12->jrx_desc_map);
 if (VAR_17 != 0) {
  FUNC_4(VAR_11->nfe_dev,
      "could not allocate DMA'able memory for jumbo Rx ring\n");
  goto fail;
 }
 if (VAR_11->nfe_flags & VAR_5)
  VAR_12->jdesc64 = VAR_15;
 else
  VAR_12->jdesc32 = VAR_15;

 VAR_13.nfe_busaddr = 0;
 VAR_17 = FUNC_2(VAR_12->jrx_desc_tag, VAR_12->jrx_desc_map, VAR_15,
     VAR_6 * VAR_18, VAR_10, &VAR_13, 0);
 if (VAR_17 != 0) {
  FUNC_4(VAR_11->nfe_dev,
      "could not load DMA'able memory for jumbo Rx ring\n");
  goto fail;
 }
 VAR_12->jphysaddr = VAR_13.nfe_busaddr;


 VAR_17 = FUNC_1(VAR_12->jrx_data_tag, 0, &VAR_12->jrx_spare_map);
 if (VAR_17 != 0) {
  FUNC_4(VAR_11->nfe_dev,
      "could not create jumbo Rx DMA spare map\n");
  goto fail;
 }

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_14 = &VAR_11->jrxq.jdata[VAR_16];
  VAR_14->rx_data_map = ((void*)0);
  VAR_14->m = ((void*)0);
  VAR_17 = FUNC_1(VAR_12->jrx_data_tag, 0,
      &VAR_14->rx_data_map);
  if (VAR_17 != 0) {
   FUNC_4(VAR_11->nfe_dev,
       "could not create jumbo Rx DMA map\n");
   goto fail;
  }
 }

 return;

fail:




 FUNC_5(VAR_11, VAR_12);
 FUNC_4(VAR_11->nfe_dev, "disabling jumbo frame support due to "
     "resource shortage\n");
 VAR_11->nfe_jumbo_disable = 1;
}
