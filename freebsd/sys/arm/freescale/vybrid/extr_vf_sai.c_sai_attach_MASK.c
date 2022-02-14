
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {scalar_t__ chnum; void* dev; struct sc_info* sc; } ;
struct sc_info {int dma_size; int ih; int * res; int buf_base; int buf_base_phys; int dma_map; int dma_tag; void* dev; int bsh; int bst; int * lock; scalar_t__ pos; int * sr; } ;
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
 void* FUNC_10 (int,int ,int) ;
 int FUNC_11 (void*,int *,struct sc_pcminfo*) ;
 int FUNC_12 (void*,int ,int *,struct sc_pcminfo*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*,struct sc_pcminfo*,int,int ) ;
 int FUNC_15 (void*,int) ;
 int FUNC_16 (void*,char*) ;
 int * VAR_14 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_19 (struct sc_pcminfo*) ;
 int FUNC_20 (struct sc_info*) ;
 int * FUNC_21 (int ,char*) ;
 int FUNC_22 (char*,int,char*) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_20)
{
 char VAR_21[VAR_13];
 struct sc_pcminfo *VAR_22;
 struct sc_info *VAR_23;
 int VAR_24;

 VAR_23 = FUNC_10(sizeof(*VAR_23), VAR_7, VAR_9 | VAR_10);
 VAR_23->dev = VAR_20;
 VAR_23->sr = &VAR_14[0];
 VAR_23->pos = 0;

 VAR_23->lock = FUNC_21(FUNC_7(VAR_20), "sai softc");
 if (VAR_23->lock == ((void*)0)) {
  FUNC_8(VAR_20, "Cant create mtx\n");
  return (VAR_4);
 }

 if (FUNC_0(VAR_20, VAR_17, VAR_23->res)) {
  FUNC_8(VAR_20, "could not allocate resources\n");
  return (VAR_4);
 }


 VAR_23->bst = FUNC_18(VAR_23->res[0]);
 VAR_23->bsh = FUNC_17(VAR_23->res[0]);


 if (FUNC_9(VAR_23)) {
  FUNC_8(VAR_20, "could not find active eDMA\n");
  return (VAR_4);
 }


 VAR_22 = FUNC_10(sizeof(struct sc_pcminfo), VAR_7, VAR_8 | VAR_10);
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

 FUNC_15(VAR_20, FUNC_13(VAR_20) | VAR_12);

 VAR_24 = FUNC_14(VAR_20, VAR_22, 1, 0);
 if (VAR_24) {
  FUNC_8(VAR_20, "Can't register pcm.\n");
  return (VAR_4);
 }

 VAR_22->chnum = 0;
 FUNC_12(VAR_20, VAR_11, &VAR_18, VAR_22);
 VAR_22->chnum++;

 FUNC_22(VAR_21, VAR_13, "at simplebus");
 FUNC_16(VAR_20, VAR_21);

 FUNC_11(VAR_20, &VAR_19, VAR_22);

 FUNC_19(VAR_22);
 FUNC_20(VAR_23);

 return (0);
}
