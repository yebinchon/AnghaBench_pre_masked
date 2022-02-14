
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_conf {int dummy; } ;
struct sc_pcminfo {scalar_t__ chnum; void* dev; struct sc_info* sc; } ;
struct sc_info {void* dev; int dma_size; scalar_t__ sdma_channel; int ih; int * res; int buf_base; int buf_base_phys; int dma_map; int dma_tag; int bsh; int bst; int * lock; void* conf; scalar_t__ pos; int * sr; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (void*,int ,int *) ;
 int FUNC_1 (int ,int,int,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,int *,int) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,int,int *,int ,struct sc_pcminfo*,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,char*) ;
 scalar_t__ FUNC_9 (struct sc_info*) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int,int ,int) ;
 int FUNC_12 (void*,int *,struct sc_pcminfo*) ;
 int FUNC_13 (void*,int ,int *,struct sc_pcminfo*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*,struct sc_pcminfo*,int,int ) ;
 int FUNC_16 (void*,int) ;
 int FUNC_17 (void*,char*) ;
 int * VAR_14 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (struct sc_info*) ;
 int * FUNC_22 (int ,char*) ;
 int FUNC_23 (char*,int,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_24(device_t VAR_20)
{
 char VAR_21[VAR_13];
 struct sc_pcminfo *VAR_22;
 struct sc_info *VAR_23;
 int VAR_24;

 VAR_23 = FUNC_11(sizeof(*VAR_23), VAR_7, VAR_9 | VAR_10);
 VAR_23->dev = VAR_20;
 VAR_23->sr = &VAR_14[0];
 VAR_23->pos = 0;
 VAR_23->conf = FUNC_11(sizeof(struct sdma_conf), VAR_7, VAR_9 | VAR_10);

 VAR_23->lock = FUNC_22(FUNC_7(VAR_20), "ssi softc");
 if (VAR_23->lock == ((void*)0)) {
  FUNC_8(VAR_20, "Can't create mtx\n");
  return (VAR_4);
 }

 if (FUNC_0(VAR_20, VAR_17, VAR_23->res)) {
  FUNC_8(VAR_20, "could not allocate resources\n");
  return (VAR_4);
 }


 VAR_23->bst = FUNC_19(VAR_23->res[0]);
 VAR_23->bsh = FUNC_18(VAR_23->res[0]);


 if (FUNC_9(VAR_23)) {
  FUNC_8(VAR_20, "could not find active SDMA\n");
  return (VAR_4);
 }


 VAR_22 = FUNC_11(sizeof(struct sc_pcminfo), VAR_7, VAR_8 | VAR_10);
 VAR_22->sc = VAR_23;
 VAR_22->dev = VAR_20;





 VAR_23->dma_size = 131072;






 VAR_24 = FUNC_1(
     FUNC_4(VAR_23->dev),
     4, VAR_23->dma_size,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_23->dma_size, 1,
     VAR_23->dma_size, 0,
     ((void*)0), ((void*)0),
     &VAR_23->dma_tag);

 VAR_24 = FUNC_3(VAR_23->dma_tag, (void **)&VAR_23->buf_base,
     VAR_1 | VAR_0, &VAR_23->dma_map);
 if (VAR_24) {
  FUNC_8(VAR_20, "cannot allocate framebuffer\n");
  return (VAR_4);
 }

 VAR_24 = FUNC_2(VAR_23->dma_tag, VAR_23->dma_map, VAR_23->buf_base,
     VAR_23->dma_size, VAR_15, &VAR_23->buf_base_phys, VAR_1);
 if (VAR_24) {
  FUNC_8(VAR_20, "cannot load DMA map\n");
  return (VAR_4);
 }

 FUNC_6(VAR_23->buf_base, VAR_23->dma_size);


 VAR_24 = FUNC_5(VAR_20, VAR_23->res[1], VAR_5 | VAR_6,
     ((void*)0), VAR_16, VAR_22, &VAR_23->ih);
 if (VAR_24) {
  FUNC_8(VAR_20, "Unable to alloc interrupt resource.\n");
  return (VAR_4);
 }

 FUNC_16(VAR_20, FUNC_14(VAR_20) | VAR_12);

 VAR_24 = FUNC_15(VAR_20, VAR_22, 1, 0);
 if (VAR_24) {
  FUNC_8(VAR_20, "Can't register pcm.\n");
  return (VAR_4);
 }

 VAR_22->chnum = 0;
 FUNC_13(VAR_20, VAR_11, &VAR_18, VAR_22);
 VAR_22->chnum++;

 FUNC_23(VAR_21, VAR_13, "at simplebus");
 FUNC_17(VAR_20, VAR_21);

 FUNC_12(VAR_20, &VAR_19, VAR_22);
 FUNC_21(VAR_23);

 FUNC_10(VAR_20);

 VAR_23->sdma_channel = FUNC_20();
 if (VAR_23->sdma_channel < 0) {
  FUNC_8(VAR_23->dev, "Can't get sDMA channel\n");
  return (1);
 }

 return (0);
}
