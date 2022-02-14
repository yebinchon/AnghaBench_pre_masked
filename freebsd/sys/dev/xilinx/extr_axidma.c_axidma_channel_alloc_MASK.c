
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct axidma_fdt_data* data; } ;
typedef TYPE_1__ xdma_controller_t ;
struct xdma_channel {int caps; void* chan; TYPE_1__* xdma; } ;
struct axidma_softc {struct axidma_channel* channels; int dev; } ;
struct axidma_fdt_data {size_t id; } ;
struct axidma_channel {int used; int descs_num; scalar_t__ descs_used_count; scalar_t__ idx_tail; scalar_t__ idx_head; struct axidma_softc* sc; struct xdma_channel* xchan; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct axidma_softc*,size_t) ;
 struct axidma_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, struct xdma_channel *VAR_4)
{
 xdma_controller_t *VAR_5;
 struct axidma_fdt_data *VAR_6;
 struct axidma_channel *VAR_7;
 struct axidma_softc *VAR_8;

 VAR_8 = FUNC_1(VAR_3);

 if (VAR_4->caps & VAR_2) {
  FUNC_2(VAR_8->dev,
      "Error: busdma operation is not implemented.");
  return (-1);
 }

 VAR_5 = VAR_4->xdma;
 VAR_6 = VAR_5->data;

 VAR_7 = &VAR_8->channels[VAR_6->id];
 if (VAR_7->used == 0) {
  if (FUNC_0(VAR_8, VAR_6->id) != 0)
   return (-1);
  VAR_7->xchan = VAR_4;
  VAR_4->caps |= VAR_1;
  VAR_4->chan = (void *)VAR_7;
  VAR_7->sc = VAR_8;
  VAR_7->used = 1;
  VAR_7->idx_head = 0;
  VAR_7->idx_tail = 0;
  VAR_7->descs_used_count = 0;
  VAR_7->descs_num = VAR_0;

  return (0);
 }

 return (-1);
}
