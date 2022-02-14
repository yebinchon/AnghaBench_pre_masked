
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2661_tx_ring {int count; TYPE_1__* data; int data_dmat; int physaddr; int desc; int desc_map; int desc_dmat; scalar_t__ stat; scalar_t__ next; scalar_t__ cur; scalar_t__ queued; } ;
struct rt2661_tx_data {int dummy; } ;
struct rt2661_softc {int sc_dev; } ;
struct TYPE_2__ {int map; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,int *,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 TYPE_1__* FUNC_6 (int,int ,int) ;
 int VAR_11 ;
 int FUNC_7 (struct rt2661_softc*,struct rt2661_tx_ring*) ;

__attribute__((used)) static int
FUNC_8(struct rt2661_softc *VAR_12, struct rt2661_tx_ring *VAR_13,
    int VAR_14)
{
 int VAR_15, VAR_16;

 VAR_13->count = VAR_14;
 VAR_13->queued = 0;
 VAR_13->cur = VAR_13->next = VAR_13->stat = 0;

 VAR_16 = FUNC_0(FUNC_4(VAR_12->sc_dev), 4, 0,
     VAR_3, VAR_2, ((void*)0), ((void*)0),
     VAR_14 * VAR_10, 1, VAR_14 * VAR_10,
     0, ((void*)0), ((void*)0), &VAR_13->desc_dmat);
 if (VAR_16 != 0) {
  FUNC_5(VAR_12->sc_dev, "could not create desc DMA tag\n");
  goto fail;
 }

 VAR_16 = FUNC_3(VAR_13->desc_dmat, (void **)&VAR_13->desc,
     VAR_0 | VAR_1, &VAR_13->desc_map);
 if (VAR_16 != 0) {
  FUNC_5(VAR_12->sc_dev, "could not allocate DMA memory\n");
  goto fail;
 }

 VAR_16 = FUNC_2(VAR_13->desc_dmat, VAR_13->desc_map, VAR_13->desc,
     VAR_14 * VAR_10, VAR_11, &VAR_13->physaddr,
     0);
 if (VAR_16 != 0) {
  FUNC_5(VAR_12->sc_dev, "could not load desc DMA map\n");
  goto fail;
 }

 VAR_13->data = FUNC_6(VAR_14 * sizeof (struct rt2661_tx_data), VAR_6,
     VAR_7 | VAR_8);
 if (VAR_13->data == ((void*)0)) {
  FUNC_5(VAR_12->sc_dev, "could not allocate soft data\n");
  VAR_16 = VAR_4;
  goto fail;
 }

 VAR_16 = FUNC_0(FUNC_4(VAR_12->sc_dev), 1, 0,
     VAR_3, VAR_2, ((void*)0), ((void*)0), VAR_5,
     VAR_9, VAR_5, 0, ((void*)0), ((void*)0), &VAR_13->data_dmat);
 if (VAR_16 != 0) {
  FUNC_5(VAR_12->sc_dev, "could not create data DMA tag\n");
  goto fail;
 }

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_16 = FUNC_1(VAR_13->data_dmat, 0,
      &VAR_13->data[VAR_15].map);
  if (VAR_16 != 0) {
   FUNC_5(VAR_12->sc_dev, "could not create DMA map\n");
   goto fail;
  }
 }

 return 0;

fail: FUNC_7(VAR_12, VAR_13);
 return VAR_16;
}
